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

typedef struct
{
   const char *padrao;
   int (*funcao)(void);
} COMANDO;

static int executarSair(void)
{
   return -1;
}

static int executarNaoAchou(void)
{
   const char *src = *params;
   int tam;
   for (tam = 0; src[tam] != '\0' && !isspace(src[tam]); tam++);
   if (tam > 0) printf("I don't know how to '%.*s'.\n", tam, src);
   return 0;
}

static int executeWait(void)
{
   printf("Some time passes...\n");
   return 1;
}

int separarExecutar(const char *input)
{
   static const COMANDO comandos[] =
   {
      { "quit"                , executarSair      },
      { "look"                , executarOlharVolta},
      { "look around"         , executarOlharVolta},
      { "look at A"           , executarOlhar     },
      { "look A"              , executarOlhar     },
      { "examine A"           , executarOlhar     },
      { "go to A"             , executarIr        },
      { "go A"                , executarIr        },
      { "get A from B"        , executarPegarDe   },
      { "get A"               , executarPegar     },
      { "put A in B"          , executarColocarEm },
      { "drop A in B"         , executarColocarEm },
      { "drop A"              , executarLargar    },
      { "ask A from B"        , executarPedirPara },
      { "ask A"               , executarPedir     },
      { "give A to B"         , executarDarPara   },
      { "give A"              , executarDar       },
      { "inventory"           , executarInventario},
      { "open A"              , executeAbrir      },
      { "close A"             , executeFechar     },
      { "lock A"              , executeTrancar    },
      { "unlock A"            , executeDestrancar },
      { "turn on A"           , executarLigar     },
      { "turn off A"          , executarDesligar  },
      { "turn A on"           , executarLigar     },
      { "turn A off"          , executarDesligar  },
      { "talk with B about A" , executarFalarPara },
      { "talk about A with B" , executarFalarPara },
      { "talk about A"        , executarFala      },
      { "talk A"              , executarFala      },
      { "attack with B"       , executarAtaque    },
      { "attack A with B"     , executarAtaque    },
      { "attack A"            , executarAtaque    },
      { "wait"                , executeWait       },
      { "A"                   , executarNaoAchou  }
   };
   const COMANDO *cmd;
   for (cmd = comandos; !acharComando(input, cmd->padrao); cmd++);
   return (*cmd->funcao)();
}
