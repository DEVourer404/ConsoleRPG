#include "Character.h"
#include "Game.h"

Character::Character() {
	this->name = " ";
	
	this->xPos = 2;
	this->yPos = 2;

	this->level = 1;
	this->exp = 0;
	this->maxExp = 100;

	this->maxHp = 40;
	this->hp = 40;
	this->maxStamina = 30;
	this->stamina = 30;
	this->maxMana = 20;
	this->mana = 20;

	this->strenght = 10;
	this->dexterity = 10;
	this->intelligence = 10;
}

void Character::characterCreation() {
	int choice;

	std::cout << "Podaj imie: ";
	std::cin >> this->name;

	std::cout << std::endl;
	std::cout << "Wybierz klase" << std::endl;
	std::cout << "1 - Wojownik (+5 sily, +10 zycia)" << std::endl;
	std::cout << "2 - Lowca (+5 zrêcznoœci, +10 staminy)" << std::endl;
	std::cout << "3 - Mag (+5 inteligencji, +10 many)" << std::endl;
	
	std::cout << std::endl;

	std::cout << "Wybor: ";

	std::cin >> choice;


	if (choice == 1) {
		this->characterClass = "Wojownik";
		setStrenght(5);
	}
	else if (choice == 2) {
		this->characterClass = "Lowca";
		setDexterity(5);
	}
	else {
		this->characterClass = "Mag";
		setIntelligence(5);
	}

	system("cls");
}

void Character::showCharacter() {
	int choice;

	std::cout << "Imie - " << getName() << std::endl;
	std::cout << "Klasa - " << getCharacterClass()<< std::endl;
	std::cout << "Zycie - " << getHp() << "/" << getMaxHp() << std::endl;
	std::cout << "Wytrzymalosc - " << getStamina() << "/" << getMaxStamina() << std::endl;
	std::cout << "Mana - " << getMana() << "/" << getMana() << std::endl << std::endl;

	std::cout << "Si³a - " << getStrenght() << std::endl;
	std::cout << "Zrecznosc - " << getDexterity() << std::endl;
	std::cout << "Inteligencja - " << getIntelligence() << std::endl;

	std::cout << "1 - powrot" << std::endl;

	std::cout << "Wybor: ";

	std::cin >> choice;
}

void Character::characterMenu() {
	int choice;

	std::cout << "Witaj wybierz akcje" << std::endl;
	std::cout << "1 - Statystyki postaci" << std::endl;


	std::cout << "Wybor: ";
	std::cin >> choice;

	if (choice == 1) {
		showCharacter();
	}
}

void Character::travel() {
	int choice;
	bool canTravel[4];
	std::cout << "Gdzie zamierzasz sie udac?" << std::endl;
	
	if (Game::map[xPos][yPos - 1] == "Nic")
		canTravel[0] = 0;
	else
		canTravel[0] = 1;
	if(Game::map[xPos + 1][yPos] == "Nic") 
		canTravel[1] = 0;
	else
		canTravel[1] = 1;
	if(Game::map[xPos][yPos + 1] == "Nic")
		canTravel[2] = 0;
	else
		canTravel[2] = 1;
	if(Game::map[xPos - 1][yPos] == "Nic")
		canTravel[3] = 0;
	else
		canTravel[3] = 1;

	std::cout << "1 - Kierunek polnocny " << Game::map[xPos][yPos - 1] << std::endl;
	std::cout << "2 - Kierunek wschodni " << Game::map[xPos - 1][yPos] << std::endl;
	std::cout << "3 - Kierunek poludniowy " << Game::map[xPos][yPos + 1] << std::endl;
	std::cout << "4 - Kierunek zachodni " << Game::map[xPos + 1][yPos] << std::endl << std::endl;;

	do
	{
		std::cout << "Wybor: ";
		std::cin >> choice;
		if(!canTravel[choice - 1])
			std::cout << "Nie mozesz tam podrozowac " << std::endl;

	} while (!canTravel[choice - 1]);
	
	


	switch (choice)
	{
	case 1: yPos--; break;
	case 2: xPos--; break;
	case 3: yPos++; break;
	case 4: xPos++; break;
	}
	
}