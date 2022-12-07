#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "mudar.h"
static const char *tags0[] = { "mae", "mamae", "minha mae", NULL};
static const char *tags1[] = { "chefe", "chefe da aldeia", "adam", NULL};
static const char *tags2[] = { "irma", "muriel", "irma muriel", NULL};
static const char *tags3[] = { "gladion", "maligno", "o maligno", NULL};
static const char *tags4[] = { "templo", "templo antigo", NULL};
static const char *tags5[] = { "norte", "sul", "oeste", "paredes", NULL};
static bool condicao6(void)  { return gladion->vida <= 0;}
static const char *tags6[] = { "leste", "porta", NULL};
static bool condicao7(void)  { return gladion->vida > 0;}
static const char *tags7[] = { "leste", "porta", NULL};
static const char *tags8[] = { "norte", "sul", "leste", "oeste", NULL};
static const char *tags9[] = { "clareira", "clareira pequena", "pequena clareira", NULL};
static const char *tags10[] = { "norte", "oeste", "leste", "arvores", NULL};
static const char *tags11[] = { "sul", NULL};
static const char *tags12[] = { "floresta", NULL};
static const char *tags13[] = { "norte", "oeste", "arvores", NULL};
static const char *tags14[] = { "sul", NULL};
static const char *tags15[] = { "leste", NULL};
static const char *tags16[] = { "floresta", NULL};
static const char *tags17[] = { "sul", "arvores", NULL};
static const char *tags18[] = { "norte", NULL};
static const char *tags19[] = { "oeste", NULL};
static const char *tags20[] = { "leste", NULL};
static const char *tags21[] = { "floresta", NULL};
static const char *tags22[] = { "norte", "leste", "arvores", NULL};
static const char *tags23[] = { "oeste", NULL};
static const char *tags24[] = { "sul", NULL};
static const char *tags25[] = { "floresta", NULL};
static const char *tags26[] = { "norte", "arvores", NULL};
static const char *tags27[] = { "leste", NULL};
static const char *tags28[] = { "oeste", NULL};
static const char *tags29[] = { "sul", NULL};
static const char *tags30[] = { "floresta", NULL};
static const char *tags31[] = { "sul", "leste", "arvores", NULL};
static const char *tags32[] = { "oeste", "fechadura", "fechaduras", "porta", "templo", NULL};
static const char *tags33[] = { "templo", "oeste", "porta", NULL};
static const char *tags34[] = { "norte", NULL};
static const char *tags35[] = { "floresta", NULL};
static const char *tags36[] = { "leste", "arvores", NULL};
static const char *tags37[] = { "norte", NULL};
static const char *tags38[] = { "oeste", NULL};
static const char *tags39[] = { "sul", NULL};
static const char *tags40[] = { "floresta", NULL};
static const char *tags41[] = { "oeste", "leste", "arvores", NULL};
static const char *tags42[] = { "norte", NULL};
static const char *tags43[] = { "sul", NULL};
static const char *tags44[] = { "aldeia", "vila", "vilarejo", NULL};
static const char *tags45[] = { "oeste", "norte", "arvores", NULL};
static const char *tags46[] = { "leste", NULL};
static bool condicao47(void)  { return guarda->vida > 0 && ouro->local != guarda; }
static const char *tags47[] = { "sul", "entrada", "entrada para caverna", NULL};
static bool condicao48(void)  { return guarda->vida == 0 || ouro->local == guarda; }
static const char *tags48[] = { "sul", "entrada", "entrada para caverna", NULL};
static const char *tags49[] = { "guarda", "guarda grande", NULL};
static const char *tags50[] = { "lago", NULL};
static const char *tags51[] = { "sul", "arvores", NULL};
static const char *tags52[] = { "leste", NULL};
static const char *tags53[] = { "norte", NULL};
static const char *tags54[] = { "oeste", NULL};
static const char *tags55[] = { "deserto", NULL};
static const char *tags56[] = { "norte", "sul", "leste", NULL};
static const char *tags57[] = { "oeste", "passagem", NULL};
static const char *tags58[] = { "covil", NULL};
static const char *tags59[] = { "norte", "sul", "cristais", NULL};
static bool condicao60(void)  { return monstro->vida <= 0;}
static const char *tags60[] = { "oeste", NULL};
static bool condicao61(void)  { return monstro->vida > 0;}
static const char *tags61[] = { "oeste", NULL};
static bool condicao62(void)  { return monstro->vida <= 0;}
static const char *tags62[] = { "leste", NULL};
static bool condicao63(void)  { return monstro->vida > 0;}
static const char *tags63[] = { "leste", NULL};
static const char *tags64[] = { "caverna da aldeia", NULL};
static const char *tags65[] = { "rocha", "sul", "oeste", NULL};
static const char *tags66[] = { "norte", "saida", "saida da caverna", NULL};
static const char *tags67[] = { "leste", NULL};
static const char *tags68[] = { "caverna", NULL};
static const char *tags69[] = { "rocha", "sul", NULL};
static const char *tags70[] = { "leste", "fechadura", NULL};
static const char *tags71[] = { "passagem", "leste", "fechadura", NULL};
static const char *tags72[] = { "oeste", "entrada", NULL};
static const char *tags73[] = { "norte", "saida", NULL};
static const char *tags74[] = { "monstro", "criatura", NULL};
static const char *tags75[] = { "paraiso", NULL};
static const char *tags76[] = { "portal", NULL};
static const char *tags77[] = { "leste", "oeste", "norte", "sul", NULL};
static const char *tags78[] = { "ouro", "moeda", "moeda de ouro", NULL};
static const char *tags79[] = { "eu", NULL};
static const char *tags80[] = { "bau", NULL};
static bool condicao81(void)  { return monstro->vida <= 0;}
static const char *tags81[] = { "bau", NULL};
static const char *tags82[] = { "lampiao", "lamp", "lampiao antigo", NULL};
static const char *tags83[] = { "lampiao", "lamp", "lampiao antigo", NULL};
static const char *tags84[] = { "espada", "espada do pai", "espada de seu pai", "espada de familia", NULL};
static const char *tags85[] = { "carroca", "carroca quebrada", NULL};
static const char *tags86[] = { "chave misteriosa", "chave", NULL};
static const char *tags87[] = { "chave de rubi", "chave rubi", "chave", NULL};
static const char *tags88[] = { "chave de safira", "chave safira", "chave", NULL};
static const char *tags89[] = { "chave de esmeralda", "chave esmeralda", "chave", NULL};
static const char *tags90[] = { "maca vermelha", "maca", NULL};
static const char *tags91[] = { "maca", "maca verde", NULL};
static const char *tags92[] = { "maca roxa", "maca", NULL};
static const char *tags93[] = { "maca dourada", "maca", NULL};
static const char *tags94[] = { "goblin", NULL};
static const char *tags95[] = { "faca", NULL};
static const char *tags96[] = { "garras", NULL};
static const char *tags97[] = { "orc", NULL};
static const char *tags98[] = { "cimitarra", NULL};
static const char *tags99[] = { "machado", NULL};
static const char *tags100[] = { "pedestal", NULL};
static const char *tags101[] = { "espada", "espada brilhante", NULL};
static const char *tags102[] = { "ladrao", "ladroes", NULL};
static const char *tags103[] = { "adaga", NULL};
static const char *tags104[] = { "bengala", NULL};
static const char *tags105[] = { "foice", NULL};

