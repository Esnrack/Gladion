#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "achar.h"
#include "chegar.h"
#include "mudar.h"

int executarLigar(void) //liga lampiao
{
   OBJETO *obj = objetoAlcancavel("o que voce quer acender", params[0]);
   if (obj != NULL)
   {
      if (obj == lampOff) //verifica se o objeto e o lampiao desligado
      {
         trocarLampada();
      }
      else
      {
         printf(obj == lampOn ? "O lampiao ja esta aceso.\n" //verifica se o objeto e o lampiao ligado
                              : "Voce nao pode acender isso.\n");
      }
      return 1;
   }
   return 0;
}

int executarDesligar(void) //desliga lampiao
{
   OBJETO *obj = objetoAlcancavel("o que voce quer apagar", params[0]);
   if (obj != NULL)
   {
      if (obj == lampOn) //verifica se o objeto e o lampiao ligado
      {
         trocarLampada();
      }
      else
      {
         if(player->vida > 0)
         {
            printf(obj == lampOff ? "O lampiao ja esta apagado.\n" //verifica se o objeto e o lampiao desligado
                               : "Voce nao pode apagar isso.\n");

         }
            
      }
      return 1;
   }
   return 0;
}
