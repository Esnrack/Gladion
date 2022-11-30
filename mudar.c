#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "misc.h"
#include "local.h"

static void trocarLocais(const char *verbo1, OBJETO *obj1,
                          const char *verbo2, OBJETO *obj2)
{
   OBJETO *tmp = obj1->local;
   OBJETO *obj = tmp != NULL ? obj1 : obj2;
   const char *verbo = tmp != NULL ? verbo1 : verbo2;
   obj1->local = obj2->local;
   obj2->local = tmp;
   if (verbo != NULL) printf("You %s %s.\n", verbo, obj->descricao);
}

void naoPodeAbrir(void)    { printf("That cannot be opened.\n");    }
void naoPodeFechar(void)    { printf("That cannot be closed.\n");    }
void naoPodeTrancar(void)    { printf("That cannot be locked.\n");    }
void naoPodeDestrancar(void)  { printf("That cannot be unlocked.\n");  }

void jaAberta(void)     { printf("That is already open.\n");     }
void jaFechada(void)   { printf("That is already closed.\n");   }
void jaTrancada(void)   { printf("That is already locked.\n");   }
void jaDestrancada(void) { printf("That is already unlocked.\n"); }

void aindaAberta(void)       { printf("That is still open.\n");       }
void aindaTrancada(void)     { printf("That is locked.\n");           }

void trocarPortaParaQuarto(void)
{
   trocarLocais(NULL, abrirPortaCaverna, NULL, closedDoorToCave);
   trocarLocais("close", abrirPortaQuarto, "open", closedDoorToBackroom);
}

void trocarPortaParaCaverna(void)
{
   trocarLocais(NULL, abrirPortaQuarto, NULL, closedDoorToBackroom);
   trocarLocais("close", abrirPortaCaverna, "open", closedDoorToCave);
}

void trocarCaixa(void)
{
   trocarLocais("close", abrirCaixa, "open", closedBox);
}

void trocarCaixaTrancada(void)
{
   if (keyForBox->local == player)
   {
      trocarLocais("lock", closedBox, "unlock", lockedBox);
   }
   else
   {
      printf("You don't have a key.\n");
   }
}

void trocarLampada(void)
{
   bool oldLit = estaAceso(player->local);
   trocarLocais("turn off", lampOn, "turn on", lampOff);
   if (oldLit != estaAceso(player->local))
   {
      printf("\n");
      executarOlharVolta();
   }
}
