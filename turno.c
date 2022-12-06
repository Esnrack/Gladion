#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "objeto.h"
#include "misc.h"
#include "local.h"
#include "dano.h"
#include "onoff.h"
#include "separaexec.h"

static OBJETO *acharMelhorArmaNaVolta(OBJETO *ator, OBJETO *arma) //procura a melhor arma do ambiente
{
   OBJETO *obj;
   for (obj = objs; obj < fimDosObjs; obj++)
   {
      if (estaSegurando(ator->local, obj) && obj->impacto < arma->impacto) //verifica qual arma da mais danp
      {
         arma = obj;
      }
   }
   return arma;
}

static void turnoDoAtor(OBJETO *ator) //faz com que o NPC procure e pegue a melhor arma no ambiente
{
   if (estaSegurando(player->local, ator) && ator->confiar < 0)
   {
      OBJETO *arma = pegarMelhorArma(ator); //pega melhor arma do inventario
      OBJETO *melhor = acharMelhorArmaNaVolta(ator, arma); //procura melhora arma do ambiente
      if (arma == melhor)
      {
         darDano(ator, arma, player);
      }
      else
      {
         melhor->local = ator;
         printf("Voce ve %s pegar %s.\n",
                ator->descricao, melhor->descricao);
      }
   }
}

bool turno(int tempo) //serve para ver se o tempo passou
{
   if (tempo > 0)
   {
      if(player->local == deserto && deserto->passou == 0) //local secreto que da buffs para o player na primeira vez que entra nesse lugar
      {
         printf("Essa trajetoria fez suas forcas aumentarem.\n");
         player->capacidade = 40; //aumenta a capacidade de carregar itens
         player->vidaMaxima = 150; //aumenta a vida maxima
         player->vida = player->vidaMaxima; //recupera todo hp do player
         deserto->passou = 1; //conta que o player ja passou por la

      }
      bool originalmenteAceso = estaAceso(player->local);
      OBJETO *obj, *localOriginal = player->local;
      for (obj = objs; obj < fimDosObjs; obj++)
      {
         if (objetoValido(obj) && obj->local != NULL)
         {
            if (obj->vida > 0) turnoDoAtor(obj);
         }
      }
      if (player->vida <= 0)
      {
         if(paraiso->passou <= 0) //player pode morrer uma vez
         {   
            printf("Voce ganhou mais uma chance...\n");
            player->local = paraiso; //muda o local de player pra outra area
            paraiso->passou++; //conta que o player ja passou por esse local
            separarExecutar("apagar lamp");
            player->vida = player->vidaMaxima; //volta toda a vida do player
            for (obj = objs; obj < fimDosObjs; obj++)
            {
               if (obj->local == player) obj->local = obj->origem; //os objetos que estavam no inventario do player voltam aos seus locais de origem
            }

         }
         else //caso o player morra o jogo acaba e o save é deletado
         {
            printf("Voce gastou todas as suas chances\n");
            printf("GAME OVER\n");
            remove("savegame.txt"); //deleta o save
            getche();
            exit(0); //fecha o programa

         }
      }
      if (originalmenteAceso != estaAceso(player->local) || //verifica se o local esta iluminado
          localOriginal != player->local)
      {
         executarOlharVolta(); //olha a volta
      }
   }
   return tempo >= 0;
}
