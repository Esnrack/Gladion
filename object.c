#include <stdbool.h>
#include <stdio.h>
#include "object.h"
#include "toggle.h"
static const char *tags0[] = { "heaven", "little heaven", NULL};
static const char *tags1[] = { "portal", "respawn portal", NULL};
static const char *tags2[] = { "east", "west", "north", "south", NULL};
static const char *tags3[] = { "field", NULL};
static const char *tags4[] = { "cave", NULL};
static const char *tags5[] = { "silver", "coin", "silver coin", NULL};
static const char *tags6[] = { "gold", "coin", "gold coin", NULL};
static const char *tags7[] = { "guard", "burly guard", NULL};
static const char *tags8[] = { "yourself", NULL};
static bool condition9(void)  { return guard->health == 0 || silver->location == guard; }
static const char *tags9[] = { "east", "entrance", NULL};
static bool condition10(void)  { return guard->health > 0 && silver->location != guard; }
static const char *tags10[] = { "east", "entrance", NULL};
static const char *tags11[] = { "west", "exit", NULL};
static const char *tags12[] = { "west", "north", "south", "forest", NULL};
static const char *tags13[] = { "east", "north", "rock", NULL};
static const char *tags14[] = { "backroom", NULL};
static const char *tags15[] = { "east", "west", "south", "rock", NULL};
static const char *tags16[] = { "south", "door", "doorway", NULL};
static const char *tags17[] = { "south", "door", "doorway", NULL};
static const char *tags18[] = { "north", "door", "doorway", NULL};
static const char *tags19[] = { "north", "door", "doorway", NULL};
static const char *tags20[] = { "box", "wooden box", NULL};
static const char *tags21[] = { "box", "wooden box", NULL};
static const char *tags22[] = { "box", "wooden box", NULL};
static const char *tags23[] = { "key", "tiny key", NULL};
static const char *tags24[] = { "lamp", NULL};
static const char *tags25[] = { "lamp", NULL};
static const char *tags26[] = { "club", "wooden club", NULL};
static const char *tags27[] = { "dagger", NULL};

static bool alwaysTrue(void) { return true; }

