#include "New_Game.h"

#include <string>
#include <sstream>
#include <iostream>
#include <fstream>


char New_Game::setCurrentHangman()
{
	
}

char New_Game::setAvailLetters()
{

}

char New_Game::setWrongChar()
{

}

char New_Game::setWordDisplay()
{

}

std::string New_Game::getWord()
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
			tempWordList[l] = tempWord;
			l++;
		}
	}

	else
	{

	}
}