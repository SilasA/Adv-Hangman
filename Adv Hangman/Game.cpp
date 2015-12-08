#include "stdafx.h"
#include "New_Game.h"
#include "End_Game.h"
#include "Game.h"

#include <string>
#include <iostream>


const char Game::boardchar[6] = { 'O', '|', '/', '\\', '/', '\\' };


#include <time.h>
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>


void Game::setWordDisplay()
{
	this->wordDisplay = new char[this->getLength()];

	for (int i = 0; i < this->getLength(); i++)
		this->wordDisplay[i] = '_';

	return;
}

std::string Game::getWord()
{
	std::string tempWord;

	std::ifstream dict("Dictionary.txt");
	if (dict.is_open())
	{
		int l = 0;

		try {
			this->tempWordList = new std::string[126];
		}
		catch (std::exception ex)
		{
			std::cerr << ex.what() << std::endl;
		}

		while (dict.good() && l < 126)
		{
			std::getline(dict, tempWord);
			this->tempWordList[l] = tempWord;
			l++;
		}
	}

	else
		std::cout << "Dictionary could not be found." << std::endl;

	srand((unsigned int)time(NULL));

	int rn = rand() % 126;  // RNG 
	std::string word = tempWordList[rn];

	delete[] this->tempWordList;

	return word;
}


Game::Game()
{
	this->new_game = new New_Game;

	for (int i = 0; i < 6; i++)
		this->currentHangman[i] = ' ';

	for (int i = 0; i < 6; i++)
		this->wrongChar[i] = ' ';

	for (int i = 0; i < 26; i++)
		this->availLetters[i] = this->alphabet[i];

	this->mystword = this->getWord();
	
	this->setWordDisplay();

	delete new_game;
}


Game::~Game()
{
	delete[] this->wordDisplay;
	delete this->end_game;
}