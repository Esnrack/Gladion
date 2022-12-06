#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "objeto.h"
#include "misc.h"

static bool objetoTemTag(OBJETO *obj, const char *nome) //verifica se objeto existe
{
   if (nome != NULL && *nome != '\0')
   {
      const char **tag;
      for (tag = obj->tags; *tag != NULL; tag++) //ve cada tag e compara com o nome dado
      {
         if (strcmp(*tag, nome) == 0) return true;
      }
   }
   return false;
}

static OBJETO nomeAmbiguo;

static OBJETO *pegarObjeto(const char *nome, OBJETO *de, DISTANCE maxDistance) //verifica se objeto esta no local e se o nome utilizado na tag e ambiguo
{
   OBJETO *obj, *res = NULL; //res = resultado
   for (obj = objs; obj < fimDosObjs; obj++)
   {
      if (objetoTemTag(obj, nome) && verDistancia(de, obj) <= maxDistance) //verifica se o objeto existe e se esta proximo
      {
         res = res == NULL ? obj : &nomeAmbiguo;
      }
   }
   return res;
}

OBJETO *estaVisivel(const char *intencao, const char *nome) //verifica se o objeto esta visivel
{
   OBJETO *obj = pegarObjeto(nome, player, distLa);
   if (obj == NULL) //se nao achar o objeto entra aqui
   {
      if (pegarObjeto(nome, player, distAquiNao) == NULL) //verifica se entende a acao do player
      {
         printf("Eu nao entendo %s.\n", intencao);
      }
      else if (estaAceso(player->local)) //verifica se o player consegue enxergar no local
      {
         printf("Voce nao ve nenhum %s aqui.\n", nome);
      }
      else
      {
         printf("E muito escuro aqui.\n");
      }
   }
   else if (obj == &nomeAmbiguo) //se a tag utilizada estiver em mais de um objeto da area entra aqui
   {
      printf("Por favor seja mais especifico sobre qual %s voce se refere.\n", nome);
      obj = NULL;
   }
   return obj;
}

OBJETO *pegarPosse(OBJETO *de, const char *verbo, const char *nome) //pega objeto de alguem ou algum lugar
{
   OBJETO *obj = NULL;
   if (de == NULL)
   {
      printf("Eu nao entendi quem voce quer %s.\n", verbo);
   }
   else if ((obj = pegarObjeto(nome, de, distContidoGuardado)) == NULL) //verifica se objeto esta no local
   {
      if (pegarObjeto(nome, player, distAquiNao) == NULL)  //verifica se o objeto existe
      {
         printf("Eu nao entendi o que voce quer %s.\n", verbo);
      }
      else if (de == player) //verifica se o objeto esta com o player
      {
         printf("Voce nao tem nenhum %s.\n", nome);
      }
      else //verifica se o alvo tem o objeto
      {
         printf("Parece nao haver nenhum %s que voce possar pegar de %s.\n",
                nome, de->descricao);
      }
   }
   else if (obj == &nomeAmbiguo) //verifica se existe mais de uma tag igual
   {
      printf("Por favor seja especifico sobre qual %s voce quer %s.\n",
             nome, verbo);
      obj = NULL;
   }
   else if (obj == de) //verifica se o objeto e o alvo sao o mesmo
   {
      printf("Voce nao devia fazer isso com %s.\n", obj->descricao);
      obj = NULL;
   }
   return obj;
}

OBJETO *verTopico(const char *nome) //verifica se o objeto existe
{
   OBJETO *obj;
   for (obj = objs; obj < fimDosObjs; obj++)
   {
      if (objetoTemTag(obj, nome)) return obj;
   }
   return NULL;
}
