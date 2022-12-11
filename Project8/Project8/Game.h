#pragma once
#include <iostream>
#include <Windows.h>

class Game
{
public:
	Game();

	void creationMenu();
	void createCharacter();
	void mainMenu();

	void inGameMenu();

	static bool isRunning;
};

