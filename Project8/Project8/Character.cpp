#include "Character.h"

Character::Character() {
	this->name = " ";
	
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
	std::cout << "1 - Wojownik (+5 si³y, +10 ¿ycia)" << std::endl;
	std::cout << "2 - £owca (+5 zrêcznoœci, +10 staminy" << std::endl;
	std::cout << "3 - Mag (+5 inteligencji, +10 many" << std::endl;
	
	std::cout << std::endl;

	std::cout << "Wybor: ";

	std::cin >> choice;


	if (choice == 1) {
		this->characterClass = "Wojownik";
		setStrenght(5);
	}
	else if (choice == 2) {
		this->characterClass = "£owca";
		setDexterity(5);
	}
	else {
		this->characterClass = "Mag";
		setIntelligence(5);
	}

	system("cls");
}