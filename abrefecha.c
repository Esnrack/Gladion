#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "achar.h"
#include "chegar.h"

int executeAbrir(void)
{
   OBJETO *obj = objetoAlcancavel("what you want to abrir", params[0]);
   if (obj != NULL) (*obj->abrir)();
   return obj != NULL ? 1 : 0;
}

int executeFechar(void)
{
   OBJETO *obj = objetoAlcancavel("what you want to close", params[0]);
   if (obj != NULL) (*obj->fechar)();
   return obj != NULL ? 1 : 0;
}

int executeTrancar(void)
{
   OBJETO *obj = objetoAlcancavel("what you want to lock", params[0]);
   if (obj != NULL) (*obj->trancar)();
   return obj != NULL ? 1 : 0;
}

int executeDestrancar(void)
{
   OBJETO *obj = objetoAlcancavel("what you want to unlock", params[0]);
   if (obj != NULL) (*obj->destrancar)();
   return obj != NULL ? 1 : 0;
}
