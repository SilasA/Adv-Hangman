#ifndef END_GAME_H
#define END_GAME_H

#include "stdafx.h"

#include <string>

class End_Game
{

public:

	// Temp holder for the mystery word
	std::string *word;

	End_Game(std::string mystWord);
	~End_Game();

private:

	void game_win();
	void game_lose();

};

#endif /* END_GAME_H */