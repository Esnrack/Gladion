#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "misc.h"
#include "nome.h"

OBJETO *objetoAlcancavel(const char *intencao, const char *nome) //verifica se o objeto com o qual que interagir esta nas proximidades
{
   OBJETO *obj = estaVisivel(intencao, nome);
   switch (verDistancia(player, obj))
   {
   case distEu:
      printf("Voce nao devia estar fazendo isso consigo mesmo.\n");
      break;
   case distContidoGuardado:
   case distContidoAqui:
      printf("Voce deveria pegar isso de %s primeiro.\n",
             obj->local->descricao);
      break;
   case distLa:
      printf("Muito longe, va mais perto por favor.\n");
      break;
   case distAquiNao:
   case distObjetoDesconhecido:
      // ja visto em estaVisivel
      break;
   default:
      return obj;
   }
   return NULL;
}
