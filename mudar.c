#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "misc.h"
#include "local.h"

static void trocarLocais(const char *verbo1, OBJETO *obj1, //troca objetos de lugar, normalmente para dois objetos que nao podem coexistir
                          const char *verbo2, OBJETO *obj2)
{
   OBJETO *tmp = obj1->local;
   OBJETO *obj = tmp != NULL ? obj1 : obj2;
   const char *verbo = tmp != NULL ? verbo1 : verbo2;
   obj1->local = obj2->local;
   obj2->local = tmp;
   if (verbo != NULL && player->vida > 0)
   {
      if(obj->descricao != NULL)
         printf("Voce consegue %s %s.\n", verbo, obj->descricao); 
      else
         printf("Voce consegue %s %s.\n", verbo, obj->oculto);

   }

}

void naoPodeAbrir(void)    { printf("Isso nao pode ser aberto.\n");    }
void naoPodeFechar(void)    { printf("Isso nao pode ser fechado.\n");    }
void naoPodeTrancar(void)    { printf("Isso nao pode ser trancado.\n");    }
void naoPodeDestrancar(void)  { printf("Isso nao pode ser destrancado.\n");  }

void jaAberta(void)     { printf("Isso ja esta aberto.\n");     }
void jaFechada(void)   { printf("Isso ja esta fechado.\n");   }
void jaTrancada(void)   { printf("Isso ja esta trancado.\n");   }
void jaDestrancada(void) { printf("Isso ja esta destrancado.\n"); }

void aindaAberta(void)       { printf("Ainda esta aberto.\n");       }
void aindaTrancada(void)     { printf("Esta trancado.\n");           }

void trocarBau(void) //abre ou fecha bau
{
   trocarLocais("fechar", bauAberto, "abrir", bauFechado);
}

void trocarParedeTrancada(void) //destranca parede de pedra
{
   if(chaveMisteriosa->local == player)
   {
      trocarLocais("trancar", passagemCavernaParaDesertoLiberada, "destrancar", passagemCavernaParaDesertoTravada);

   }
   else
   {
      printf("Voce nao tem a chave necessaria.\n");

   }

}

void trocarPortaDoTemploTrancada(void) //destranca porta do templo
{
   if(chaveRubi->local == player && chaveSafira->local == player && chaveEsmeralda->local == player)
   {
      trocarLocais("trancar", passagemFloresta5ParaTemploDestrancada, "destrancar", passagemFloresta5ParaTemploTrancada);

   }
   else
   {
      printf("Voce nao tem as chaves necessarias.\n");

   }

}

void trocarLampada(void) //liga e desliga lampada
{
   bool antigaLuz = estaAceso(player->local);
   trocarLocais("apagar", lampOn, "acender", lampOff);
   if (antigaLuz != estaAceso(player->local))
   {
      printf("\n");
      executarOlharVolta();
   }
}