static bool sempreVerdadeiro(void) { return true; }

OBJETO objs[] = {
	{	/* 0 = mae */
		sempreVerdadeiro, /*condicao*/
		 "sua mae", /*descricao*/
		NULL, /*oculto*/
		tags0, /*tags*/
		 aldeia, /*local*/
		 aldeia, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Ela ficou muito abalada com o sequestro de Muriel.", /*detalhes*/
		 "Ela tem", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "Ela teve que cuidar dos filhos sozinha", /*fococa*/
		99, /*peso*/
		 15, /*capacidade*/
		 40, /*vida*/
		 40, /*vidaMaxima*/
		0, /*luz*/
		 0, /*impacto*/
		 10, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 1 = chefeAldeia */
		sempreVerdadeiro, /*condicao*/
		 "o chefe da aldeia", /*descricao*/
		NULL, /*oculto*/
		tags1, /*tags*/
		 aldeia, /*local*/
		 aldeia, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Um senhor de mais idade.", /*detalhes*/
		 "Ele tem", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "Ele governa uma pequena aldeia", /*fococa*/
		99, /*peso*/
		 10, /*capacidade*/
		 40, /*vida*/
		 40, /*vidaMaxima*/
		0, /*luz*/
		 0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 2 = irmaMuriel */
		sempreVerdadeiro, /*condicao*/
		 "sua irma Muriel", /*descricao*/
		NULL, /*oculto*/
		tags2, /*tags*/
		 temploBoss, /*local*/
		 temploBoss, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Sua irma te agradece por vir salva-la.", /*detalhes*/
		 "Ela tem", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "Ela foi sequestrada", /*fococa*/
		99, /*peso*/
		 10, /*capacidade*/
		 40, /*vida*/
		 40, /*vidaMaxima*/
		0, /*luz*/
		 0, /*impacto*/
		 10, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 3 = gladion */
		sempreVerdadeiro, /*condicao*/
		 "Gladion, o Maligno", /*descricao*/
		NULL, /*oculto*/
		tags3, /*tags*/
		 temploBoss, /*local*/
		 temploBoss, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Uma figura aterradora, sua mera presenca ja lhe causa calafrios.", /*detalhes*/
		 "Ele tem", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "Ele e o mal em pessoa", /*fococa*/
		99, /*peso*/
		 30, /*capacidade*/
		 150, /*vida*/
		 150, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		 -1, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 4 = temploBoss */
		sempreVerdadeiro, /*condicao*/
		 "templo antigo", /*descricao*/
		NULL, /*oculto*/
		tags4, /*tags*/
		NULL, /*local*/
		NULL, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Um lugar antigo, quem o construiu ja nao esta mais aqui", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "Ouvi falar que o maligno Gladion habita esse local", /*fococa*/
		99, /*peso*/
		 9999, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		 100, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 5 = delimitacaoTemplo */
		sempreVerdadeiro, /*condicao*/
		 "paredes deterioradas ao redor", /*descricao*/
		NULL, /*oculto*/
		tags5, /*tags*/
		 temploBoss, /*local*/
		 temploBoss, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		"Voce nao ve nada especial.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Cuidado, as paredes sao frageis.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 6 = passagemTemploParaFlorestaLiberada */
		condicao6, /*condicao*/
		 "uma porta para floresta a leste", /*descricao*/
		NULL, /*oculto*/
		tags6, /*tags*/
		 temploBoss, /*local*/
		 temploBoss, /*origem*/
		 floresta5, /*destino*/
		 floresta5, /*perspectiva*/
		 "Voce ve uma luz muito fraca dessa direcao.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce sai do covil do monstro.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 7 = passagemTemploParaFlorestaBloqueada */
		condicao7, /*condicao*/
		 "uma porta fechada a leste", /*descricao*/
		NULL, /*oculto*/
		tags7, /*tags*/
		 temploBoss, /*local*/
		 temploBoss, /*origem*/
		NULL, /*destino*/
		 floresta5, /*perspectiva*/
		 "Voce ve uma luz muito fraca dessa direcao.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "O monstro impede sua passagem.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 8 = direcoes */
		sempreVerdadeiro, /*condicao*/
		NULL, /*descricao*/
		NULL, /*oculto*/
		tags8, /*tags*/
		NULL, /*local*/
		NULL, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		"Voce nao ve nada especial.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "E apenas uma direcao.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 9 = clareira */
		sempreVerdadeiro, /*condicao*/
		 "clareira pequena", /*descricao*/
		NULL, /*oculto*/
		tags9, /*tags*/
		NULL, /*local*/
		NULL, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "uma pequena clareira no meio da floresta, perfeita para descansar", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "uma pequena clareira pacífica, livre de perigos", /*fococa*/
		99, /*peso*/
		 9999, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		 100, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 10 = delimitacaoClareira */
		sempreVerdadeiro, /*condicao*/
		 "arvores grandes ao redor", /*descricao*/
		NULL, /*oculto*/
		tags10, /*tags*/
		 clareira, /*local*/
		 clareira, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		"Voce nao ve nada especial.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "E uma floresta densa de mais para passar.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 11 = passagemClareiraParaFloresta2 */
		sempreVerdadeiro, /*condicao*/
		 "uma floresta a sul", /*descricao*/
		NULL, /*oculto*/
		tags11, /*tags*/
		 clareira, /*local*/
		 clareira, /*origem*/
		 floresta2, /*destino*/
		 floresta2, /*perspectiva*/
		 "Voce ve uma vasta quantidade de árvores e vegetação em volta.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce vai a floresta.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 12 = floresta1 */
		sempreVerdadeiro, /*condicao*/
		 "floresta", /*descricao*/
		NULL, /*oculto*/
		tags12, /*tags*/
		NULL, /*local*/
		NULL, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "uma densa floresta, com árvores em toda a volta", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "cuidado, lá pode haver perigos", /*fococa*/
		99, /*peso*/
		 9999, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		 100, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 13 = delimitacaoFloresta1 */
		sempreVerdadeiro, /*condicao*/
		 "arvores grandes ao redor", /*descricao*/
		NULL, /*oculto*/
		tags13, /*tags*/
		 floresta1, /*local*/
		 floresta1, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		"Voce nao ve nada especial.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "E uma floresta densa de mais para passar.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 14 = passagemFloresta1ParaLago */
		sempreVerdadeiro, /*condicao*/
		 "um lago a sul", /*descricao*/
		NULL, /*oculto*/
		tags14, /*tags*/
		 floresta1, /*local*/
		 floresta1, /*origem*/
		 lago, /*destino*/
		 lago, /*perspectiva*/
		 "Voce ve uma porcao de agua a vista com vegetacao em volta.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce vai ao lago.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 15 = passagemFloresta1ParaFloresta2 */
		sempreVerdadeiro, /*condicao*/
		 "uma floresta a leste", /*descricao*/
		NULL, /*oculto*/
		tags15, /*tags*/
		 floresta1, /*local*/
		 floresta1, /*origem*/
		 floresta2, /*destino*/
		 floresta2, /*perspectiva*/
		 "Voce ve uma vasta quantidade de árvores e vegetação em volta.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce vai a floresta.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 16 = floresta2 */
		sempreVerdadeiro, /*condicao*/
		 "floresta", /*descricao*/
		NULL, /*oculto*/
		tags16, /*tags*/
		NULL, /*local*/
		NULL, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "uma densa floresta, com árvores em toda a volta", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		 9999, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		 100, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 17 = delimitacaoFloresta2 */
		sempreVerdadeiro, /*condicao*/
		 "arvores grandes ao redor", /*descricao*/
		NULL, /*oculto*/
		tags17, /*tags*/
		 floresta2, /*local*/
		 floresta2, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		"Voce nao ve nada especial.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "E uma floresta densa de mais para passar.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 18 = passagemFloresta2ParaClareira */
		sempreVerdadeiro, /*condicao*/
		 "uma clareira a norte", /*descricao*/
		NULL, /*oculto*/
		tags18, /*tags*/
		 floresta2, /*local*/
		 floresta2, /*origem*/
		 clareira, /*destino*/
		 clareira, /*perspectiva*/
		 "Voce ve uma clareira bem iluminada e vegetação em volta.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce vai a clareira.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 19 = passagemFloresta2ParaFloresta1 */
		sempreVerdadeiro, /*condicao*/
		 "uma floresta a oeste", /*descricao*/
		NULL, /*oculto*/
		tags19, /*tags*/
		 floresta2, /*local*/
		 floresta2, /*origem*/
		 floresta1, /*destino*/
		 floresta1, /*perspectiva*/
		 "Voce ve uma vasta quantidade de árvores e vegetação em volta.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce vai a floresta.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 20 = passagemFloresta2ParaFloresta3 */
		sempreVerdadeiro, /*condicao*/
		 "uma floresta a leste", /*descricao*/
		NULL, /*oculto*/
		tags20, /*tags*/
		 floresta2, /*local*/
		 floresta2, /*origem*/
		 floresta3, /*destino*/
		 floresta3, /*perspectiva*/
		 "Voce ve uma vasta quantidade de árvores e vegetação em volta.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce vai a floresta.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 21 = floresta3 */
		sempreVerdadeiro, /*condicao*/
		 "floresta", /*descricao*/
		NULL, /*oculto*/
		tags21, /*tags*/
		NULL, /*local*/
		NULL, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "uma densa floresta, com árvores em toda a volta", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		 9999, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		 100, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 22 = delimitacaoFloresta3 */
		sempreVerdadeiro, /*condicao*/
		 "arvores grandes ao redor", /*descricao*/
		NULL, /*oculto*/
		tags22, /*tags*/
		 floresta3, /*local*/
		 floresta3, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		"Voce nao ve nada especial.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "E uma floresta densa de mais para passar.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 23 = passagemFloresta3ParaFloresta2 */
		sempreVerdadeiro, /*condicao*/
		 "uma floresta a oeste", /*descricao*/
		NULL, /*oculto*/
		tags23, /*tags*/
		 floresta3, /*local*/
		 floresta3, /*origem*/
		 floresta2, /*destino*/
		 floresta2, /*perspectiva*/
		 "Voce ve uma vasta quantidade de árvores e vegetação em volta.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce vai a floresta.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 24 = passagemFloresta3ParaFloresta6 */
		sempreVerdadeiro, /*condicao*/
		 "uma floresta a sul", /*descricao*/
		NULL, /*oculto*/
		tags24, /*tags*/
		 floresta3, /*local*/
		 floresta3, /*origem*/
		 floresta6, /*destino*/
		 floresta6, /*perspectiva*/
		 "Voce ve uma vasta quantidade de árvores e vegetação em volta.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce vai a floresta.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 25 = floresta4 */
		sempreVerdadeiro, /*condicao*/
		 "floresta", /*descricao*/
		NULL, /*oculto*/
		tags25, /*tags*/
		NULL, /*local*/
		NULL, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "uma densa floresta, com árvores em toda a volta", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		 9999, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		 100, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 26 = delimitacaoFloresta4 */
		sempreVerdadeiro, /*condicao*/
		 "arvores grandes ao redor", /*descricao*/
		NULL, /*oculto*/
		tags26, /*tags*/
		 floresta4, /*local*/
		 floresta4, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		"Voce nao ve nada especial.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "E uma floresta densa de mais para passar.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 27 = passagemFloresta4ParaFloresta6 */
		sempreVerdadeiro, /*condicao*/
		 "uma floresta a leste", /*descricao*/
		NULL, /*oculto*/
		tags27, /*tags*/
		 floresta4, /*local*/
		 floresta4, /*origem*/
		 floresta6, /*destino*/
		 floresta6, /*perspectiva*/
		 "Voce ve uma vasta quantidade de árvores e vegetação em volta.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce vai a floresta.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 28 = passagemFloresta4ParaLago */
		sempreVerdadeiro, /*condicao*/
		 "um lago a oeste", /*descricao*/
		NULL, /*oculto*/
		tags28, /*tags*/
		 floresta4, /*local*/
		 floresta4, /*origem*/
		 lago, /*destino*/
		 lago, /*perspectiva*/
		 "Voce ve uma porcao de agua a vista com vegetacao em volta.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce vai ao lago.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 29 = passagemFloresta4ParaFloresta5 */
		sempreVerdadeiro, /*condicao*/
		 "uma floresta a sul", /*descricao*/
		NULL, /*oculto*/
		tags29, /*tags*/
		 floresta4, /*local*/
		 floresta4, /*origem*/
		 floresta5, /*destino*/
		 floresta5, /*perspectiva*/
		 "Voce ve uma vasta quantidade de árvores e vegetação em volta.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce vai a floresta.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 30 = floresta5 */
		sempreVerdadeiro, /*condicao*/
		 "floresta", /*descricao*/
		NULL, /*oculto*/
		tags30, /*tags*/
		NULL, /*local*/
		NULL, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "na parede existe um grande portão mágico misterioso", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "um grande portão mágico bloquia o caminho.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		 9999, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		 100, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 31 = delimitacaoFloresta5 */
		sempreVerdadeiro, /*condicao*/
		 "arvores grandes ao redor", /*descricao*/
		NULL, /*oculto*/
		tags31, /*tags*/
		 floresta5, /*local*/
		 floresta5, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		"Voce nao ve nada especial.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "E uma floresta densa de mais para passar.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 32 = passagemFloresta5ParaTemploTrancada */
		sempreVerdadeiro, /*condicao*/
		 "uma porta de pedra para o templo a oeste", /*descricao*/
		NULL, /*oculto*/
		tags32, /*tags*/
		 floresta5, /*local*/
		 floresta5, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Voce ve 3 buracos de fechadura.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce nao consegue atravessar rocha solida.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 aindaTrancada, /*abrir*/
		 jaFechada, /*fechar*/
		 jaTrancada, /*trancar*/
		 trocarPortaDoTemploTrancada, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 33 = passagemFloresta5ParaTemploDestrancada */
		sempreVerdadeiro, /*condicao*/
		 "uma porta aberta a oeste", /*descricao*/
		NULL, /*oculto*/
		tags33, /*tags*/
		NULL, /*local*/
		NULL, /*origem*/
		 temploBoss, /*destino*/
		 temploBoss, /*perspectiva*/
		 "A porta para o templo esta aberta.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce entra no local da ultima batalha.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		 aindaAberta, /*fechar*/
		 aindaAberta, /*trancar*/
		 jaAberta, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 34 = passagemFloresta5ParaFloresta4 */
		sempreVerdadeiro, /*condicao*/
		 "uma floresta a norte", /*descricao*/
		NULL, /*oculto*/
		tags34, /*tags*/
		 floresta5, /*local*/
		 floresta5, /*origem*/
		 floresta4, /*destino*/
		 floresta4, /*perspectiva*/
		 "Voce ve uma vasta quantidade de árvores e vegetação em volta.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce vai a floresta.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 35 = floresta6 */
		sempreVerdadeiro, /*condicao*/
		 "floresta", /*descricao*/
		NULL, /*oculto*/
		tags35, /*tags*/
		NULL, /*local*/
		NULL, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "uma densa floresta, com árvores em toda a volta, com um item no chão", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		 9999, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		 100, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 36 = delimitacaoFloresta6 */
		sempreVerdadeiro, /*condicao*/
		 "arvores grandes ao redor", /*descricao*/
		NULL, /*oculto*/
		tags36, /*tags*/
		 floresta6, /*local*/
		 floresta6, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		"Voce nao ve nada especial.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "E uma floresta densa de mais para passar.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 37 = passagemFloresta6ParaFloresta3 */
		sempreVerdadeiro, /*condicao*/
		 "uma floresta a norte", /*descricao*/
		NULL, /*oculto*/
		tags37, /*tags*/
		 floresta6, /*local*/
		 floresta6, /*origem*/
		 floresta3, /*destino*/
		 floresta3, /*perspectiva*/
		 "Voce ve uma vasta quantidade de árvores e vegetação em volta.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce vai a floresta.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 38 = passagemFloresta6ParaFloresta4 */
		sempreVerdadeiro, /*condicao*/
		 "uma floresta a oeste", /*descricao*/
		NULL, /*oculto*/
		tags38, /*tags*/
		 floresta6, /*local*/
		 floresta6, /*origem*/
		 floresta4, /*destino*/
		 floresta4, /*perspectiva*/
		 "Voce ve uma vasta quantidade de árvores e vegetação em volta.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce vai a floresta.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 39 = passagemFloresta6ParaFloresta7 */
		sempreVerdadeiro, /*condicao*/
		 "uma floresta a sul", /*descricao*/
		NULL, /*oculto*/
		tags39, /*tags*/
		 floresta6, /*local*/
		 floresta6, /*origem*/
		 floresta7, /*destino*/
		 floresta7, /*perspectiva*/
		 "Voce ve uma vasta quantidade de árvores e vegetação em volta.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce vai a floresta.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 40 = floresta7 */
		sempreVerdadeiro, /*condicao*/
		 "floresta", /*descricao*/
		NULL, /*oculto*/
		tags40, /*tags*/
		NULL, /*local*/
		NULL, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "uma densa floresta, com árvores em toda a volta", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		 9999, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		 100, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 41 = delimitacaoFloresta7 */
		sempreVerdadeiro, /*condicao*/
		 "arvores grandes ao redor", /*descricao*/
		NULL, /*oculto*/
		tags41, /*tags*/
		 floresta7, /*local*/
		 floresta7, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		"Voce nao ve nada especial.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "E uma floresta densa de mais para passar.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 42 = passagemFloresta7ParaFloresta6 */
		sempreVerdadeiro, /*condicao*/
		 "uma floresta a norte", /*descricao*/
		NULL, /*oculto*/
		tags42, /*tags*/
		 floresta7, /*local*/
		 floresta7, /*origem*/
		 floresta6, /*destino*/
		 floresta6, /*perspectiva*/
		 "Voce ve uma vasta quantidade de árvores e vegetação em volta.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce vai a floresta.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 43 = passagemFlorestaParaCaverna */
		sempreVerdadeiro, /*condicao*/
		 "uma entrada de caverna ao sul", /*descricao*/
		NULL, /*oculto*/
		tags43, /*tags*/
		 floresta7, /*local*/
		 floresta7, /*origem*/
		 caverna2, /*destino*/
		 caverna2, /*perspectiva*/
		 "Uma entrada escura.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce entra na caverna.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 44 = aldeia */
		sempreVerdadeiro, /*condicao*/
		 "aldeia", /*descricao*/
		NULL, /*oculto*/
		tags44, /*tags*/
		NULL, /*local*/
		NULL, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "uma aldeia com algumas poucas casas, sua mãe mora nela e sua irmã...", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "é um bom local para se viver, o único perigo é a proximidade com a caverna", /*fococa*/
		99, /*peso*/
		 9999, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		 100, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 45 = delimitacaoAldeia */
		sempreVerdadeiro, /*condicao*/
		 "arvores grandes ao redor", /*descricao*/
		NULL, /*oculto*/
		tags45, /*tags*/
		 aldeia, /*local*/
		 aldeia, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		"Voce nao ve nada especial.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "E uma floresta densa de mais para passar.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 46 = passagemAldeiaParaLago */
		sempreVerdadeiro, /*condicao*/
		 "um lago a leste", /*descricao*/
		NULL, /*oculto*/
		tags46, /*tags*/
		 aldeia, /*local*/
		 aldeia, /*origem*/
		 lago, /*destino*/
		 lago, /*perspectiva*/
		 "Voce ve uma porcao de agua a vista com vegetacao em volta.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce vai ao lago.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 47 = passagemAldeiaParaCavernaBloqueada */
		condicao47, /*condicao*/
		 "uma entrada para uma caverna ao sul", /*descricao*/
		NULL, /*oculto*/
		tags47, /*tags*/
		 aldeia, /*local*/
		 aldeia, /*origem*/
		NULL, /*destino*/
		 caverna1, /*perspectiva*/
		 "Voce ve uma entrada estreita.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "O guarda lhe impede de passar e diz: Aqui nao e lugar para voce.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 48 = passagemAldeiaParaCavernaLiberada */
		condicao48, /*condicao*/
		 "uma entrada para uma caverna ao sul", /*descricao*/
		NULL, /*oculto*/
		tags48, /*tags*/
		 aldeia, /*local*/
		 aldeia, /*origem*/
		 caverna1, /*destino*/
		 caverna1, /*perspectiva*/
		 "Voce ve uma entrada estreita.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce entra na caverna.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 49 = guarda */
		sempreVerdadeiro, /*condicao*/
		 "um guarda grande", /*descricao*/
		NULL, /*oculto*/
		tags49, /*tags*/
		 aldeia, /*local*/
		 aldeia, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "O guarda realmente e grande.", /*detalhes*/
		 "Ele tem", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "Gosta de ter a mao molhada", /*fococa*/
		99, /*peso*/
		 20, /*capacidade*/
		 100, /*vida*/
		 100, /*vidaMaxima*/
		0, /*luz*/
		 -1, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 50 = lago */
		sempreVerdadeiro, /*condicao*/
		 "um lago", /*descricao*/
		NULL, /*oculto*/
		tags50, /*tags*/
		NULL, /*local*/
		NULL, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "A agua do lago e transparente como vidro, mas mesmo assim nao e possevel ver o fundo", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "a agua do lago e usada pelo aldeoes para bebida e banho", /*fococa*/
		99, /*peso*/
		 9999, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		 100, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 51 = delimitacaoLago */
		sempreVerdadeiro, /*condicao*/
		 "arvores grandes ao redor", /*descricao*/
		NULL, /*oculto*/
		tags51, /*tags*/
		 lago, /*local*/
		 lago, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		"Voce nao ve nada especial.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "E uma floresta densa de mais para passar.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 52 = passagemLagoParaFloresta4 */
		sempreVerdadeiro, /*condicao*/
		 "uma floresta a leste", /*descricao*/
		NULL, /*oculto*/
		tags52, /*tags*/
		 lago, /*local*/
		 lago, /*origem*/
		 floresta4, /*destino*/
		 floresta4, /*perspectiva*/
		 "Voce ve uma vasta quantidade de árvores e vegetação em volta.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce vai a floresta.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 53 = passagemLagoParaFloresta1 */
		sempreVerdadeiro, /*condicao*/
		 "uma floresta a norte", /*descricao*/
		NULL, /*oculto*/
		tags53, /*tags*/
		 lago, /*local*/
		 lago, /*origem*/
		 floresta1, /*destino*/
		 floresta1, /*perspectiva*/
		 "Voce ve uma vasta quantidade de árvores e vegetação em volta.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce vai a floresta.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 54 = passagemLagoParaAldeia */
		sempreVerdadeiro, /*condicao*/
		 "uma aldeia a oeste", /*descricao*/
		NULL, /*oculto*/
		tags54, /*tags*/
		 lago, /*local*/
		 lago, /*origem*/
		 aldeia, /*destino*/
		 aldeia, /*perspectiva*/
		 "Voce ve uma aldeia com poucas casas.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce vai a aldeia.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 55 = deserto */
		sempreVerdadeiro, /*condicao*/
		 "deserto", /*descricao*/
		NULL, /*oculto*/
		tags55, /*tags*/
		NULL, /*local*/
		NULL, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "um escaldante deserto, com apenas areia em volta", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "Dizem que ha algo escondido la", /*fococa*/
		99, /*peso*/
		 9999, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		 100, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 56 = delimitacaoDeserto */
		sempreVerdadeiro, /*condicao*/
		 "areia escaldante ao redor", /*descricao*/
		NULL, /*oculto*/
		tags56, /*tags*/
		 deserto, /*local*/
		 deserto, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		"Voce nao ve nada especial.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "O calor é demais para ir além.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 57 = passagemDesertoParaCaverna */
		sempreVerdadeiro, /*condicao*/
		 "uma passagem para caverna a oeste", /*descricao*/
		NULL, /*oculto*/
		tags57, /*tags*/
		 deserto, /*local*/
		 deserto, /*origem*/
		 caverna2, /*destino*/
		 caverna2, /*perspectiva*/
		 "A sombra da caverna e tentadora", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "O calor vai passando aos poucos enquanto voce volta para a caverna.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 58 = covil */
		sempreVerdadeiro, /*condicao*/
		 "covil de uma criatura", /*descricao*/
		NULL, /*oculto*/
		tags58, /*tags*/
		NULL, /*local*/
		NULL, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Um lugar fetido, o cheiro de carnica preenche suas narinas.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		 9999, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		 0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 59 = delimitacaoCovil */
		sempreVerdadeiro, /*condicao*/
		 "cristais estranhos ao redor", /*descricao*/
		NULL, /*oculto*/
		tags59, /*tags*/
		 covil, /*local*/
		 covil, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		"Voce nao ve nada especial.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "os cristais na parede sao muito duros para perfurar ou escavar.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 60 = passagemCovilParaCaverna1Liberada */
		condicao60, /*condicao*/
		 "um caminho para oeste", /*descricao*/
		NULL, /*oculto*/
		tags60, /*tags*/
		 covil, /*local*/
		 covil, /*origem*/
		 caverna1, /*destino*/
		 caverna1, /*perspectiva*/
		 "Voce ve uma luz muito fraca dessa direcao.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce sai do covil do monstro.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 61 = passagemCovilParaCaverna1Bloqueada */
		condicao61, /*condicao*/
		 "um caminho para oeste", /*descricao*/
		NULL, /*oculto*/
		tags61, /*tags*/
		 covil, /*local*/
		 covil, /*origem*/
		NULL, /*destino*/
		 caverna1, /*perspectiva*/
		 "Voce ve uma luz muito fraca dessa direcao.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "O monstro impede sua passagem.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 62 = passagemCovilParaCaverna2Liberada */
		condicao62, /*condicao*/
		 "um caminho para leste", /*descricao*/
		NULL, /*oculto*/
		tags62, /*tags*/
		 covil, /*local*/
		 covil, /*origem*/
		 caverna2, /*destino*/
		 caverna2, /*perspectiva*/
		 "Voce ve uma luz muito fraca dessa direcao.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce sai do covil do monstro.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 63 = passagemCovilParaCaverna2Bloqueada */
		condicao63, /*condicao*/
		 "um caminho para leste", /*descricao*/
		NULL, /*oculto*/
		tags63, /*tags*/
		 covil, /*local*/
		 covil, /*origem*/
		NULL, /*destino*/
		 caverna2, /*perspectiva*/
		 "Voce ve uma luz muito fraca dessa direcao.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "O monstro impede sua passagem.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 64 = caverna1 */
		sempreVerdadeiro, /*condicao*/
		 "caverna", /*descricao*/
		NULL, /*oculto*/
		tags64, /*tags*/
		NULL, /*local*/
		NULL, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "um lugar umido e escuro.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "Ouvi dizer que alguém desapareceu la, entao um guarda vigia a entrada.", /*fococa*/
		99, /*peso*/
		 9999, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		 0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 65 = delimitacaoCaverna1 */
		sempreVerdadeiro, /*condicao*/
		 "rocha solida ao redor", /*descricao*/
		NULL, /*oculto*/
		tags65, /*tags*/
		 caverna1, /*local*/
		 caverna1, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		"Voce nao ve nada especial.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce nao consegue atravessar rocha solida.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 66 = passagemCavernaParaAldeia */
		sempreVerdadeiro, /*condicao*/
		 "uma saida da caverna ao norte", /*descricao*/
		NULL, /*oculto*/
		tags66, /*tags*/
		 caverna1, /*local*/
		 caverna1, /*origem*/
		 aldeia, /*destino*/
		 aldeia, /*perspectiva*/
		 "A luz do sol entra na caverna.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce volta para a aldeia.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 67 = passagemCaverna1ParaCovil */
		sempreVerdadeiro, /*condicao*/
		 "uma entrada escura a leste", /*descricao*/
		NULL, /*oculto*/
		tags67, /*tags*/
		 caverna1, /*local*/
		 caverna1, /*origem*/
		 covil, /*destino*/
		 covil, /*perspectiva*/
		 "Voce sente um cheiro putrido vindo dessa direcao.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce sabe que esta entrando em um lugar esquecido pelos deuses.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 68 = caverna2 */
		sempreVerdadeiro, /*condicao*/
		 "caverna", /*descricao*/
		NULL, /*oculto*/
		tags68, /*tags*/
		NULL, /*local*/
		NULL, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "um lugar umido e escuro.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		 9999, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		 0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 69 = delimitacaoCaverna2 */
		sempreVerdadeiro, /*condicao*/
		 "rocha solida ao redor", /*descricao*/
		NULL, /*oculto*/
		tags69, /*tags*/
		 caverna2, /*local*/
		 caverna2, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		"Voce nao ve nada especial.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce nao consegue atravessar rocha solida.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 70 = passagemCavernaParaDesertoTravada */
		sempreVerdadeiro, /*condicao*/
		NULL, /*descricao*/
		 "parede de pedra", /*oculto*/
		tags70, /*tags*/
		 caverna2, /*local*/
		 caverna2, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Voce ve uma pequena fechadura.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce nao consegue atravessar rocha solida.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 aindaTrancada, /*abrir*/
		 jaFechada, /*fechar*/
		 jaTrancada, /*trancar*/
		 trocarParedeTrancada, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 71 = passagemCavernaParaDesertoLiberada */
		sempreVerdadeiro, /*condicao*/
		 "uma passagem a leste", /*descricao*/
		NULL, /*oculto*/
		tags71, /*tags*/
		NULL, /*local*/
		NULL, /*origem*/
		 deserto, /*destino*/
		 deserto, /*perspectiva*/
		 "A passagem secreta esta aberta.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce anda por uma longa passagem e chega em um deserto.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		 aindaAberta, /*fechar*/
		 aindaAberta, /*trancar*/
		 jaAberta, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 72 = passagemCaverna2ParaCovil */
		sempreVerdadeiro, /*condicao*/
		 "uma entrada escura a oeste", /*descricao*/
		NULL, /*oculto*/
		tags72, /*tags*/
		 caverna2, /*local*/
		 caverna2, /*origem*/
		 covil, /*destino*/
		 covil, /*perspectiva*/
		 "Voce sente um cheiro putrido vindo dessa direcao.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce sabe que esta entrando em um lugar esquecido pelos deuses.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 73 = passagemCavernaParaFloresta */
		sempreVerdadeiro, /*condicao*/
		 "uma saida da caverna ao norte", /*descricao*/
		NULL, /*oculto*/
		tags73, /*tags*/
		 caverna2, /*local*/
		 caverna2, /*origem*/
		 floresta7, /*destino*/
		 floresta7, /*perspectiva*/
		 "A luz do sol entra na caverna.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce entra na floresta.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 74 = monstro */
		sempreVerdadeiro, /*condicao*/
		 "uma criatura enorme", /*descricao*/
		NULL, /*oculto*/
		tags74, /*tags*/
		 covil, /*local*/
		 covil, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Uma criatura com garras grandes e dentes afiados.", /*detalhes*/
		 "Ele tem", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		 60, /*capacidade*/
		 150, /*vida*/
		 150, /*vidaMaxima*/
		0, /*luz*/
		 -1, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 75 = paraiso */
		sempreVerdadeiro, /*condicao*/
		 "paraiso", /*descricao*/
		NULL, /*oculto*/
		tags75, /*tags*/
		NULL, /*local*/
		NULL, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Tudo parece pacifico aqui.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "E para onde todos os bons aventureiros vao.", /*fococa*/
		99, /*peso*/
		 9999, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		 100, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 76 = respawn */
		sempreVerdadeiro, /*condicao*/
		 "um portal para reviver", /*descricao*/
		NULL, /*oculto*/
		tags76, /*tags*/
		 paraiso, /*local*/
		 paraiso, /*origem*/
		 aldeia, /*destino*/
		 aldeia, /*perspectiva*/
		 "Parece uma passagem para o desconhecido.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Voce volta ao plano terreno.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 77 = paraisoLONS */
		sempreVerdadeiro, /*condicao*/
		 "nada, apenas paz e silencio", /*descricao*/
		NULL, /*oculto*/
		tags77, /*tags*/
		 paraiso, /*local*/
		 paraiso, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		"Voce nao ve nada especial.", /*detalhes*/
		"Voce ve", /*conteudos*/
		 "Nessa dimensao nao ha direcoes.", /*textoAoIr*/
		 "E apenas uma direcao na bussola.", /*fococa*/
		99, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 78 = ouro */
		sempreVerdadeiro, /*condicao*/
		 "uma moeda de ouro", /*descricao*/
		NULL, /*oculto*/
		tags78, /*tags*/
		 goblin, /*local*/
		 goblin, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Uma moeda brilhante.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "O dinheiro faz o mundo girar...", /*fococa*/
		 1, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 79 = player */
		sempreVerdadeiro, /*condicao*/
		 "voce", /*descricao*/
		NULL, /*oculto*/
		tags79, /*tags*/
		 aldeia, /*local*/
		 aldeia, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Voce devia ser olhar no espelho.", /*detalhes*/
		 "Voce tem", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "Voce esta atras de sua irma, nao?", /*fococa*/
		99, /*peso*/
		 20, /*capacidade*/
		 100, /*vida*/
		 100, /*vidaMaxima*/
		0, /*luz*/
		 -1, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 80 = bauAberto */
		sempreVerdadeiro, /*condicao*/
		 "um bau", /*descricao*/
		NULL, /*oculto*/
		tags80, /*tags*/
		NULL, /*local*/
		NULL, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "O bau esta aberto.", /*detalhes*/
		 "Ele tem", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "Ouvi dizer que ha um na caverna.", /*fococa*/
		 5, /*peso*/
		 10, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 jaAberta, /*abrir*/
		 trocarBau, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 81 = bauFechado */
		condicao81, /*condicao*/
		 "uma bau", /*descricao*/
		NULL, /*oculto*/
		tags81, /*tags*/
		 covil, /*local*/
		 covil, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "O bau esta fechado.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		 5, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		 trocarBau, /*abrir*/
		 jaFechada, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 82 = lampOff */
		sempreVerdadeiro, /*condicao*/
		 "um lampiao antigo", /*descricao*/
		NULL, /*oculto*/
		tags82, /*tags*/
		 mae, /*local*/
		 mae, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "O lampiao esta apagado.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "Essencial em areas escuras.", /*fococa*/
		 5, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 83 = lampOn */
		sempreVerdadeiro, /*condicao*/
		 "um lampiao antigo", /*descricao*/
		NULL, /*oculto*/
		tags83, /*tags*/
		NULL, /*local*/
		NULL, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "O lampiao esta aceso.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		 5, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		 100, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 84 = espada */
		sempreVerdadeiro, /*condicao*/
		 "a espada de seu pai", /*descricao*/
		NULL, /*oculto*/
		tags84, /*tags*/
		 mae, /*local*/
		 mae, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Uma das ultimas lembrancas de seu pai.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "E afiada", /*fococa*/
		 10, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		 -9, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 85 = carroca */
		sempreVerdadeiro, /*condicao*/
		 "uma carroca quebrada", /*descricao*/
		NULL, /*oculto*/
		tags85, /*tags*/
		 clareira, /*local*/
		 clareira, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Uma carroca quebrada.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "Ouvi dizer que um mercador que tinha uma carroca se perdeu na floresta.", /*fococa*/
		 100, /*peso*/
		 40, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 86 = chaveMisteriosa */
		sempreVerdadeiro, /*condicao*/
		 "uma chave misteriosa", /*descricao*/
		NULL, /*oculto*/
		tags86, /*tags*/
		 carroca, /*local*/
		 carroca, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "A chave esta cheia de poeira.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		 1, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 87 = chaveRubi */
		sempreVerdadeiro, /*condicao*/
		 "uma chave feita de rubi", /*descricao*/
		NULL, /*oculto*/
		tags87, /*tags*/
		 chefeAldeia, /*local*/
		 chefeAldeia, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "A chave e vermelha brilhante.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		 1, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 88 = chaveSafira */
		sempreVerdadeiro, /*condicao*/
		 "uma chave feita de safira", /*descricao*/
		NULL, /*oculto*/
		tags88, /*tags*/
		 bauAberto, /*local*/
		 bauAberto, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "A chave e azul brilhante.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		 1, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 89 = chaveEsmeralda */
		sempreVerdadeiro, /*condicao*/
		 "uma chave feita de esmeralda", /*descricao*/
		NULL, /*oculto*/
		tags89, /*tags*/
		 ladrao, /*local*/
		 ladrao, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "A chave e verde brilhante.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "Serve para a abrir alguma coisa", /*fococa*/
		 1, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 90 = macaVermelha */
		sempreVerdadeiro, /*condicao*/
		 "uma maca vermelha", /*descricao*/
		NULL, /*oculto*/
		tags90, /*tags*/
		 lago, /*local*/
		 lago, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Caida no chao, parece boa para comer.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		 1, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		 +5, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		 sempreVerdadeiro, /*comida*/
		0 /*passou*/
	},
	{	/* 91 = macaVerde */
		sempreVerdadeiro, /*condicao*/
		 "uma maca verde", /*descricao*/
		NULL, /*oculto*/
		tags91, /*tags*/
		 floresta5, /*local*/
		 floresta5, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Caida no chao, parece boa para comer.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		 1, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		 +10, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		 sempreVerdadeiro, /*comida*/
		0 /*passou*/
	},
	{	/* 92 = macaRoxa */
		sempreVerdadeiro, /*condicao*/
		 "uma maca roxa", /*descricao*/
		NULL, /*oculto*/
		tags92, /*tags*/
		 floresta3, /*local*/
		 floresta3, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "A cor nao e muito agradavel, mas talvez de para comer.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		 1, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		 +15, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		 sempreVerdadeiro, /*comida*/
		0 /*passou*/
	},
	{	/* 93 = macaDourada */
		sempreVerdadeiro, /*condicao*/
		 "uma maca dourada", /*descricao*/
		NULL, /*oculto*/
		tags93, /*tags*/
		 bauAberto, /*local*/
		 bauAberto, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Tem uma cor brilhante e bonita, talvez de para comer.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		 2, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		 +20, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		 sempreVerdadeiro, /*comida*/
		0 /*passou*/
	},
	{	/* 94 = goblin */
		sempreVerdadeiro, /*condicao*/
		 "um goblin baixinho", /*descricao*/
		NULL, /*oculto*/
		tags94, /*tags*/
		 floresta4, /*local*/
		 floresta4, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Verde e com um nariz enorme", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "Sao pequenos e tricoeiros.", /*fococa*/
		99, /*peso*/
		 10, /*capacidade*/
		 50, /*vida*/
		 50, /*vidaMaxima*/
		0, /*luz*/
		 -1, /*impacto*/
		 -1, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 95 = faca */
		sempreVerdadeiro, /*condicao*/
		 "uma faca", /*descricao*/
		NULL, /*oculto*/
		tags95, /*tags*/
		 floresta4, /*local*/
		 floresta4, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Era de um goblin derrotado.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		 5, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		 -5, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 96 = garras */
		sempreVerdadeiro, /*condicao*/
		 "um par de garras", /*descricao*/
		NULL, /*oculto*/
		tags96, /*tags*/
		 monstro, /*local*/
		 monstro, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "São grandes e afiadas", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		 40, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		 -4, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 97 = orc */
		sempreVerdadeiro, /*condicao*/
		 "um orc", /*descricao*/
		NULL, /*oculto*/
		tags97, /*tags*/
		 floresta1, /*local*/
		 floresta1, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Nao tem como argumentar com essa criatura.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		99, /*peso*/
		 50, /*capacidade*/
		 100, /*vida*/
		 100, /*vidaMaxima*/
		0, /*luz*/
		 -2, /*impacto*/
		 -1, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 98 = cimitarra */
		sempreVerdadeiro, /*condicao*/
		 "uma cimitarra", /*descricao*/
		NULL, /*oculto*/
		tags98, /*tags*/
		 floresta1, /*local*/
		 floresta1, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Uma espada curva.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		 12, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		 -10, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 99 = machadoGrande */
		sempreVerdadeiro, /*condicao*/
		 "um machado", /*descricao*/
		NULL, /*oculto*/
		tags99, /*tags*/
		 guarda, /*local*/
		 guarda, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Esta encravado o nome de uma mulher no machado.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		 15, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		 -10, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 100 = pedestal */
		sempreVerdadeiro, /*condicao*/
		 "algum tipo de pedestal", /*descricao*/
		NULL, /*oculto*/
		tags100, /*tags*/
		 deserto, /*local*/
		 deserto, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		"Voce nao ve nada especial.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		 50, /*peso*/
		 30, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		0, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 101 = espadaLendaria */
		sempreVerdadeiro, /*condicao*/
		 "uma espada brilhante", /*descricao*/
		NULL, /*oculto*/
		tags101, /*tags*/
		 pedestal, /*local*/
		 pedestal, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Ela e bonita.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		"Eu nao sei nada sobre isso.", /*fococa*/
		 15, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		 -15, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 102 = ladrao */
		sempreVerdadeiro, /*condicao*/
		 "um ladrao", /*descricao*/
		NULL, /*oculto*/
		tags102, /*tags*/
		 clareira, /*local*/
		 clareira, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Esta todo vestido de preto.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "Ha alguns na floresta", /*fococa*/
		99, /*peso*/
		 25, /*capacidade*/
		 120, /*vida*/
		 120, /*vidaMaxima*/
		0, /*luz*/
		 -2, /*impacto*/
		 -1, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 103 = adaga */
		sempreVerdadeiro, /*condicao*/
		 "uma adaga", /*descricao*/
		NULL, /*oculto*/
		tags103, /*tags*/
		 clareira, /*local*/
		 clareira, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Ha um pouco de sangue seco nela.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "A arma preferida de um ladrao", /*fococa*/
		 7, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		 -6, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 104 = bengala */
		sempreVerdadeiro, /*condicao*/
		 "uma bengala", /*descricao*/
		NULL, /*oculto*/
		tags104, /*tags*/
		 chefeAldeia, /*local*/
		 chefeAldeia, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Usada pelo velho Adam para se apoiar.", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "Serve para auxiliar uma pessoa a andar", /*fococa*/
		 3, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		 -2, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	},
	{	/* 105 = foice */
		sempreVerdadeiro, /*condicao*/
		 "uma foice", /*descricao*/
		NULL, /*oculto*/
		tags105, /*tags*/
		 temploBoss, /*local*/
		 temploBoss, /*origem*/
		NULL, /*destino*/
		NULL, /*perspectiva*/
		 "Usada pelo poderoso Gladion", /*detalhes*/
		"Voce ve", /*conteudos*/
		"Voce nao pode chegar mais perto que isso.", /*textoAoIr*/
		 "Serve para cortar mato", /*fococa*/
		 13, /*peso*/
		0, /*capacidade*/
		0, /*vida*/
		0, /*vidaMaxima*/
		0, /*luz*/
		 -13, /*impacto*/
		0, /*confiar*/
		naoPodeAbrir, /*abrir*/
		naoPodeFechar, /*fechar*/
		naoPodeTrancar, /*trancar*/
		naoPodeDestrancar, /*destrancar*/
		false, /*comida*/
		0 /*passou*/
	}
};
