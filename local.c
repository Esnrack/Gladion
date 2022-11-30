#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "misc.h"
#include "achar.h"
#include "nome.h"

int executarOlharVolta(void)
{
   if (estaAceso(player->local))
   {
      printf("You are in %s.\n", player->local->descricao);
   }
   else
   {
      printf("It is very dark in here.\n");
   }
   listaObjetosNoLocal(player->local);
   return 1;
}

int executarOlhar(void)
{
   OBJETO *obj = estaVisivel("what you want to look at", params[0]);
   switch (verDistancia(player, obj))
   {
   case distContidoAqui:
      printf("Hard to see, try to get it first.\n");
      return 0;
   case distLa:
      printf("Too far away, move closer please.\n");
      return 0;
   case distAquiNao:
      printf("You don't see any %s here.\n", params[0]);
      return 0;
   case distObjetoDesconhecido:
      // already handled by estaVisivel
      return 0;
   default:
      printf("%s\n", obj->detalhes);
      listaObjetosNoLocal(obj);
      return 1;
   }
}

static void moverPlayer(OBJETO *passagem)
{
   printf("%s\n", passagem->textoAoIr);
   if (passagem->destino != NULL)
   {
      player->local = passagem->destino;
      printf("\n");
      executarOlharVolta();
   }
}

int executarIr(void)
{
   OBJETO *obj = estaVisivel("where you want to go", params[0]);
   switch (verDistancia(player, obj))
   {
   case distLa:
      moverPlayer(verPassagem(player->local, obj));
      return 1;
   case distAquiNao:
      printf("You don't see any %s here.\n", params[0]);
      return 0;
   case distObjetoDesconhecido:
      // already handled by estaVisivel
      return 0;
   default:
      moverPlayer(obj);
      return 1;
   }
}
