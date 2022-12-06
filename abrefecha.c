#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "achar.h"
#include "chegar.h"

int executarAbrir(void) //abre algum objeto
{
   OBJETO *obj = objetoAlcancavel("o que voce deseja abrir", params[0]);
   if (obj != NULL) (*obj->abrir)();
   return obj != NULL ? 1 : 0;
}

int executarFechar(void) //fecha algum objeto
{
   OBJETO *obj = objetoAlcancavel("o que voce deseja fechar", params[0]);
   if (obj != NULL) (*obj->fechar)();
   return obj != NULL ? 1 : 0;
}

int executarTrancar(void) //tranca algum objeto
{
   OBJETO *obj = objetoAlcancavel("o que voce deseja trancar", params[0]);
   if (obj != NULL) (*obj->trancar)();
   return obj != NULL ? 1 : 0;
}

int executarDestrancar(void) //destranca algum objeto
{
   OBJETO *obj = objetoAlcancavel("o que voce deseja destrancar", params[0]);
   if (obj != NULL) (*obj->destrancar)();
   return obj != NULL ? 1 : 0;
}
