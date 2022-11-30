typedef enum {
   distEu,
   distGuardado,
   distContidoGuardado,
   distLocal,
   distAqui,
   distContidoAqui,
   distLa,
   distAquiNao,
   distObjetoDesconhecido
} DISTANCE;

extern bool estaSegurando(OBJETO *recipiente, OBJETO *obj);
extern bool estaAceso(OBJETO *local);
extern OBJETO *verPassagem(OBJETO *de, OBJETO *para);
extern DISTANCE verDistancia(OBJETO *de, OBJETO *para);
extern OBJETO *atorAqui(void);
extern int listaObjetosNoLocal(OBJETO *local);
