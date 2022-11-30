#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "achar.h"
#include "chegar.h"
#include "mudar.h"

int executarLigar(void)
{
   OBJETO *obj = objetoAlcancavel("what you want to turn on", params[0]);
   if (obj != NULL)
   {
      if (obj == lampOff)
      {
         trocarLampada();
      }
      else
      {
         printf(obj == lampOn ? "The lamp is already on.\n"
                              : "You cannot turn that on.\n");
      }
      return 1;
   }
   return 0;
}

int executarDesligar(void)
{
   OBJETO *obj = objetoAlcancavel("what you want to turn off", params[0]);
   if (obj != NULL)
   {
      if (obj == lampOn)
      {
         trocarLampada();
      }
      else
      {
         printf(obj == lampOff ? "The lamp is already off.\n"
                               : "You cannot turn that off.\n");
      }
      return 1;
   }
   return 0;
}
