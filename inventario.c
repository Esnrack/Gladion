#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "misc.h"
#include "achar.h"
#include "nome.h"
#include "mover.h"

int executarPegar(void)
{
   OBJETO *obj = estaVisivel("what you want to get", params[0]);
   switch (verDistancia(player, obj))
   {
   case distEu:
      printf("You should not be doing that to yourself.\n");
      return 1;
   case distGuardado:
      printf("You already have %s.\n", obj->descricao);
      return 0;
   case distLa:
      printf("Too far away, move closer please.\n");
      return 0;
   case distObjetoDesconhecido:
      // already handled by estaVisivel
      return 0;
   default:
      if (obj->local != NULL && obj->local->vida > 0)
      {
         printf("You should ask %s nicely.\n", obj->local->descricao);
         return 1;
      }
      else
      {
         return moverObjetos(obj, player);
      }
   }
}

int executarLargar(void)
{
   return moverObjetos(pegarPosse(player, "drop", params[0]), player->local);
}

int executarPedir(void)
{
   return moverObjetos(pegarPosse(atorAqui(), "ask", params[0]), player);
}

int executarDar(void)
{
   return moverObjetos(pegarPosse(player, "give", params[0]), atorAqui());
}

int executarInventario(void)
{
   if (listaObjetosNoLocal(player) == 0)
   {
      printf("You are empty-handed.\n");
   }
   return 1;
}
