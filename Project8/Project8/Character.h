#pragma once
#include <iostream>

class Character
{
public:
	Character();
	
	void characterCreation();

	std::string getName() { return this->name; };

	int getHp() { return this->hp; };
	int getMaxHp() { return this->maxHp; };

	int getStamina() { return this->stamina; };
	int getMaxStamina() { return this->maxStamina; };

	int getMana() { return this->mana; };
	int getMaxMana() { return this->maxMana; };

	int getStrenght() { return this->strenght; };
	int getDexterity() { return this->dexterity; };
	int getIntelligence() { return this->intelligence; };


	void setMaxHp(int hp) { this->maxHp += hp; this->hp = this->maxHp;};
	void setMaxStamina(int stamina) { this->maxStamina += stamina; this->stamina = this->maxStamina;};
	void setMaxMana(int mana) { this->maxMana += mana; this->mana = this->maxMana; };


	void setStrenght(int strenght) { this->strenght += strenght; };
	void setDexterity(int dexterity) { this->dexterity += dexterity; };
	void setIntelligence(int intelligence) { this->intelligence += intelligence;};


private:
	std::string name;
	std::string characterClass;


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

