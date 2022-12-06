#include <stdbool.h>
#include <string.h>
#include "achar.h"

typedef struct
{
   const char *abreviado;
   const char *expandido;
} ABREVIACAO;

static int minimo(int x, int y) //ve qual o menor
{
   return x < y ? x : y;
}

char *expandir(char *input, int bufsize) //expande abreviacoes para sua versao inteira e manda pro input a versao inteira
{
   static const ABREVIACAO abreviacoes[] =
   {
      {"n", "ir norte"},
      {"s", "ir sul"},
      {"o", "ir oeste"},
      {"l", "ir leste"},
      {"inv", "inventario"},
      {"x A", "examinar "},
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
