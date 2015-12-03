#ifndef NEW_GAME_H
#define NEW_GAME_H

#include "stdafx.h"

#include <string>
#include <iostream>

class New_Game
{

public:

	// User instructions
	void instructions()
	{		
		std::cout << this->instruct << std::endl;
	}

	// Fills the hangman with ' ' or nothing, equal to no hangman
	char * setCurrentHangman();

	// Fills the available characters array with the alphabet
	char * setAvailLetters(std::string alphabet);

	// Fills the wrong character array with blanks, equal to no wrong characters
	char * setWrongChar();

	char * setWordDisplay(int length);

	// Finds the mystery word from a text file
	std::string getWord();


	New_Game()
	{
		this->instructions();
	}

	~New_Game()
	{
	}

private:

	std::string instruct = "You must guess what a randomly selected word is by entering the letters in the \nword.  If you guess wrong you will receive a strike and a body part will be \nadded to the man. When the man is fully formed, you lose!\n";
	std::string *tempWordList;
	std::string *alphabet;


};

#endif /* NEW_GAME_H */