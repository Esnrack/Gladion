#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "misc.h"
#include "achar.h"
#include "local.h"
#include "inventario.h"
#include "inventario2.h"
#include "abrefecha.h"
#include "onoff.h"
#include "falar.h"
#include "ataque.h"
#include "dano.h"

typedef struct
{
   const char *padrao;
   int (*funcao)(void);
} COMANDO;

static int executarSair(void) //sair do jogo
{
   return -1;
}

static int executarNaoAchou(void) //caso nao ache a funcao
{
   const char *src = *params;
   int tam;
   for (tam = 0; src[tam] != '\0' && !isspace(src[tam]); tam++);
   if (tam > 0) printf("Eu nao sei como '%.*s'.\n", tam, src);
   return 0;
}

static int executarEspera(void) //caso o player queira esperar
{
   printf("Um tempo passa...\n");
   return 1;
}

int separarExecutar(const char *input) //executa os comandos
{
   static const COMANDO comandos[] =
   {
      { "sair"                , executarSair      },
      { "olhar"               , executarOlharVolta},
      { "olhar volta"         , executarOlharVolta},
      { "olhar para A"        , executarOlhar     },
      { "olhar A"             , executarOlhar     },
      { "examinar A"          , executarOlhar     },
      { "ir para A"           , executarIr        },
      { "ir A"                , executarIr        },
      { "pegar A de B"        , executarPegarDe   },
      { "pegar A"             , executarPegar     },
      { "colocar A em B"      , executarColocarEm },
      { "largar A em B"       , executarColocarEm },
      { "largar A"            , executarLargar    },
      { "pedir A para B"      , executarPedirPara },
      { "pedir A"             , executarPedir     },
      { "dar A para B"        , executarDarPara   },
      { "dar A"               , executarDar       },
      { "inventario"          , executarInventario},
      { "abrir A"             , executarAbrir     },
      { "fechar A"            , executarFechar    },
      { "trancar A"           , executarTrancar   },
      { "destrancar A"        , executarDestrancar},
      { "acender A"           , executarLigar     },
      { "apagar A"            , executarDesligar  },
      { "ligar A"             , executarLigar     },
      { "desligar A"          , executarDesligar  },
      { "falar com B sobre A" , executarFalarPara },
      { "falar sobre A com B" , executarFalarPara },
      { "falar sobre A"       , executarFala      },
      { "falar A"             , executarFala      },
      { "atacar com B"        , executarAtaque    },
      { "atacar A com B"      , executarAtaque    },
      { "atacar A"            , executarAtaque    },
      { "comer A"             , executarRecuperar },
      { "vida"                , executarVida      },
      { "esperar"             , executarEspera    },
      { "A"                   , executarNaoAchou  } //aqui cai qualquer coisa que nao saiba o que e
   };
   const COMANDO *cmd;
   for (cmd = comandos; !acharComando(input, cmd->padrao); cmd++); //acha os comandos, mesmo que com letro maiuscula
   return (*cmd->funcao)();
}
