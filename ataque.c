#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "misc.h"
#include "achar.h"
#include "nome.h"
#include "chegar.h"
#include "dano.h"

static OBJETO *vitimaAqui() //verifica se o alvo esta aqui
{
   OBJETO *vitima = atorAqui();
   if (vitima == NULL)
   {
      printf("Nao ha ninguem aqui para atacar.\n");
   }
   return vitima;
}

int executarAtaque(void) //ve se esta tudo de acordo para executar o ataque e dar dano
{
   OBJETO *vitima =
      *params[0] == '\0' ? vitimaAqui() //procura quem deve atacar
                         : objetoAlcancavel("quem atacar", params[0]);
   if (vitima != NULL)
   {
      OBJETO *arma =
         *params[1] == '\0' ? pegarMelhorArma(player) //procura a melhor arma
                            : pegarPosse(player, "empunhar", params[1]);
      if (arma != NULL)
      {
         darDano(player, arma, vitima); //da dano na vitima
         return 1;
      }
   }
   return 0;
}
