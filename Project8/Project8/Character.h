#pragma once
#include <iostream>

class Character
{
public:
	Character();
	
	void characterCreation();
	void showCharacter();
	void characterMenu();
	void travel();


	std::string getName() { return this->name; };
	std::string getCharacterClass() { return this->characterClass; };


	int getHp() { return this->hp; };
	int getMaxHp() { return this->maxHp; };

	//std::string getCurrentLocation() { return Game::map[xPos][yPos]; };

	int getStamina() { return this->stamina; };
	int getMaxStamina() { return this->maxStamina; };

	int getMana() { return this->mana; };
	int getMaxMana() { return this->maxMana; };

	int getStrenght() { return this->strenght; };
	int getDexterity() { return this->dexterity; };
	int getIntelligence() { return this->intelligence; };

	//void setCurrentLocation(std::string location) { this->currentLocation = currentLocation; };

	void setMaxHp(int hp) { this->maxHp += hp; this->hp = this->maxHp;};
	void setMaxStamina(int stamina) { this->maxStamina += stamina; this->stamina = this->maxStamina;};
	void setMaxMana(int mana) { this->maxMana += mana; this->mana = this->maxMana; };


	void setStrenght(int strenght) { this->strenght += strenght; };
	void setDexterity(int dexterity) { this->dexterity += dexterity; };
	void setIntelligence(int intelligence) { this->intelligence += intelligence;};

	int xPos, yPos;

private:
	std::string name;
	std::string characterClass;
	

	int level;
	int exp;
	int maxExp;

	int hp;
	int maxHp;

	int stamina;
	int maxStamina;
	
	int mana;
	int maxMana;

	int strenght;
	int dexterity;
	int intelligence;
};

