#include "stdafx.h"
#include "End_Game.h"

#include <string>
#include <iostream>


End_Game::End_Game(std::string mystWord)
{
	this->word = new std::string;
	*this->word = mystWord;
}


End_Game::~End_Game()
{
	delete this->word;
}


void End_Game::game_win()
{
	std::cout << "Congrats, you won!  You must be either smart or lucky." << std::endl;
	return;
}


void End_Game::game_lose()
{
	std::cout << "Better luck next time, the word was " << this->word << "." << std::endl;
	return;
}


