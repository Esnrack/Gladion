#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "achar.h"
#include "nome.h"
#include "mover.h"
#include "chegar.h"

int executarPegarDe(void)
{
   OBJETO *de = objetoAlcancavel("where to get that de", params[1]);
   if (de != NULL && estaVisivel("what you want to get", params[0]) != NULL)
   {
      if (de->vida > 0)
      {
         printf("You should ask %s nicely.\n", de->descricao);
         return 1;
      }
      else
      {
         return moverObjetos(pegarPosse(de, "get", params[0]), player);
      }
   }
   return 0;
}

int executarColocarEm(void)
{
   OBJETO *obj = pegarPosse(player, "put", params[0]);
   if (obj != NULL)
   {
      OBJETO *para = objetoAlcancavel("where to put that in", params[1]);
      if (para != NULL)
      {
         if (para->vida > 0)
         {
            printf("You should offer that nicely to %s.\n", para->descricao);
            return 1;
         }
         else
         {
            return moverObjetos(obj, para);
         }
      }
   }
   return 0;
}

int executarPedirPara(void)
{
   OBJETO *de = objetoAlcancavel("who to ask that", params[1]);
   if (de != NULL)
   {
      if (de->vida > 0)
      {
         if (estaVisivel("what you want to ask", params[0]) != NULL)
         {
            return moverObjetos(pegarPosse(de, "ask", params[0]), player);
         }
      }
      else
      {
         printf("There is no response de %s.\n", de->descricao);
         return 1;
      }
   }
   return 0;
}

int executarDarPara(void)
{
   OBJETO *obj = pegarPosse(player, "give", params[0]);
   if (obj != NULL)
   {
      OBJETO *para = objetoAlcancavel("who to give that to", params[1]);
      if (para != NULL)
      {
         if (para->vida > 0)
         {
            return moverObjetos(obj, para);
         }
         else
         {
            printf("No eagerness is shown by %s.\n", para->descricao);
            return 1;
         }
      }
   }
   return 0;
}
