#include <stdio.h>

class Rollable
{
public:
	int rollAmount;
	virtual int Roll() = 0;
};
class Damager
{
public:
	int damageAmount = 10;
	virtual void DoDamage() = 0;
};

class HeavyBlow : public Damager
{

public:
	HeavyBlow(int mod)
	{
		modifier = mod;
	}
	int modifier;
	// Inherited via Damager
	virtual void DoDamage() 
	{
		printf("heavy blow incoming %d\n",damageAmount + modifier);
	}
};

class LightBlow : public Damager, public Rollable
{
public:
	LightBlow(Rollable* rollable)
	{
		roll = rollable;
	}
	Rollable* roll;
	// Inherited via Damager
	virtual void DoDamage() 
	{
		printf("light blow incoming %d\n", roll->Roll());
		
	}

	// Inherited via Rollable
	virtual int Roll() override
	{
		return roll->Roll();
	}
};
class Weapon : public Rollable
{
	// Inherited via Rollable
	virtual int Roll() override
	{
		return 20;
	}
 };

class Dice : public Rollable
{
	// Inherited via Rollable
	virtual int Roll() override
	{
		return 20;
	}
};

class Barbarian
{
	Damager* damagers[5];
	int damageCounter = 0;
public:
	Barbarian(){}
	void AddDamager(Damager* damager)
	{
		damagers[damageCounter++] = damager;
	}

	virtual void Use()
	{
		for (auto d : damagers)
			d->DoDamage();
	}
};

int main()
{
	Barbarian *b = new Barbarian();
	b->AddDamager(new HeavyBlow(3));
	b->AddDamager(new HeavyBlow(2));
	b->AddDamager(new LightBlow(new Weapon()));
	b->AddDamager(new HeavyBlow(5));	
	b->AddDamager(new HeavyBlow(5));
	b->Use();

	return 0;
}