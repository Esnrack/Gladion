#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "misc.h"
#include "nome.h"

OBJETO *objetoAlcancavel(const char *intencao, const char *nome)
{
   OBJETO *obj = estaVisivel(intencao, nome);
   switch (verDistancia(player, obj))
   {
   case distEu:
      printf("You should not be doing that to yourself.\n");
      break;
   case distContidoGuardado:
   case distContidoAqui:
      printf("You would have to get it from %s first.\n",
             obj->local->descricao);
      break;
   case distLa:
      printf("Too far away, move closer please.\n");
      break;
   case distAquiNao:
   case distObjetoDesconhecido:
      // already handled by estaVisivel
      break;
   default:
      return obj;
   }
   return NULL;
}
