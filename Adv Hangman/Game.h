#pragma once

#ifndef GAME_H
#define GAME_H

#include "stdafx.h"
#include "New_Game.h"
#include "End_Game.h"

#include <string>


class Game
{

public:

	enum GameState { PLAYING, WIN, LOSE, ERROR };

	GameState gamestate;

	New_Game *new_game;
	End_Game *end_game;

	// Word to guess
	std::string mystword;

	// available letters
	char availLetters[26];

	// Hangman limbs
	static const char boardchar[6];

	// The users current hangman
	char currentHangman[6];

	// Wrong characters entered
	char wrongChar[6];

	// Blanks representing each characters in the mystery word
	char *wordDisplay;
	void setWordDisplay();

	// Count of how many strikes the user has
	int limbCount = 0;

	std::string alphabet = "abcdefghijklmnopqrstuvwxyz";

	// List of available words from the dictionary
	std::string *tempWordList;

	// Gets the length of the mystery word
	int getLength() { return this->mystword.length(); }

	// Finds the mystery word from a text file
	std::string getWord();

	Game();
	~Game();

};

#endif /* GAME_H */