#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include "objeto.h"
#include "misc.h"
#include "achar.h"

const char *params[MAX_PARAMS];

static const char *pularEspacos(const char *src) //ignora espacos a mais
{
   while (isspace(*src)) src++;
   return src;
}

static const char *acharEspacos(const char *src) //acha quando o espaco e usado
{
   return *src == '\0' || isspace(*src) ? pularEspacos(src) : NULL;
}

static const char *acharTerminal(const char *src, char terminal) //acha terminal
{
   return terminal == ' '                    ? acharEspacos(src) :
          tolower(*src) == tolower(terminal) ? src + 1          : NULL;
}

static const char *acharTag(const char *src, const char *tag, bool noFim) //achar tag de algum objeto
{
   while (src != NULL && *tag != '\0')
   {
      src = acharTerminal(src, *tag++); //src = System Resource Controller, cuida da parte de executar os comandos executados
   }
   return noFim && src != NULL && *pularEspacos(src) != '\0' ? NULL : src;
}

static const char *acharParam(const char *src, const char **par, bool loose) //acha os parametros definidos
{
   const char *restoDoSrc = loose ? src + strlen(src) : NULL;
   OBJETO *obj;
   for (obj = objs; obj < fimDosObjs; obj++)
   {
      const char **tag;
      for (tag = obj->tags; *tag != NULL; tag++)
      {
         const char *behindMatch = acharTag(src, *tag, loose);
         if (behindMatch != NULL && strlen(*tag) > strlen(*par))
         {
            *par = *tag;
            restoDoSrc = behindMatch;
         }
      }
   }
   if (**par == '\0')
   {
      *par = src;
   }
   return restoDoSrc;
}

bool acharComando(const char *src, const char *padrao) //acha os comandos
{
   const char **par;
   for (par = params; par < params + MAX_PARAMS; par++)
   {
      *par = "";
   }
   for (src = pularEspacos(src); src != NULL && *padrao != '\0'; padrao++)
   {
      src = isupper(*padrao)
               ? acharParam(src, paramPorLetra(*padrao), padrao[1] == '\0')
               : acharTerminal(src, *padrao);
   }
   return src != NULL && *pularEspacos(src) == '\0';
}
