
typedef struct objeto {
   bool         (*condicao)(void);
   const char    *descricao;
   const char   **tags;
   struct objeto *local;
   struct objeto *destino;
   struct objeto *perspectiva;
   const char    *detalhes;
   const char    *conteudos;
   const char    *textoAoIr;
   const char    *fofoca;
   int            peso;
   int            capacidade;
   int            vida;
   int            luz;
   int            impacto;
   int            confiar;
   void         (*abrir)(void);
   void         (*fechar)(void);
   void         (*trancar)(void);
   void         (*destrancar)(void);
} OBJETO;

extern OBJETO objs[];

#define clareira	(objs + 0)
#define floresta1	(objs + 1)
#define aldeia	(objs + 2)
#define lago	(objs + 3)
#define heaven	(objs + 4)
#define respawn	(objs + 5)
#define heavenEWNS	(objs + 6)
#define field	(objs + 7)
#define cave	(objs + 8)
#define silver	(objs + 9)
#define gold	(objs + 10)
#define guard	(objs + 11)
#define player	(objs + 12)
#define intoCave	(objs + 13)
#define intoCaveBlocked	(objs + 14)
#define exitCave	(objs + 15)
#define wallField	(objs + 16)
#define wallCave	(objs + 17)
#define backroom	(objs + 18)
#define wallBackroom	(objs + 19)
#define abrirPortaQuarto	(objs + 20)
#define closedDoorToBackroom	(objs + 21)
#define abrirPortaCaverna	(objs + 22)
#define closedDoorToCave	(objs + 23)
#define abrirCaixa	(objs + 24)
#define closedBox	(objs + 25)
#define lockedBox	(objs + 26)
#define keyForBox	(objs + 27)
#define lampOff	(objs + 28)
#define lampOn	(objs + 29)
#define club	(objs + 30)
#define dagger	(objs + 31)
#define espada	(objs + 32)

#define fimDosObjs	(objs + 33)

#define objetoValido(obj)	((obj) != NULL && (*(obj)->condicao)())
