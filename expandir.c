#include <stdbool.h>
#include <string.h>
#include "achar.h"

typedef struct
{
   const char *abreviado;
   const char *expandido;
} ABREVIACAO;

static int minimo(int x, int y)
{
   return x < y ? x : y;
}

char *expandir(char *input, int bufsize)
{
   static const ABREVIACAO abreviacoes[] =
   {
      {"n", "go north"},
      {"s", "go south"},
      {"w", "go west"},
      {"e", "go east"},
      {"inv", "inventory"},
      {"x A", "examine "},
      {"A", NULL}
   };
   const ABREVIACAO *ab;
   for (ab = abreviacoes; !acharComando(input, ab->abreviado); ab++);
   if (ab->expandido != NULL)
   {
      const char *maisInput = *paramPorLetra('A');
      int tamanhoDoExpandido = strlen(ab->expandido);
      memmove(input + tamanhoDoExpandido, maisInput,
              minimo(strlen(maisInput) + 1, bufsize - tamanhoDoExpandido - 1));
      strncpy(input, ab->expandido, tamanhoDoExpandido);
   }
   return input;
}
