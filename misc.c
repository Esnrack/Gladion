#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "misc.h"

bool estaSegurando(OBJETO *recipiente, OBJETO *obj) //verifica se algum item esta em algum lugar
{
   return objetoValido(obj) && obj->local == recipiente;
}

bool estaAceso(OBJETO *alvo) //verfica se esta claro
{
   OBJETO *obj;
   if (objetoValido(alvo))
   {
      if (alvo->luz > 0) //ve se a luz e maior que 0
      {
         return true;
      }
      for (obj = objs; obj < fimDosObjs; obj++)
      {
         if (objetoValido(obj) && obj->luz > 0 && //verifica se algum dos objetos no local clareia
             (estaSegurando(alvo, obj) || estaSegurando(alvo, obj->local)))
         {
            return true;
         }
      }
   }
   return false;
}

static bool estaPerceptivel(OBJETO *obj) //verifica se o player consegue ver um objeto
{
   return obj->local == player ||
          estaAceso(obj) || estaAceso(obj->perspectiva) || estaAceso(player->local);
}

OBJETO *verPassagem(OBJETO *de, OBJETO *para) //verifica se uma passagem e pecebida naquele local
{
   if (de != NULL && para != NULL)
   {
      OBJETO *obj;
      for (obj = objs; obj < fimDosObjs; obj++)
      {
         if (estaSegurando(de, obj) && obj->perspectiva == para)
         {
            return obj;
         }
      }
   }
   return NULL;
}

DISTANCE verDistancia(OBJETO *de, OBJETO *para) //verifica as diferentes distancias
{
   return para == NULL                               ? distObjetoDesconhecido :
          !objetoValido(para)                         ? distAquiNao :
          para == de                               ? distEu :
          estaSegurando(de, para)                      ? distGuardado :
          !estaPerceptivel(para)                        ? distAquiNao :
          estaSegurando(para, de)                      ? distLocal :
          estaSegurando(de->local, para)            ? distAqui :
          estaSegurando(de, para->local)            ? distContidoGuardado :
          estaSegurando(de->local, para->local)  ? distContidoAqui :
          verPassagem(de->local, para) != NULL   ? distLa :
                                                     distAquiNao;
}

OBJETO *atorAqui(void) //verifica se ha um NPC no local
{
   OBJETO *obj;
   for (obj = objs; obj < fimDosObjs; obj++)
   {
      if (estaSegurando(player->local, obj) && obj != player &&
          estaPerceptivel(obj) && obj->vida > 0)
      {
         return obj;
      }
   }
   return NULL;
}

int listaObjetosNoLocal(OBJETO *local) //lista os objeto no local onde se procura
{
   int contar = 0;
   OBJETO *obj;
   for (obj = objs; obj < fimDosObjs; obj++)
   {
      if (obj != player && estaSegurando(local, obj) && estaPerceptivel(obj))
      {
         if (contar++ == 0)
         {
            printf("%s:\n", local->conteudos);
         }
         printf("%s\n", obj->descricao);
      }
   }
   return contar;
}
