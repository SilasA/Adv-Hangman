#pragma once

#ifndef GAME_HANDLER_H
#define GAME_HANDLER_H

#include "stdafx.h"
#include "Game.h"

#include <string>

// Controls and maintains the game by checking the win status and updating the game elements
class Game_Handler
{

public:
	
	Game *game;

	void updateGame();
	
	// Checks if the player won, lost, or none
	void updateGameState();

	// Check and call result for win/lose
	void checkWL();

	// Displays the game board
	void display(Game *game);

	// Checks if the player used the letter previously and/or if its in the word
	bool validateCharUse(char input);

	// Gets a character from the player
	char getInput();
	
	// Adds the users input to the game board arrays
	void addInputValid(char input);
	void addInputInvalid(char input);
	
	Game_Handler();
	~Game_Handler();
};

#endif /* GAME_HANDLER_H */