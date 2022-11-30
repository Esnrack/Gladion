#include <stdbool.h>
#include <stdio.h>
#include "objeto.h"
#include "mudar.h"
static const char *tags0[] = { "clareira", "clareira pequena", "pequena clareira", NULL};
static const char *tags1[] = { "floresta", NULL};
static const char *tags2[] = { "aldeia", "vila", "vilarejo", NULL};
static const char *tags3[] = { "lago", NULL};
static const char *tags4[] = { "heaven", "little heaven", NULL};
static const char *tags5[] = { "portal", "respawn portal", NULL};
static const char *tags6[] = { "east", "west", "north", "south", NULL};
static const char *tags7[] = { "field", NULL};
static const char *tags8[] = { "cave", NULL};
static const char *tags9[] = { "silver", "coin", "silver coin", NULL};
static const char *tags10[] = { "gold", "coin", "gold coin", NULL};
static const char *tags11[] = { "guard", "burly guard", NULL};
static const char *tags12[] = { "yourself", NULL};
static bool condicao13(void)  { return guard->vida == 0 || silver->local == guard; }
static const char *tags13[] = { "east", "entrance", NULL};
static bool condicao14(void)  { return guard->vida > 0 && silver->local != guard; }
static const char *tags14[] = { "east", "entrance", NULL};
static const char *tags15[] = { "west", "exit", NULL};
static const char *tags16[] = { "west", "north", "south", "forest", NULL};
static const char *tags17[] = { "east", "north", "rock", NULL};
static const char *tags18[] = { "backroom", NULL};
static const char *tags19[] = { "east", "west", "south", "rock", NULL};
static const char *tags20[] = { "south", "door", "doorway", NULL};
static const char *tags21[] = { "south", "door", "doorway", NULL};
static const char *tags22[] = { "north", "door", "doorway", NULL};
static const char *tags23[] = { "north", "door", "doorway", NULL};
static const char *tags24[] = { "box", "wooden box", NULL};
static const char *tags25[] = { "box", "wooden box", NULL};
static const char *tags26[] = { "box", "wooden box", NULL};
static const char *tags27[] = { "key", "tiny key", NULL};
static const char *tags28[] = { "lamp", NULL};
static const char *tags29[] = { "lamp", NULL};
static const char *tags30[] = { "club", "wooden club", NULL};
static const char *tags31[] = { "dagger", NULL};
static const char *tags32[] = { "espada", NULL};

static bool sempreVerdadeiro(void) { return true; }

