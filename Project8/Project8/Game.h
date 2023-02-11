#pragma once
#include <iostream>
#include <string>
#include <Windows.h>

class Game
{
public:
	Game();


	void creationMenu();
	void createCharacter();
	void mainMenu();

	void inGameMenu();

	void writeText(std::string text);

	static bool isRunning;

	static std::string map[5][5];
};

