#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "objeto.h"
#include "misc.h"
#include "chegar.h"
#include "achar.h"

static void descreverAtaque(OBJETO *atacante, OBJETO *vitima, OBJETO *arma) //descreve o ataque
{
   const char *armaDescricao = arma == atacante ? "maos nuas"
                                                      : arma->descricao;
   if (atacante == player)
   {
      printf("Voce acerta %s com %s.\n", vitima->descricao, armaDescricao);
   }
   else if (vitima == player)
   {
      printf("Voce e acertado por %s com %s.\n",
             atacante->descricao, armaDescricao);
   }
   else
   {
      printf("Voce ve %s acertar %s com %s.\n",
             atacante->descricao, vitima->descricao, armaDescricao);
   }
}

static void descreverMorte(OBJETO *vitima) //descreve a morte
{
   if (vitima == player)
   {
      printf("Voce morre.\n");
   }
   else
   {
      printf("Voce ve %s morrer.\n", vitima->descricao);
   }
}

void darDano(OBJETO *atacante, OBJETO *arma, OBJETO *vitima) //funcao para calcular e realizar o dano
{
   int dano = (rand() % 6) * arma->impacto * atacante->vida / atacante->vidaMaxima; //aleatoriza a quantidade de dano
   if (dano < 0) //se o dano for negativo a vitima perde vida
   {
      if (vitima->vida > 0) //se a vitima nao estiver morta entra aqui
      {
         descreverAtaque(atacante, vitima, arma); //descreve o ataque
         vitima->vida += dano; //causa o dano na vitima
         if (vitima->vida <= 0) //se a vitima morrer com o ataque entra aqui
         {
            vitima->vida = 0;
            descreverMorte(vitima); //descreve a morte
         }
         if (atacante == player) //retira confianca caso o player ataque
         {
            vitima->confiar--;
         }
      }
      else if (atacante == player) //se a vitima ja estiver morta entra aqui
      {
         printf("isso nao tera muito efeito; %s ja esta morto.\n",
                vitima->descricao);
      }
   }
   else if (atacante == player) //se o dano for 0 o player erra o ataque
   {
      printf("Voce tenta acertar %s com %s, mas erra.\n",
             vitima->descricao,
             arma == atacante ? "maos nuas" : arma->descricao);
   }
}

OBJETO *pegarMelhorArma(OBJETO *atacante) //pega a melhor arma que esta segurando para dar o dano
{
   OBJETO *obj, *arma = atacante;
   for (obj = objs; obj < fimDosObjs; obj++)
   {
      if (estaSegurando(atacante, obj) && obj->impacto < arma->impacto) //verifica qual a melhor arma das que esta segurando
      {
         arma = obj;
      }
   }
   return arma;
}

int executarRecuperar(void)
{
   OBJETO *obj = objetoAlcancavel("o que voce deseja comer", params[0]); //verifica se o objeto que busca esta proximo ou existe
   switch (verDistancia(player, obj)) //abrange as distancia possiveis
   {
   case distEu:
      printf("Voce nao devia fazer isso com voce mesmo.\n");
      return 0;
   case distObjetoDesconhecido:
      // ja visto em estaVisivel
      return 0;
   default:
      if (obj->local == player) //verifica se o player esta segurando o objeto
      {
         if(obj->comida) //verifica se o objeto e uma comida
         {
            if(player->vida == player->vidaMaxima) //verifica se o player ja esta com a vida maxima
            {
               printf("Sua vida ja esta cheia!\n");
               return 0;

            }
            else if(player->vida < player->vidaMaxima)
            {
               if(((obj->impacto * player->vidaMaxima / (player->vida))+player->vida) <= player->vidaMaxima) //verifica se a vida recuperada passa ou nao da vida maxima
               {
                  printf("Voce consegue comer %s e recupera %i de vida.\n", obj->descricao, (obj->impacto * player->vidaMaxima / (player->vida)));               

               }
               else
               {
                  printf("Voce consegue comer %s e recupera %i de vida.\n", obj->descricao, (player->vidaMaxima - player->vida));

               }
               player->vida += (obj->impacto * player->vidaMaxima / (player->vida)); //vida recuperada
               obj->local = NULL; //"come" o objeto
               if(player->vida > player->vidaMaxima) //se a vida recuperado for maior que a vida maxima e diminuida para a vida maxima
                  player->vida = player->vidaMaxima;
               return 1;

            }
         }
         else
         {
            printf("Voce nao pode comer isso!\n");
            return 0;

         }           

      }
      printf("Voce nao tem nada para comer!\n");
      return 0;
   }

}
