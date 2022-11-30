#define MAX_PARAMS  26

extern const char *params[];

#define paramPorLetra(letra)   (params + (letra) - 'A')

extern bool acharComando(const char *src, const char *padrao);
