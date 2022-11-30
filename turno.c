#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "misc.h"
#include "local.h"
#include "dano.h"

static OBJETO *acharMelhorArmaNaVolta(OBJETO *ator, OBJETO *arma)
{
   OBJETO *obj;
   for (obj = objs; obj < fimDosObjs; obj++)
   {
      if (estaSegurando(ator->local, obj) && obj->impacto < arma->impacto)
      {
         arma = obj;
      }
   }
   return arma;
}

static void turnoDoAtor(OBJETO *ator)
{
   if (estaSegurando(player->local, ator) && ator->confiar < 0)
   {
      OBJETO *arma = pegarMelhorArma(ator);
      OBJETO *melhor = acharMelhorArmaNaVolta(ator, arma);
      if (arma == melhor)
      {
         darDano(ator, arma, player);
      }
      else
      {
         melhor->local = ator;
         printf("You see %s pick up %s.\n",
                ator->descricao, melhor->descricao);
      }
   }
}

static void diminuirLuz(OBJETO *obj, int tempo)
{
   if ((obj->luz -= tempo) <= 0 &&
       (estaSegurando(player, obj) || estaSegurando(player->local, obj)))
   {
      printf("You see %s go out.\n", obj->descricao);
   }
}

bool turno(int tempo)
{
   if (tempo > 0)
   {
      bool originallyLit = estaAceso(player->local);
      OBJETO *obj, *originallocal = player->local;
      for (obj = objs; obj < fimDosObjs; obj++)
      {
         if (objetoValido(obj) && obj->local != NULL)
         {
            if (obj->vida > 0) turnoDoAtor(obj);
            if (obj->luz > 0) diminuirLuz(obj, tempo);
         }
      }
      if (player->vida <= 0)
      {
         printf("You rise up to a more peaceful place...\n");
         player->local = heaven;
         player->vida = 100;
         for (obj = objs; obj < fimDosObjs; obj++)
         {
            if (obj->local == player) obj->local = field; //adicionar obj->origem para o player pegar o objeto no local de origem
         }
      }
      if (originallyLit != estaAceso(player->local) ||
          originallocal != player->local)
      {
         executarOlharVolta();
      }
   }
   return tempo >= 0;
}
