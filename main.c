#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "expandir.h"
#include "separaexec.h"
#include "turno.h"

static char input[100] = "olhar volta";

static bool pegarDoArq(FILE *arq) //pega as informacoes do arquivo
{
   bool ok = fgets(input, sizeof input, arq) != NULL;
   if (ok) input[strcspn(input, "\n")] = '\0';
   return ok;
}

static bool pegarInput(const char *nomeArq) //pega codigos do aquivo para o input e coloca inputs novos no arquivo
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
         fclose(saida); //fecha o arquivo
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
         fclose(arq); //fecha o arquivo
         ok = pegarDoArq(arq = stdin);
      }
   }
   return ok;
}

static bool processarInput(char *input, int tam) //processa o que o player escreve
{
   return turno(separarExecutar(expandir(input, tam)));
}

int main()
{
   char nomeArq[20] = "savegame.txt"; //nome do arquivo de save
   printf("Bem vindo a Gladion.\n");
   printf("Sua irma foi sequestrada pelo maligno Gladion\n");
   printf("Agora cabe a voce salva-la e derrotar o mal que assola essas terras.\n");
   printf("Caso precise saber os comandos use o comando 'ajuda'\n");
   printf("Boa sorte em sua aventura!\n");
   while (processarInput(input, sizeof input) && pegarInput(nomeArq));
   printf("\nAte mais, Pelaveth!\n");
   getche();
   return 0;
}
