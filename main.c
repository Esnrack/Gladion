#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "expandir.h"
#include "separaexec.h"
#include "turno.h"

static char input[100] = "look around";

static bool pegarDoArq(FILE *arq)
{
   bool ok = fgets(input, sizeof input, arq) != NULL;
   if (ok) input[strcspn(input, "\n")] = '\0';
   return ok;
}

static bool pegarInput(const char *nomeArq)
{
   static FILE *arq = NULL;
   bool ok;
   if (arq == NULL)
   {
      if (nomeArq != NULL) arq = fopen(nomeArq, "rt");
      if (arq == NULL) arq = stdin;
   }
   else if (arq == stdin && nomeArq != NULL)
   {
      FILE *saida = fopen(nomeArq, "at");
      if (saida != NULL)
      {
         fprintf(saida, "%s\n", input);
         fclose(saida);
      }
   }
   printf("\n--> ");
   ok = pegarDoArq(arq);
   if (arq != stdin)
   {
      if (ok)
      {
         printf("%s\n", input);
      }
      else
      {
         fclose(arq);
         ok = pegarDoArq(arq = stdin);
      }
   }
   return ok;
}

static bool processarInput(char *input, int tam)
{
   return turno(separarExecutar(expandir(input, tam)));
}

int main()
{
   char nomeArq[20] = "savegame.txt";
   setlocale(LC_ALL, "Portuguese");
   printf("Welcome to Little Cave Adventure.\n");
   while (processarInput(input, sizeof input) && pegarInput(nomeArq));
   printf("\nBye!\n");
   return 0;
}
