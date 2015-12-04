#include "stdafx.h"
#include "New_Game.h"

#include <time.h>
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>


void New_Game::setCurrentHangman()
{
	this->tempArray1 = new char[6];

	for (int i = 0; i < 6; i++)
		this->tempArray1[i] = ' ';

	return;
}

void New_Game::setAvailLetters(std::string alphabet)
{
	this->tempArray2 = new char[26];

	for (int i = 0; i < 26; i++)
		this->tempArray2[i] = alphabet[i];

	return;
}

void New_Game::setWrongChar()
{
	this->tempArray3 = new char[6];

	for (int i = 0; i < 6; i++)
		this->tempArray3[i] = ' ';

	return;
}

void New_Game::setWordDisplay(int length)
{
	this->tempArray4 = new char[length];

	for (int i = 0; i < length; i++)
		this->tempArray4[i] = '_';

	return;
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