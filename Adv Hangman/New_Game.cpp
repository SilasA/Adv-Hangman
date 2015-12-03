#include "stdafx.h"
#include "New_Game.h"

#include <time.h>
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>


char * New_Game::setCurrentHangman()
{
	char tempArray[6];

	for (int i = 0; i < 6; i++)
		tempArray[i] = ' ';

	return tempArray;
}

char * New_Game::setAvailLetters(std::string alphabet)
{
	char tempArray[26];

	for (int i = 0; i < 26; i++)
		tempArray[i] = alphabet[i];

	return tempArray;
}

char * New_Game::setWrongChar()
{
	char tempArray[6];

	for (int i = 0; i < 6; i++)
		tempArray[i] = ' ';

	return tempArray;
}

char * New_Game::setWordDisplay(int length)
{
	char *tempArray;
	tempArray = new char[length];

	for (int i = 0; i < length; i++)
		tempArray[i] = '_';

	return tempArray;
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
		std::cout << "Dictionary could not be found." << std::endl;

	srand((unsigned int)time(NULL));

	int rn = rand() % 126;  // RNG 
	std::string word = tempWordList[rn];

	delete[] this->tempWordList;

	return word;
}