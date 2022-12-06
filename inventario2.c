#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "achar.h"
#include "nome.h"
#include "mover.h"
#include "chegar.h"

int executarPegarDe(void) //pega de um local especifico
{
   OBJETO *de = objetoAlcancavel("o que voce quer pegar de", params[1]); //verifica se o objeto com o qual que interagir esta nas proximidades
   if (de != NULL && estaVisivel("o que voce quer pegar", params[0]) != NULL)
   {
      if (de->vida > 0) //verifica se o local esta vivo
      {
         printf("Voce devia pedir para %s gentilmente.\n", de->descricao);
         return 1;
      }
      else
      {
         return moverObjetos(pegarPosse(de, "pegar", params[0]), player);
      }
   }
   return 0;
}

int executarColocarEm(void) //coloca em um lugar espcifico
{
   OBJETO *obj = pegarPosse(player, "colocar", params[0]);
   if (obj != NULL)
   {
      OBJETO *para = objetoAlcancavel("onde colocar isso", params[1]); //verifica se o objeto com o qual que interagir esta nas proximidades
      if (para != NULL)
      {
         if (para->vida > 0)
         {
            printf("Voce devia oferecer gentilmente para %s.\n", para->descricao);
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

int executarPedirPara(void) //pede algo especificamente para alguem
{
   OBJETO *de = objetoAlcancavel("para quem pedir", params[1]); //verifica se o objeto com o qual que interagir esta nas proximidades
   if (de != NULL)
   {
      if (de->vida > 0)
      {
         if (estaVisivel("o que voce que pedir", params[0]) != NULL)
         {
            return moverObjetos(pegarPosse(de, "pedir", params[0]), player);
         }
      }
      else
      {
         printf("Nao ha resposta de %s.\n", de->descricao);
         return 1;
      }
   }
   return 0;
}

int executarDarPara(void) //da algo para alguem
{
   OBJETO *obj = pegarPosse(player, "dar", params[0]);
   if (obj != NULL)
   {
      OBJETO *para = objetoAlcancavel("para quem dar isso", params[1]); //verifica se o objeto com o qual que interagir esta nas proximidades
      if (para != NULL)
      {
         if (para->vida > 0)
         {
            return moverObjetos(obj, para);
         }
         else
         {
            printf("Nenhum entusiasmo e mostrado por %s.\n", para->descricao);
            return 1;
         }
      }
   }
   return 0;
}
