#include "Game.h"
#include "Character.h"


bool Game::isRunning = true;

std::string Game::map[5][5] = {
	{"Nic","Nic","Nic","Nic","Nic"},
	{"Nic","Tawerna","Oboz","Otchlan","Nic"},
	{"Nic","Miasto","Rozdroze","Kopalnia","Nic"},
	{"Nic","Port","Wioska","Jaskinia","Nic"},
	{"Nic","Nic","Nic","Nic","Nic"},

};

Character character;

Game::Game() {

}

void Game::writeText(std::string text) {
	for (int i = 0; i < text.length(); i++)
	{
		std::cout << text[i];
		Sleep(50);
	}
	std::cout << std::endl;
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

		
		//std::string text = "Witaj, twoim zadaniem jest stanie sie najbardziej znana osoba w tej kranie. Do ciebie nalezy w jaki sposob to uczynisz.";

		//writeText(text);

	}
	else if (choice == 2) {

	}
	else
		Game::isRunning = false;
}

void Game::inGameMenu() {
	system("cls");
	
	int choice;
	std::cout << "Aktualne miejsce pobytu - " << map[character.xPos][character.yPos] << " " << character.xPos << " " << character.yPos<< std::endl;
	std::cout << "Dostepne akcje akcje" << std::endl;
	
	std::cout << "1 - Podroz" << std::endl;
	std::cout << "2 - Informacje o postaci" << std::endl << std::endl;;

	std::cout << "Wybor: ";
	std::cin >> choice;
	if (choice == 1) {
		character.travel();
	}
	else if (choice == 2) {
		character.showCharacter();
	}
}