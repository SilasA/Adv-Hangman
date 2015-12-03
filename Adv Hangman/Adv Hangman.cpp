// Adv Hangman.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Game_Handler.h"

#include <string>
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	Game_Handler *game_handler;
	char playagain;

	do
	{
		while (true)
		{
			game_handler = new Game_Handler;

			game_handler->updateGame();

			if (game_handler->game->gamestate != game_handler->game->GameState::PLAYING)
				break;
		}

		delete game_handler;

		do
		{
			std::cout << "Would you like to play again? [y/n]: ";
			std::cin >> playagain;

		} while (playagain != 'n');


	} while (playagain == 'y');


	return 0;
}

