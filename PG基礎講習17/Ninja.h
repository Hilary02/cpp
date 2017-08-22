#pragma once
#include <iostream>

class Ninja
{
public:
	Ninja();
	~Ninja();
	void viewStatus();

	void setHp(int hp);
	void setAttack(int atk);
	int getHp();
	int getAttack();

private:
	int hp;
	int attack;

public:
	int hoge;
	void setAge(int age);
};

