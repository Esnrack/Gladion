#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "misc.h"

static int pesoDosConteudos(OBJETO *recipiente)
{
   int sum = 0;
   OBJETO *obj;
   for (obj = objs; obj < fimDosObjs; obj++)
   {
      if (estaSegurando(recipiente, obj)) sum += obj->peso;
   }
   return sum;
}

static void descreverMovimento(OBJETO *obj, OBJETO *para)
{
   if (para == player->local)
   {
      printf("You drop %s.\n", obj->descricao);
   }
   else if (para != player)
   {
      printf(para->vida > 0 ? "You give %s to %s.\n" : "You put %s in %s.\n",
             obj->descricao, para->descricao);
   }
   else if (obj->local == player->local)
   {
      printf("You pick up %s.\n", obj->descricao);
   }
   else
   {
      printf("You get %s from %s.\n",
             obj->descricao, obj->local->descricao);
   }
}

int moverObjetos(OBJETO *obj, OBJETO *para)
{
   if (obj == NULL)
   {
      // already handled by getVisible or getPossession
      return 0;
   }
   else if (para == NULL)
   {
      printf("There is nobody here to give that to.\n");
      return 0;
   }
   else if (obj->local != NULL && obj->local != player &&
            obj->local->vida > 0 && obj->local->confiar <= 0)
   {
      printf("It seems %s feels reluctant to give you anything.\n",
             obj->local->descricao);
      return 1;
   }
   else if (para->capacidade == 0)
   {
      printf(obj == keyForBox && (para == closedBox || para == lockedBox) ?
                "The key seems to fit the lock.\n" :
                "It doesn't seem to fit in.\n");
      return 1;
   }
   else if (obj->peso > para->capacidade)
   {
      printf("That is way too heavy.\n");
      return 1;
   }
   else if (obj->peso + pesoDosConteudos(para) > para->capacidade)
   {
      printf("That would become too heavy.\n");
      return 1;
   }
   else
   {
      descreverMovimento(obj, para);
      obj->local = para;
      return 1;
   }
}
