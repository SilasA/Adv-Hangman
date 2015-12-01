#ifndef GAME_H
#define GAME_H

#include "New_Game.h"
#include "End_Game.h"

#include <string>

class Game
{

public:
	
	New_Game *new_game;
	End_Game *end_game(Game *game);

	// Word to guess
	std::string mystword;



	Game();
	~Game();

};

#endif /* GAME_H */