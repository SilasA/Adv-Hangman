#include "stdafx.h"
#include "New_Game.h"
#include "End_Game.h"
#include "Game.h"

#include <string>
#include <iostream>


Game::Game() : boardchar{ 'O', '|', '/', '\\', '/', '\\' }
{
	new_game = new New_Game;
	this->limbCount = 0;
	this->mystword = new_game->getWord();
	this->currentHangman[6] = *new_game->setCurrentHangman();
	this->availLetters[26] = *new_game->setAvailLetters(this->alphabet);
	this->wrongChar[6] = *new_game->setWrongChar();
	this->wordDisplay = new char[this->getLength()];
	this->wordDisplay = new_game->setWordDisplay(this->getLength());
	delete new_game;
}


Game::~Game()
{
	delete[] this->wordDisplay;
	delete this->end_game;
}