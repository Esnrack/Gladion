#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "misc.h"
#include "achar.h"
#include "nome.h"

int executarOlharVolta(void) //olha ao redor
{
   if (estaAceso(player->local)) //verifica se esta claro
   {
      printf("Voce esta em %s.\n", player->local->descricao);
   }
   else
   {
      printf("E muito escuro aqui.\n");
   }
   listaObjetosNoLocal(player->local); //mostra a lista de objetos no local
   return 1;
}

int executarOlhar(void) //olha para algo especifico
{
   OBJETO *obj = estaVisivel("o que voce que olhar", params[0]);
   switch (verDistancia(player, obj))
   {
   case distContidoAqui:
      printf("Dificil de ver, tente pegar isso primeiro.\n");
      return 0;
   case distLa:
      printf("Muito longe, va mais perto por favor.\n");
      return 0;
   case distAquiNao:
      printf("Voce nao ve nenhum %s aqui.\n", params[0]);
      return 0;
   case distObjetoDesconhecido:
      //ja visto em estaVisivel
      return 0;
   default:
      printf("%s\n", obj->detalhes); //msotra os detalhes
      listaObjetosNoLocal(obj); //msotra os objeto contidos, se ha algum
      return 1;
   }
}

static void moverPlayer(OBJETO *passagem) //move o player entre os nodos
{
   printf("%s\n", passagem->textoAoIr);
   if (passagem->destino != NULL)
   {
      player->local = passagem->destino;
      printf("\n");
      executarOlharVolta();
   }
}

int executarIr(void) //tenta ir para algum lugar
{
   OBJETO *obj = estaVisivel("onde voce quer ir", params[0]);
   switch (verDistancia(player, obj))
   {
   case distLa:
      moverPlayer(verPassagem(player->local, obj));
      return 1;
   case distAquiNao:
      printf("Voce nao ve nenhum %s aqui.\n", params[0]);
      return 0;
   case distObjetoDesconhecido:
      //ja visto em estaVisivel
      return 0;
   default:
      moverPlayer(obj);
      return 1;
   }
}
