#ifndef _GAMES_H_
#define _GAMES_H_

#include "stdafx.h"
#include "Macros.h"

#define FOREACH_GAME(GAME)  	\
    GAME(HOMURA)   		\
    GAME(RAIDEN_III)		\
    GAME(RAIDEN_IV)		\
    GAME(TROUBLE_WITCHES)	\
    GAME(CHAOS_BREAKER)         \
    GAME(GIGA_WINGS)		\
    GAME(TGM3)			\
    GAME(SPICA_ADVENTURE)	\
    GAME(ELEVATOR)		\
    GAME(RASTAN_SAGA)		\
    GAME(SPACE_INVADERS)        \
    GAME(SHIKIGAME_NO_SHIRO_III)\
    GAME(BATTLE_FANTASIA)       \
    GAME(POWER_SPIRIT_5)        \
    GAME(KOF_XII)               \
    GAME(DAEMON_BRIDE)		\
    GAME(RAIDEN_III_NESICA)	\
    GAME(RAIDEN_III_EXPORT)     \
    GAME(DRAGON_DANCE)          \
    GAME(BLAZBLUE_CALAMITY)	\
    GAME(BLAZBLUE_CONTINUUM_SHIFT_1) \
    GAME(ARCANA_HEART_2_V2_1)

enum CONFIG_GAME_ENUM {
	FOREACH_GAME(GENERATE_ENUM)
};

static const char *CONFIG_GAME_ENUM_STRING[] = {
	FOREACH_GAME(GENERATE_STRING)
};



class Game
{
public:

	Game();
	~Game();
	const char* toString(CONFIG_GAME_ENUM i);
	CONFIG_GAME_ENUM toEnum(string i);


private:

	unordered_map<string, CONFIG_GAME_ENUM>  mapStringEnum = {
	   { CONFIG_GAME_ENUM_STRING[0], HOMURA},
	   { CONFIG_GAME_ENUM_STRING[1], RAIDEN_III},
	   { CONFIG_GAME_ENUM_STRING[2], RAIDEN_IV},
	   { CONFIG_GAME_ENUM_STRING[3], TROUBLE_WITCHES},
	   { CONFIG_GAME_ENUM_STRING[4], CHAOS_BREAKER},
	   { CONFIG_GAME_ENUM_STRING[5], GIGA_WINGS},
	   { CONFIG_GAME_ENUM_STRING[6], TGM3},
	   { CONFIG_GAME_ENUM_STRING[7], SPICA_ADVENTURE},
	   { CONFIG_GAME_ENUM_STRING[8], ELEVATOR},
	   { CONFIG_GAME_ENUM_STRING[9], RASTAN_SAGA },
	   { CONFIG_GAME_ENUM_STRING[10], SPACE_INVADERS },
	   { CONFIG_GAME_ENUM_STRING[11],SHIKIGAME_NO_SHIRO_III},
	   { CONFIG_GAME_ENUM_STRING[12],BATTLE_FANTASIA},
	   { CONFIG_GAME_ENUM_STRING[13],POWER_SPIRIT_5},
	   { CONFIG_GAME_ENUM_STRING[14],KOF_XII},
	   { CONFIG_GAME_ENUM_STRING[15],DAEMON_BRIDE},
	   { CONFIG_GAME_ENUM_STRING[16],RAIDEN_III_NESICA},
	   { CONFIG_GAME_ENUM_STRING[17],RAIDEN_III_EXPORT},
	   { CONFIG_GAME_ENUM_STRING[18],DRAGON_DANCE},
	   { CONFIG_GAME_ENUM_STRING[19],BLAZBLUE_CALAMITY},
	   { CONFIG_GAME_ENUM_STRING[20],BLAZBLUE_CONTINUUM_SHIFT_1},
	   { CONFIG_GAME_ENUM_STRING[21],ARCANA_HEART_2_V2_1}
	};
};


#endif
