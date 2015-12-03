#pragma once

#ifndef GAME_H
#define GAME_H

#include "stdafx.h"
#include "New_Game.h"
#include "End_Game.h"

#include <string>

// enum class GameState { PLAYING, WIN, LOSE };

class Game
{

public:

	enum GameState { PLAYING, WIN, LOSE, ERROR };

	GameState gamestate;

	New_Game *new_game;
	End_Game *end_game(Game *game);

	// Word to guess
	std::string mystword;

	// available letters
	char availLetters[26];

	// Hangman limbs
	char boardchar[6];

	// The users current hangman
	char currentHangman[6];

	// Wrong characters entered
	char wrongChar[6];

	// Blanks representing each characters in the mystery word
	char *wordDisplay;

	// count of how many strikes the user has
	int limbCount;

	// Alphabet
	std::string alphabet = "abcdefghijklmnopqrstuvwxyz";

	// Gets the length of the mystery word
	int getLength() { return this->mystword.length(); }

	Game();
	~Game();

};

#endif /* GAME_H */