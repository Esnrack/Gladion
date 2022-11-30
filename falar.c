#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "misc.h"
#include "achar.h"
#include "nome.h"
#include "chegar.h"

static int falar(const char *sobre, OBJETO *para)
{
   OBJETO *topic = verTopico(sobre);
   if (topic == NULL)
   {
      printf("I don't understand what you want to talk sobre.\n");
      return 0;
   }
   else
   {
      printf("You hear %s say: '%s'\n",
             para->descricao,
             topic == para ? "I don't want to talk sobre myself."
                         : topic->fofoca);
      return 1;
   }
}

int executarFala(void)
{
   OBJETO *para = atorAqui();
   if (para != NULL)
   {
      return falar(params[0], para);
   }
   else
   {
      printf("There is nobody here to talk to.\n");
      return 0;
   }
}

int executarFalarPara(void)
{
   OBJETO *para = objetoAlcancavel("who to talk to", params[1]);
   if (para != NULL)
   {
      if (para->vida > 0)
      {
         return falar(params[0], para);
      }
      else
      {
         printf("There is no response from %s.\n", para->descricao);
         return 1;
      }
   }
   return 0;
}
