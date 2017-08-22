#include "Ninja.h"
#include <iostream>


Ninja::Ninja()
	: hoge(0)
{
}


Ninja::~Ninja()
{
}

void Ninja::viewStatus() {
	std::cout << "---Status---" << std::endl;
	std::cout << "HP:" << hp << std::endl;
	std::cout << "ATK: " << attack << std::endl;

}

void Ninja::setHp(int hp) {
	this->hp = hp;
}

void Ninja::setAttack(int atk) {
	this->attack = atk;
}
int Ninja::getHp() {
	return hp;
}
int Ninja::getAttack() {
	return attack;
}


void Ninja::setAge(int age)
{
	
}
