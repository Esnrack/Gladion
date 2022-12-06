#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "misc.h"
#include "achar.h"
#include "nome.h"
#include "mover.h"

int executarPegar(void)
{
   OBJETO *obj = estaVisivel("o que voce quer pegar", params[0]); //verifica se o objeto esta visivel
   switch (verDistancia(player, obj))
   {
   case distEu:
      printf("Voce nao devia fazer isso com voce mesmo.\n");
      return 1;
   case distGuardado:
      printf("Voce ja tem %s.\n", obj->descricao);
      return 0;
   case distLa:
      printf("Muito longe, va mais perto.\n");
      return 0;
   case distObjetoDesconhecido:
      //ja visto em estaVisivel
      return 0;
   default:
      if (obj->local != NULL && obj->local->vida > 0) //verifica se o local onde o objeto esta guardado esta vivo
      {
         printf("Voce devia pedir para %s gentilmente.\n", obj->local->descricao);
         return 1;
      }
      else
      {
         return moverObjetos(obj, player); //move o objeto
      }
   }
}

int executarLargar(void) //larga o objeto no local onde o player esta
{
   return moverObjetos(pegarPosse(player, "largar", params[0]), player->local);
}

int executarPedir(void) //pede para um NPC um item
{
   return moverObjetos(pegarPosse(atorAqui(), "pedir", params[0]), player);
}

int executarDar(void) //da um item para um NPC
{
   return moverObjetos(pegarPosse(player, "dar", params[0]), atorAqui());
}

int executarInventario(void) //verifica o inventario
{
   if (listaObjetosNoLocal(player) == 0)
   {
      printf("Seus bolsos estao vazios.\n");
   }
   return 0;
}

int executarVida(void) //verifica a quantidade de vida
{
   printf("Sua vida atual e %i.\n", player->vida);
   return 0;

}