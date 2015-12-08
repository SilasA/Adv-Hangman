========================================================================
    CONSOLE APPLICATION : Adv Hangman Project Overview
========================================================================

AppWizard has created this Adv Hangman application for you.

This file contains a summary of what you will find in each of the files that
make up your Adv Hangman application.


Adv Hangman.vcxproj
    This is the main project file for VC++ projects generated using an Application Wizard.
    It contains information about the version of Visual C++ that generated the file, and
    information about the platforms, configurations, and project features selected with the
    Application Wizard.

Adv Hangman.vcxproj.filters
    This is the filters file for VC++ projects generated using an Application Wizard. 
    It contains information about the association between the files in your project 
    and the filters. This association is used in the IDE to show grouping of files with
    similar extensions under a specific node (for e.g. ".cpp" files are associated with the
    "Source Files" filter).

Adv Hangman.cpp
    This is the main application source file.  It contains the main loop and is responsible for 
	Creating and maintaining the Game_Handler object and for prompting to exit.

Game_Handler.cpp
	This maintains the game and displays the board every entry.  It updates the game every entry
	by replacing/adding elements to the appropriate array(s) and checking the game state.

Game.cpp
	This is where all the game items and methods, such as the mystery word and the hangman, are
	located.  When created, the game constructor fills the arrays and variables with the appropriate
	content.  It, for the mystery word, also reads from a dictionary file to select a word.

New_Game.h
	It displays the instructions when constructed then is redundant until deletion.

End_Game.cpp
	This handles the result of the completed game.  It displays wither the winning or losing message 
	for the user once they have either won or lost.

/////////////////////////////////////////////////////////////////////////////
Other standard files:

StdAfx.h, StdAfx.cpp
    These files are used to build a precompiled header (PCH) file
    named Adv Hangman.pch and a precompiled types file named StdAfx.obj.

/////////////////////////////////////////////////////////////////////////////
Other notes:

Make sure the dictionary file is in the correct directory (debug folder with the executable).

AppWizard uses "TODO:" comments to indicate parts of the source code you
should add to or customize.

/////////////////////////////////////////////////////////////////////////////
