#include <iostream>
#include "Game.h"

int main()
{
	Game game;
	
	game.mainMenu();
	
	while (game.isRunning == true)
	{
		game.inGameMenu();
	}
}
