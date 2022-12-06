#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "misc.h"

static int pesoDosConteudos(OBJETO *recipiente) //soma o peso dos itens carregados a um objeto
{
   int som = 0;
   OBJETO *obj;
   for (obj = objs; obj < fimDosObjs; obj++)
   {
      if (estaSegurando(recipiente, obj)) som += obj->peso;
   }
   return som;
}

static void descreverMovimento(OBJETO *obj, OBJETO *para) //descreve um movimento
{
   if (para == player->local) //larga item
   {
      printf("Voce larga %s.\n", obj->descricao);
   }
   else if (para != player) //da objeto para alguem ou coloca em algum lugar
   {
      printf(para->vida > 0 ? "Voce da %s para %s.\n" : "Voce coloca %s em %s.\n",
             obj->descricao, para->descricao);
   }
   else if (obj->local == player->local) //pega objeto do local onde esta
   {
      printf("Voce pega %s.\n", obj->descricao);
   }
   else //pega objeto de alguem ou algum lugar
   {
      printf("Voce pega %s de %s.\n",
             obj->descricao, obj->local->descricao);
   }
}

int moverObjetos(OBJETO *obj, OBJETO *para) //move objetos para um local
{
   if (obj == NULL)
   {
      //ja visto em estaVisivel ou pegarPosse
      return 0;
   }
   else if (para == NULL) //verifica se ha um NPC no lugar
   {
      printf("Nao ha ninguem para voce dar isso.\n");
      return 0;
   }
   else if (obj->local != NULL && obj->local != player && //quando se pede um item para alguem
            obj->local->vida > 0 && obj->local->confiar <= 0)
   {
      printf("Parece que %s da algo a voce.\n",
             obj->local->descricao);
      obj->local = player;
      return 1;
   }
   else if (obj->peso > para->capacidade) //verifica peso de um objeto em relacao a capacidade
   {
      printf("Isso e muito pesado.\n");
      return 1;
   }
   else if (obj->peso + pesoDosConteudos(para) > para->capacidade) //verficia a soma do peso dos itens em um lugar em relacao a sua capacidade
   {
      printf("Isso pode ficar muito pesado.\n");
      return 1;
   }
   else //muda o objeto de lugar
   {
      descreverMovimento(obj, para);
      obj->local = para;
      return 1;
   }
}
