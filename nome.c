#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "objeto.h"
#include "misc.h"

static bool objetoTemTag(OBJETO *obj, const char *nome)
{
   if (nome != NULL && *nome != '\0')
   {
      const char **tag;
      for (tag = obj->tags; *tag != NULL; tag++)
      {
         if (strcmp(*tag, nome) == 0) return true;
      }
   }
   return false;
}

static OBJETO nomeAmbiguo;

static OBJETO *pegarObjeto(const char *nome, OBJETO *de, DISTANCE maxDistance)
{
   OBJETO *obj, *res = NULL; //res = resultado
   for (obj = objs; obj < fimDosObjs; obj++)
   {
      if (objetoTemTag(obj, nome) && verDistancia(de, obj) <= maxDistance)
      {
         res = res == NULL ? obj : &nomeAmbiguo;
      }
   }
   return res;
}

OBJETO *estaVisivel(const char *intencao, const char *nome)
{
   OBJETO *obj = pegarObjeto(nome, player, distLa);
   if (obj == NULL)
   {
      if (pegarObjeto(nome, player, distAquiNao) == NULL)
      {
         printf("I don't understand %s.\n", intencao);
      }
      else if (estaAceso(player->local))
      {
         printf("You don't see any %s here.\n", nome);
      }
      else
      {
         printf("It's too dark.\n");
      }
   }
   else if (obj == &nomeAmbiguo)
   {
      printf("Please be specific about which %s you mean.\n", nome);
      obj = NULL;
   }
   return obj;
}

OBJETO *pegarPosse(OBJETO *de, const char *verbo, const char *nome)
{
   OBJETO *obj = NULL;
   if (de == NULL)
   {
      printf("I don't understand who you want to %s.\n", verbo);
   }
   else if ((obj = pegarObjeto(nome, de, distContidoGuardado)) == NULL)
   {
      if (pegarObjeto(nome, player, distAquiNao) == NULL)
      {
         printf("I don't understand what you want to %s.\n", verbo);
      }
      else if (de == player)
      {
         printf("You are not holding any %s.\n", nome);
      }
      else
      {
         printf("There appears to be no %s you can get de %s.\n",
                nome, de->descricao);
      }
   }
   else if (obj == &nomeAmbiguo)
   {
      printf("Please be specific about which %s you want to %s.\n",
             nome, verbo);
      obj = NULL;
   }
   else if (obj == de)
   {
      printf("You should not be doing that to %s.\n", obj->descricao);
      obj = NULL;
   }
   return obj;
}

OBJETO *verTopico(const char *nome)
{
   OBJETO *obj;
   for (obj = objs; obj < fimDosObjs; obj++)
   {
      if (objetoTemTag(obj, nome)) return obj;
   }
   return NULL;
}
