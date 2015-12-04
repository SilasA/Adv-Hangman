#include "stdafx.h"
#include "New_Game.h"
#include "End_Game.h"
#include "Game.h"

#include <string>
#include <iostream>


const char Game::boardchar[6] = { 'O', '|', '/', '\\', '/', '\\' };


Game::Game()
{
	new_game = new New_Game;
	this->limbCount = 0;
	this->mystword = new_game->getWord();

	this->new_game->setCurrentHangman();
	this->currentHangman[6] = *new_game->tempArray1;

	this->new_game->setAvailLetters(this->alphabet);
	this->availLetters[26] = *new_game->tempArray2;

	this->new_game->setWrongChar();
	this->wrongChar[6] = *new_game->tempArray3;

	this->new_game->setWordDisplay(this->getLength());
	this->wordDisplay = new char[this->getLength()];
	this->wordDisplay = new_game->tempArray4;

	delete new_game;
}


Game::~Game()
{
	delete[] this->wordDisplay;
	delete this->end_game;
}