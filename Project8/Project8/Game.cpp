#include "Game.h"
#include "Character.h"

Character character;

bool Game::isRunning = true;

Game::Game() {

}

void Game::mainMenu() {
	int choice;

	std::cout << "1 - Nowa Gra" << std::endl;
	std::cout << "2 - Wczytaj gre" << std::endl;
	std::cout << "3 - Wyjdz" << std::endl;

	std::cout << std::endl;

	std::cout << "Wybor: ";
	std::cin >> choice;

	system("cls");

	if (choice == 1) {
		character.characterCreation();
	}
	else if (choice == 2) {

	}
	else
		Game::isRunning = false;
}

void Game::inGameMenu() {
	int choice;

	std::string text = "";

	std::cout << "Witaj wybierz akcje" << std::endl;

	std::cout << "Wybor: ";
	std::cin >> choice;

	if (choice == 1) {
		for (int i = 0; i < text.length(); i++)
		{
			std::cout << text[i];
			Sleep(75);
		}
	}
	else
	{
		
	}
}