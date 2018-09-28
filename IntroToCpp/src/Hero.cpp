#include "Hero.h"
#include <string>

Hero::Hero() :mName("default"), mPower(-1), mHealth(-1)
{
}

Hero::Hero(std::string name, int power, int health) : mPower(power), mHealth(health)
{
	///Steffans problem
	///must allocate memory for the string that comes in or it will lose it's value
	mName = std::string(name);
}

Hero::~Hero()
{
}

void Hero::Fight(Hero &other)
{
	///tell the other dude to take damage and give out power as the arg
	///this allows us to implement specific ways to dodamage later
	other.TakeDamage(mPower);
}

bool Hero::IsAlive()
{
	///being alive is defined to be greater than zero range
	return mHealth > 0;
}

void Hero::TakeDamage(int amount)
{
	int newHealth = mHealth - amount;
	///check to see if the health goes below zero to prevent continuous beating yeet
	if (newHealth < 0)
		return;
	mHealth = newHealth;
}