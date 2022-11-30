#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "misc.h"
#include "achar.h"
#include "nome.h"
#include "chegar.h"
#include "dano.h"

static OBJETO *vitimaAqui()
{
   OBJETO *vitima = atorAqui();
   if (vitima == NULL)
   {
      printf("There is nobody here to attack.\n");
   }
   return vitima;
}

int executarAtaque(void)
{
   OBJETO *vitima =
      *params[0] == '\0' ? vitimaAqui()
                         : objetoAlcancavel("who to attack", params[0]);
   if (vitima != NULL)
   {
      OBJETO *arma =
         *params[1] == '\0' ? pegarMelhorArma(player)
                            : pegarPosse(player, "wield", params[1]);
      if (arma != NULL)
      {
         darDano(player, arma, vitima);
         return 1;
      }
   }
   return 0;
}
