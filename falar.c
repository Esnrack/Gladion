#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "misc.h"
#include "achar.h"
#include "nome.h"
#include "chegar.h"

static int falar(const char *sobre, OBJETO *para) //fala com o player
{
   OBJETO *topic = verTopico(sobre); //verifica se o objeto existe
   if (topic == NULL) //se o objeto nao existir entra aqui
   {
      printf("Nao entendi sobre o que voce quer falar.\n");
      return 0;
   }
   else
   {
      printf("Voce ouve %s falar: '%s'\n",
             para->descricao,
             topic == para ? "Eu nao gostaria de falar sobre mim."
                         : topic->fofoca);
      return 1;
   }
}

int executarFala(void)  //executa a fala
{
   OBJETO *para = atorAqui();
   if (para != NULL)
   {
      return falar(params[0], para);
   }
   else
   {
      printf("Nao ha ninguem aqui para conversar.\n");
      return 0;
   }
}

int executarFalarPara(void) //executa a fala para alguem especifico
{
   OBJETO *para = objetoAlcancavel("com quem conversar", params[1]);
   if (para != NULL)
   {
      if (para->vida > 0)
      {
         return falar(params[0], para);
      }
      else
      {
         printf("Nao ha resposta de %s.\n", para->descricao);
         return 1;
      }
   }
   return 0;
}
