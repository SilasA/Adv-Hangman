#pragma once

#ifndef GAME_HANDLER_H
#define GAME_HANDLER_H

#include "Game.h"

#include <string>

class Game_Handler
{

public:
	
	Game *game;

	void updateGame();
	
	Game_Handler();
	~Game_Handler();

private:

	// Checks if the player won, lost, or none
	void updateGameState();
	// Check and call result for win/lose
	void checkWL();
	// Displays the game board
	void display(Game *game);
	// Checks if the player used the letter previously and/or it's a character
	bool validateCharUse(char input);
	// Gets a character from the player
	char getInput();

};

#endif /* GAME_HANDLER_H */