OBJETO objs[] = {
	{	/* 0 = clareira */
		sempreVerdadeiro,
		 "clareira pequena",
		tags0,
		NULL,
		NULL,
		NULL,
		 "uma pequena clareira no meio da floresta, perfeita para descansar",
		"You see",
		"You can't get much closer than this.",
		 "uma pequena clareira pacífica, livre de perigos",
		99,
		 9999,
		0,
		 100,
		0,
		0,
		naoPodeAbrir,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 1 = floresta1 */
		sempreVerdadeiro,
		 "floresta",
		tags1,
		NULL,
		NULL,
		NULL,
		 "uma densa floresta, com árvores em toda a volta",
		"You see",
		"You can't get much closer than this.",
		 "cuidado, lá pode haver perigos",
		99,
		 9999,
		0,
		 100,
		0,
		0,
		naoPodeAbrir,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 2 = aldeia */
		sempreVerdadeiro,
		 "aldeia",
		tags2,
		NULL,
		NULL,
		NULL,
		 "uma aldeia com algumas poucas casas, sua mãe mora nela e sua irmã...",
		"You see",
		"You can't get much closer than this.",
		 "é um bom local para se viver, o único perigo é a proximidade com a caverna",
		99,
		 9999,
		0,
		 100,
		0,
		0,
		naoPodeAbrir,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 3 = lago */
		sempreVerdadeiro,
		 "um lago",
		tags3,
		NULL,
		NULL,
		NULL,
		 "a água do lago é transparente como vidro, mas mesmo assim não é possível ver o fundo",
		"You see",
		"You can't get much closer than this.",
		 "a água do lago é usada pelo aldeões para bebida e banho",
		99,
		 9999,
		0,
		 100,
		0,
		0,
		naoPodeAbrir,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 4 = heaven */
		sempreVerdadeiro,
		 "little heaven",
		tags4,
		NULL,
		NULL,
		NULL,
		 "Everything looks so peaceful here.",
		"You see",
		"You can't get much closer than this.",
		 "It's where all the good adventurers go.",
		99,
		 9999,
		0,
		 100,
		0,
		0,
		naoPodeAbrir,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 5 = respawn */
		sempreVerdadeiro,
		 "a respawn portal",
		tags5,
		 heaven,
		 field,
		 field,
		 "Looks like a gateway into the unknown.",
		"You see",
		 "A bright flash of luz, and you are back in the field.",
		"I know nothing about that.",
		99,
		0,
		0,
		0,
		0,
		0,
		 jaAberta,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 6 = heavenEWNS */
		sempreVerdadeiro,
		 "nothing but peace and quiet",
		tags6,
		 heaven,
		NULL,
		NULL,
		"You see nothing special.",
		"You see",
		 "In this dimension, there are no directions.",
		 "It's just a compass direction.",
		99,
		0,
		0,
		0,
		0,
		0,
		naoPodeAbrir,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 7 = field */
		sempreVerdadeiro,
		 "an abrir field",
		tags7,
		NULL,
		NULL,
		NULL,
		 "The field is a nice and quiet place under a clear blue sky.",
		"You see",
		"You can't get much closer than this.",
		 "A lot of tourists go there.",
		99,
		 9999,
		0,
		 100,
		0,
		0,
		naoPodeAbrir,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 8 = cave */
		sempreVerdadeiro,
		 "a little cave",
		tags8,
		NULL,
		NULL,
		NULL,
		 "The cave is just a cold, damp, rocky chamber.",
		"You see",
		"You can't get much closer than this.",
		 "It's dark in there; bring a lamp!",
		99,
		 9999,
		0,
		0,
		0,
		0,
		naoPodeAbrir,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 9 = silver */
		sempreVerdadeiro,
		 "a silver coin",
		tags9,
		 field,
		NULL,
		NULL,
		 "The coin has an eagle on the obverse.",
		"You see",
		"You can't get much closer than this.",
		 "Money makes the world go round...",
		 1,
		0,
		0,
		0,
		0,
		0,
		naoPodeAbrir,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 10 = gold */
		sempreVerdadeiro,
		 "a gold coin",
		tags10,
		 abrirCaixa,
		NULL,
		NULL,
		 "The shiny coin seems to be a rare and priceless artefact.",
		"You see",
		"You can't get much closer than this.",
		 "Money makes the world go round...",
		 1,
		0,
		0,
		0,
		0,
		0,
		naoPodeAbrir,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 11 = guard */
		sempreVerdadeiro,
		 "a burly guard",
		tags11,
		 field,
		NULL,
		NULL,
		 "The guard is a really big fellow.",
		 "He has",
		"You can't get much closer than this.",
		 "Easy to bribe...",
		99,
		 20,
		 100,
		0,
		 -1,
		0,
		naoPodeAbrir,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 12 = player */
		sempreVerdadeiro,
		 "yourself",
		tags12,
		 field,
		NULL,
		NULL,
		 "You would need a mirror to look at yourself.",
		 "You have",
		"You can't get much closer than this.",
		 "You're not from around here, are you?",
		99,
		 20,
		 100,
		0,
		 -1,
		0,
		naoPodeAbrir,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 13 = intoCave */
		condicao13,
		 "a cave entrance to the east",
		tags13,
		 field,
		 cave,
		 cave,
		 "The entrance is just a narrow abriring in a small outcrop.",
		"You see",
		 "You walk into the cave.",
		"I know nothing about that.",
		99,
		0,
		0,
		0,
		0,
		0,
		 jaAberta,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 14 = intoCaveBlocked */
		condicao14,
		 "a cave entrance to the east",
		tags14,
		 field,
		NULL,
		 cave,
		 "The entrance is just a narrow abriring in a small outcrop.",
		"You see",
		 "The guard stops you from walking into the cave.",
		"I know nothing about that.",
		99,
		0,
		0,
		0,
		0,
		0,
		 jaAberta,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 15 = exitCave */
		sempreVerdadeiro,
		 "an exit to the west",
		tags15,
		 cave,
		 field,
		 field,
		 "Sunluz pours in through an abriring in the cave's wall.",
		"You see",
		 "You walk out of the cave.",
		"I know nothing about that.",
		99,
		0,
		0,
		0,
		0,
		0,
		 jaAberta,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 16 = wallField */
		sempreVerdadeiro,
		 "dense forest all around",
		tags16,
		 field,
		NULL,
		NULL,
		 "The field is surrounded by trees and undergrowth.",
		"You see",
		 "Dense forest is blocking the way.",
		 "You cannot go there, it is impenetrable.",
		99,
		0,
		0,
		0,
		0,
		0,
		naoPodeAbrir,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 17 = wallCave */
		sempreVerdadeiro,
		 "solid rock all around",
		tags17,
		 cave,
		NULL,
		NULL,
		 "Carved in stone is a secret password 'abccb'.",
		"You see",
		 "Solid rock is blocking the way.",
		"I know nothing about that.",
		99,
		0,
		0,
		0,
		0,
		0,
		naoPodeAbrir,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 18 = backroom */
		sempreVerdadeiro,
		 "a backroom",
		tags18,
		NULL,
		NULL,
		NULL,
		 "The room is dusty and messy.",
		"You see",
		"You can't get much closer than this.",
		 "There is something of value to be found there.",
		99,
		 9999,
		0,
		0,
		0,
		0,
		naoPodeAbrir,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 19 = wallBackroom */
		sempreVerdadeiro,
		 "solid rock all around",
		tags19,
		 backroom,
		NULL,
		NULL,
		 "Trendy wallpaper covers the rock walls.",
		"You see",
		 "Solid rock is blocking the way.",
		"I know nothing about that.",
		99,
		0,
		0,
		0,
		0,
		0,
		naoPodeAbrir,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 20 = abrirPortaQuarto */
		sempreVerdadeiro,
		 "an abrir door to the south",
		tags20,
		NULL,
		 backroom,
		 backroom,
		 "The door is abrir.",
		"You see",
		 "You walk through the door into a backroom.",
		"I know nothing about that.",
		99,
		0,
		0,
		0,
		0,
		0,
		 jaAberta,
		 trocarPortaParaQuarto,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 21 = closedDoorToBackroom */
		sempreVerdadeiro,
		 "a closed door to the south",
		tags21,
		 cave,
		NULL,
		 backroom,
		 "The door is closed.",
		"You see",
		 "The door is closed.",
		"I know nothing about that.",
		99,
		0,
		0,
		0,
		0,
		0,
		 trocarPortaParaQuarto,
		 jaFechada,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 22 = abrirPortaCaverna */
		sempreVerdadeiro,
		 "an abrir door to the north",
		tags22,
		NULL,
		 cave,
		 cave,
		 "The door is abrir.",
		"You see",
		 "You walk through the door into the cave.",
		"I know nothing about that.",
		99,
		0,
		0,
		0,
		0,
		0,
		 jaAberta,
		 trocarPortaParaCaverna,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 23 = closedDoorToCave */
		sempreVerdadeiro,
		 "a closed door to the north",
		tags23,
		 backroom,
		NULL,
		 cave,
		 "The door is closed.",
		"You see",
		 "The door is closed.",
		"I know nothing about that.",
		99,
		0,
		0,
		0,
		0,
		0,
		 trocarPortaParaCaverna,
		 jaFechada,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 24 = abrirCaixa */
		sempreVerdadeiro,
		 "a wooden box",
		tags24,
		NULL,
		NULL,
		NULL,
		 "The box is abrir.",
		"You see",
		"You can't get much closer than this.",
		 "You need a key to abrir it.",
		 5,
		 10,
		0,
		0,
		0,
		0,
		 jaAberta,
		 trocarCaixa,
		 aindaAberta,
		 jaAberta
	},
	{	/* 25 = closedBox */
		sempreVerdadeiro,
		 "a wooden box",
		tags25,
		NULL,
		NULL,
		NULL,
		 "The box is closed.",
		"You see",
		"You can't get much closer than this.",
		"I know nothing about that.",
		 5,
		0,
		0,
		0,
		0,
		0,
		 trocarCaixa,
		 jaFechada,
		 trocarCaixaTrancada,
		 jaDestrancada
	},
	{	/* 26 = lockedBox */
		sempreVerdadeiro,
		 "a wooden box",
		tags26,
		 backroom,
		NULL,
		NULL,
		 "The box is closed.",
		"You see",
		"You can't get much closer than this.",
		"I know nothing about that.",
		 5,
		0,
		0,
		0,
		0,
		0,
		 aindaTrancada,
		 jaFechada,
		 jaTrancada,
		 trocarCaixaTrancada
	},
	{	/* 27 = keyForBox */
		sempreVerdadeiro,
		 "a tiny key",
		tags27,
		 cave,
		NULL,
		NULL,
		 "The key is really small and shiny.",
		"You see",
		"You can't get much closer than this.",
		 "A small key abrirs a small lock.",
		 1,
		0,
		0,
		0,
		0,
		0,
		naoPodeAbrir,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 28 = lampOff */
		sempreVerdadeiro,
		 "a lamp",
		tags28,
		 aldeia,
		NULL,
		NULL,
		 "The lamp is off.",
		"You see",
		"You can't get much closer than this.",
		 "Essential in dark areas.",
		 5,
		0,
		0,
		0,
		0,
		0,
		naoPodeAbrir,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 29 = lampOn */
		sempreVerdadeiro,
		 "a lamp",
		tags29,
		NULL,
		NULL,
		NULL,
		 "The lamp is on.",
		"You see",
		"You can't get much closer than this.",
		"I know nothing about that.",
		 5,
		0,
		0,
		 100,
		0,
		0,
		naoPodeAbrir,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 30 = club */
		sempreVerdadeiro,
		 "a wooden club",
		tags30,
		 field,
		NULL,
		NULL,
		 "Two feet of solid wood.",
		"You see",
		"You can't get much closer than this.",
		"I know nothing about that.",
		 5,
		0,
		0,
		0,
		 -2,
		0,
		naoPodeAbrir,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 31 = dagger */
		sempreVerdadeiro,
		 "a dagger",
		tags31,
		 field,
		NULL,
		NULL,
		 "The dagger is very sharp.",
		"You see",
		"You can't get much closer than this.",
		"I know nothing about that.",
		 7,
		0,
		0,
		0,
		 -5,
		0,
		naoPodeAbrir,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	},
	{	/* 32 = espada */
		sempreVerdadeiro,
		 "uma espada",
		tags32,
		 aldeia,
		NULL,
		NULL,
		 "É uma herança de família.",
		"You see",
		"You can't get much closer than this.",
		"I know nothing about that.",
		 10,
		0,
		0,
		0,
		 -8,
		0,
		naoPodeAbrir,
		naoPodeFechar,
		naoPodeTrancar,
		naoPodeDestrancar
	}
};