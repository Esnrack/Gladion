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

static int executarAjuda(void)
{
   printf("sair\nolhar\nolhar volta\nlhar para A\nolhar A\nexaminar A\nir para A\nir A\npegar A de B\npegar A\ncolocar A em B\nargar A em B\nlargar A\npedir A para B\npedir A\ndar A para B\ndar A\ninventario\nabrir A\nfechar A\ntrancar A\ndestrancar A\nacender A\napagar A\nligar A\ndesligar A\nfalar com B sobre A\nfalar sobre A com B\nfalar sobre A\nfalar A\natacar com B\natacar A com B\natacar A\ncomer A\nvida\nesperar\najuda\nA\n");

         return 0;

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
      { "ajuda"               , executarAjuda     },
      { "A"                   , executarNaoAchou  } //aqui cai qualquer coisa que nao saiba o que e
   };
   const COMANDO *cmd;
   for (cmd = comandos; !acharComando(input, cmd->padrao); cmd++); //acha os comandos, mesmo que com letra maiuscula
   return (*cmd->funcao)();
}
