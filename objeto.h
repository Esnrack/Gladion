
typedef struct objeto {
   bool         (*condicao)(void);
   const char    *descricao;
   const char    *oculto;
   const char   **tags;
   struct objeto *local;
   struct objeto *origem;
   struct objeto *destino;
   struct objeto *perspectiva;
   const char    *detalhes;
   const char    *conteudos;
   const char    *textoAoIr;
   const char    *fofoca;
   int            peso;
   int            capacidade;
   int            vida;
   int            vidaMaxima;
   int            luz;
   int            impacto;
   int            confiar;
   void         (*abrir)(void);
   void         (*fechar)(void);
   void         (*trancar)(void);
   void         (*destrancar)(void);
   bool            (*comida)(void);
   int            passou;
} OBJETO;

extern OBJETO objs[];

#define mae	(objs + 0)
#define chefeAldeia	(objs + 1)
#define irmaMuriel	(objs + 2)
#define gladion	(objs + 3)
#define temploBoss	(objs + 4)
#define delimitacaoTemplo	(objs + 5)
#define passagemTemploParaFlorestaLiberada	(objs + 6)
#define passagemTemploParaFlorestaBloqueada	(objs + 7)
#define direcoes	(objs + 8)
#define clareira	(objs + 9)
#define delimitacaoClareira	(objs + 10)
#define passagemClareiraParaFloresta2	(objs + 11)
#define floresta1	(objs + 12)
#define delimitacaoFloresta1	(objs + 13)
#define passagemFloresta1ParaLago	(objs + 14)
#define passagemFloresta1ParaFloresta2	(objs + 15)
#define floresta2	(objs + 16)
#define delimitacaoFloresta2	(objs + 17)
#define passagemFloresta2ParaClareira	(objs + 18)
#define passagemFloresta2ParaFloresta1	(objs + 19)
#define passagemFloresta2ParaFloresta3	(objs + 20)
#define floresta3	(objs + 21)
#define delimitacaoFloresta3	(objs + 22)
#define passagemFloresta3ParaFloresta2	(objs + 23)
#define passagemFloresta3ParaFloresta6	(objs + 24)
#define floresta4	(objs + 25)
#define delimitacaoFloresta4	(objs + 26)
#define passagemFloresta4ParaFloresta6	(objs + 27)
#define passagemFloresta4ParaLago	(objs + 28)
#define passagemFloresta4ParaFloresta5	(objs + 29)
#define floresta5	(objs + 30)
#define delimitacaoFloresta5	(objs + 31)
#define passagemFloresta5ParaTemploTrancada	(objs + 32)
#define passagemFloresta5ParaTemploDestrancada	(objs + 33)
#define passagemFloresta5ParaFloresta4	(objs + 34)
#define floresta6	(objs + 35)
#define delimitacaoFloresta6	(objs + 36)
#define passagemFloresta6ParaFloresta3	(objs + 37)
#define passagemFloresta6ParaFloresta4	(objs + 38)
#define passagemFloresta6ParaFloresta7	(objs + 39)
#define floresta7	(objs + 40)
#define delimitacaoFloresta7	(objs + 41)
#define passagemFloresta7ParaFloresta6	(objs + 42)
#define passagemFlorestaParaCaverna	(objs + 43)
#define aldeia	(objs + 44)
#define delimitacaoAldeia	(objs + 45)
#define passagemAldeiaParaLago	(objs + 46)
#define passagemAldeiaParaCavernaBloqueada	(objs + 47)
#define passagemAldeiaParaCavernaLiberada	(objs + 48)
#define guarda	(objs + 49)
#define lago	(objs + 50)
#define delimitacaoLago	(objs + 51)
#define passagemLagoParaFloresta4	(objs + 52)
#define passagemLagoParaFloresta1	(objs + 53)
#define passagemLagoParaAldeia	(objs + 54)
#define deserto	(objs + 55)
#define delimitacaoDeserto	(objs + 56)
#define passagemDesertoParaCaverna	(objs + 57)
#define covil	(objs + 58)
#define delimitacaoCovil	(objs + 59)
#define passagemCovilParaCaverna1Liberada	(objs + 60)
#define passagemCovilParaCaverna1Bloqueada	(objs + 61)
#define passagemCovilParaCaverna2Liberada	(objs + 62)
#define passagemCovilParaCaverna2Bloqueada	(objs + 63)
#define caverna1	(objs + 64)
#define delimitacaoCaverna1	(objs + 65)
#define passagemCavernaParaAldeia	(objs + 66)
#define passagemCaverna1ParaCovil	(objs + 67)
#define caverna2	(objs + 68)
#define delimitacaoCaverna2	(objs + 69)
#define passagemCavernaParaDesertoTravada	(objs + 70)
#define passagemCavernaParaDesertoLiberada	(objs + 71)
#define passagemCaverna2ParaCovil	(objs + 72)
#define passagemCavernaParaFloresta	(objs + 73)
#define monstro	(objs + 74)
#define paraiso	(objs + 75)
#define respawn	(objs + 76)
#define paraisoLONS	(objs + 77)
#define ouro	(objs + 78)
#define player	(objs + 79)
#define bauAberto	(objs + 80)
#define bauFechado	(objs + 81)
#define lampOff	(objs + 82)
#define lampOn	(objs + 83)
#define espada	(objs + 84)
#define carroca	(objs + 85)
#define chaveMisteriosa	(objs + 86)
#define chaveRubi	(objs + 87)
#define chaveSafira	(objs + 88)
#define chaveEsmeralda	(objs + 89)
#define macaVermelha	(objs + 90)
#define macaVerde	(objs + 91)
#define macaRoxa	(objs + 92)
#define macaDourada	(objs + 93)
#define goblin	(objs + 94)
#define faca	(objs + 95)
#define garras	(objs + 96)
#define orc	(objs + 97)
#define cimitarra	(objs + 98)
#define machadoGrande	(objs + 99)
#define pedestal	(objs + 100)
#define espadaLendaria	(objs + 101)
#define ladrao	(objs + 102)
#define adaga	(objs + 103)
#define bengala	(objs + 104)
#define foice	(objs + 105)

#define fimDosObjs	(objs + 106)

#define objetoValido(obj)	((obj) != NULL && (*(obj)->condicao)())
