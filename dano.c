#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "objeto.h"
#include "misc.h"

static void descreverAtaque(OBJETO *atacante, OBJETO *vitima, OBJETO *arma)
{
   const char *armaDescricao = arma == atacante ? "bare hands"
                                                      : arma->descricao;
   if (atacante == player)
   {
      printf("You hit %s with %s.\n", vitima->descricao, armaDescricao);
   }
   else if (vitima == player)
   {
      printf("You are hit by %s with %s.\n",
             atacante->descricao, armaDescricao);
   }
   else
   {
      printf("You see %s hit %s with %s.\n",
             atacante->descricao, vitima->descricao, armaDescricao);
   }
}

static void descreverMorte(OBJETO *vitima)
{
   if (vitima == player)
   {
      printf("You die.\n");
   }
   else
   {
      printf("You see %s die.\n", vitima->descricao);
   }
}

void darDano(OBJETO *atacante, OBJETO *arma, OBJETO *vitima)
{
   int dano = (rand() % 6) * arma->impacto * atacante->vida / 100;
   if (dano < 0)
   {
      if (vitima->vida > 0)
      {
         descreverAtaque(atacante, vitima, arma);
         vitima->vida += dano;
         if (vitima->vida <= 0)
         {
            vitima->vida = 0;
            descreverMorte(vitima);
         }
         if (atacante == player)
         {
            vitima->confiar--;
         }
      }
      else if (atacante == player)
      {
         printf("That will have little effect; %s is already dead.\n",
                vitima->descricao);
      }
   }
   else if (atacante == player)
   {
      printf("You try to hit %s with %s, but you miss.\n",
             vitima->descricao,
             arma == atacante ? "bare hands" : arma->descricao);
   }
}

OBJETO *pegarMelhorArma(OBJETO *atacante)
{
   OBJETO *obj, *arma = atacante;
   for (obj = objs; obj < fimDosObjs; obj++)
   {
      if (estaSegurando(atacante, obj) && obj->impacto < arma->impacto)
      {
         arma = obj;
      }
   }
   return arma;
}
