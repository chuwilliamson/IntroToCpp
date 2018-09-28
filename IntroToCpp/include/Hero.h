#pragma once
#include <string>
/*Class Name: Hero
	@Description: Object to participate in the main game loop
*/
class Hero
{
public:
	Hero();
	Hero(std::string name, int power, int health);
	~Hero();

	/*
	@prototype  Fight(Hero& hero)
	@params  hero the hero to fight
	@description  fight another instance
	@precondition  an instance must exist
	@postcondition  an instance got fought by taking damage
	@cost analysis O(1)
	@visibility public
	*/
	void Fight(Hero&);
	/*
	@prototype bool IsAlive
	@params none
	@description getter for determining if a hero is alive
	@precondition instance exists
	@postcondition
	@cost analysis
	@visibility
	*/
	bool IsAlive();
	/*
		@prototype Take Damage
		@params amount the amount of damage to take
		@description receives damage
		@precondition instance of hero exists and is called from this instance only
		@postcondition hero "takes damage" by reducing m_Health by the "amount" parameter
		@cost analysis
		@visibility public
	*/
	void TakeDamage(int);
private:
	std::string mName;
	/*
		@Name:mHealth
		@Description:wholeness of the Hero, ability to participate
		@Type:int
		@Range of acceptable values: positive integer values, not restricting to unsigned int
	*/
	int mHealth;

	/*
		@Name:mPower
		@Description:power of the hero to use for damage
		@Type:int
		@Range of acceptable values:0-99
	*/
	int mPower;
protected:
};