OBJECT objs[] = {
	{	/* 0 = heaven */
		alwaysTrue,
		 "little heaven",
		tags0,
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
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 1 = respawn */
		alwaysTrue,
		 "a respawn portal",
		tags1,
		 heaven,
		 field,
		 field,
		 "Looks like a gateway into the unknown.",
		"You see",
		 "A bright flash of light, and you are back in the field.",
		"I know nothing about that.",
		99,
		0,
		0,
		0,
		0,
		0,
		 isAlreadyOpen,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 2 = heavenEWNS */
		alwaysTrue,
		 "nothing but peace and quiet",
		tags2,
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
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 3 = field */
		alwaysTrue,
		 "an open field",
		tags3,
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
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 4 = cave */
		alwaysTrue,
		 "a little cave",
		tags4,
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
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 5 = silver */
		alwaysTrue,
		 "a silver coin",
		tags5,
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
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 6 = gold */
		alwaysTrue,
		 "a gold coin",
		tags6,
		 openBox,
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
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 7 = guard */
		alwaysTrue,
		 "a burly guard",
		tags7,
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
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 8 = player */
		alwaysTrue,
		 "yourself",
		tags8,
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
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 9 = intoCave */
		condition9,
		 "a cave entrance to the east",
		tags9,
		 field,
		 cave,
		 cave,
		 "The entrance is just a narrow opening in a small outcrop.",
		"You see",
		 "You walk into the cave.",
		"I know nothing about that.",
		99,
		0,
		0,
		0,
		0,
		0,
		 isAlreadyOpen,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 10 = intoCaveBlocked */
		condition10,
		 "a cave entrance to the east",
		tags10,
		 field,
		NULL,
		 cave,
		 "The entrance is just a narrow opening in a small outcrop.",
		"You see",
		 "The guard stops you from walking into the cave.",
		"I know nothing about that.",
		99,
		0,
		0,
		0,
		0,
		0,
		 isAlreadyOpen,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 11 = exitCave */
		alwaysTrue,
		 "an exit to the west",
		tags11,
		 cave,
		 field,
		 field,
		 "Sunlight pours in through an opening in the cave's wall.",
		"You see",
		 "You walk out of the cave.",
		"I know nothing about that.",
		99,
		0,
		0,
		0,
		0,
		0,
		 isAlreadyOpen,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 12 = wallField */
		alwaysTrue,
		 "dense forest all around",
		tags12,
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
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 13 = wallCave */
		alwaysTrue,
		 "solid rock all around",
		tags13,
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
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 14 = backroom */
		alwaysTrue,
		 "a backroom",
		tags14,
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
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 15 = wallBackroom */
		alwaysTrue,
		 "solid rock all around",
		tags15,
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
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 16 = openDoorToBackroom */
		alwaysTrue,
		 "an open door to the south",
		tags16,
		NULL,
		 backroom,
		 backroom,
		 "The door is open.",
		"You see",
		 "You walk through the door into a backroom.",
		"I know nothing about that.",
		99,
		0,
		0,
		0,
		0,
		0,
		 isAlreadyOpen,
		 toggleDoorToBackroom,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 17 = closedDoorToBackroom */
		alwaysTrue,
		 "a closed door to the south",
		tags17,
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
		 toggleDoorToBackroom,
		 isAlreadyClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 18 = openDoorToCave */
		alwaysTrue,
		 "an open door to the north",
		tags18,
		NULL,
		 cave,
		 cave,
		 "The door is open.",
		"You see",
		 "You walk through the door into the cave.",
		"I know nothing about that.",
		99,
		0,
		0,
		0,
		0,
		0,
		 isAlreadyOpen,
		 toggleDoorToCave,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 19 = closedDoorToCave */
		alwaysTrue,
		 "a closed door to the north",
		tags19,
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
		 toggleDoorToCave,
		 isAlreadyClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 20 = openBox */
		alwaysTrue,
		 "a wooden box",
		tags20,
		NULL,
		NULL,
		NULL,
		 "The box is open.",
		"You see",
		"You can't get much closer than this.",
		 "You need a key to open it.",
		 5,
		 10,
		0,
		0,
		0,
		0,
		 isAlreadyOpen,
		 toggleBox,
		 isStillOpen,
		 isAlreadyOpen
	},
	{	/* 21 = closedBox */
		alwaysTrue,
		 "a wooden box",
		tags21,
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
		 toggleBox,
		 isAlreadyClosed,
		 toggleBoxLock,
		 isAlreadyUnlocked
	},
	{	/* 22 = lockedBox */
		alwaysTrue,
		 "a wooden box",
		tags22,
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
		 isStillLocked,
		 isAlreadyClosed,
		 isAlreadyLocked,
		 toggleBoxLock
	},
	{	/* 23 = keyForBox */
		alwaysTrue,
		 "a tiny key",
		tags23,
		 cave,
		NULL,
		NULL,
		 "The key is really small and shiny.",
		"You see",
		"You can't get much closer than this.",
		 "A small key opens a small lock.",
		 1,
		0,
		0,
		0,
		0,
		0,
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 24 = lampOff */
		alwaysTrue,
		 "a lamp",
		tags24,
		 field,
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
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 25 = lampOn */
		alwaysTrue,
		 "a lamp",
		tags25,
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
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 26 = club */
		alwaysTrue,
		 "a wooden club",
		tags26,
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
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	},
	{	/* 27 = dagger */
		alwaysTrue,
		 "a dagger",
		tags27,
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
		cannotBeOpened,
		cannotBeClosed,
		cannotBeLocked,
		cannotBeUnlocked
	}
};
