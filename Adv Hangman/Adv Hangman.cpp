// Adv Hangman.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Game.h"

#include <string>
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	Game *game;

	while (true)
	{
		game = new Game;

		if (game->gamestate != game->GameState::PLAYING)
		{
			game->end_game = new End_Game(game);
			break;
		}

	}

	return 0;
}

