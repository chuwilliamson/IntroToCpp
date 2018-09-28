#pragma once
#include <Game.h>
/*
# General Description
- This is a game or simulation that consists of two teams of opposing forces.

- The forces must be implemented as Class objects stored within two separate arrays. 
- The objects must contain health values.
- Each turn consists of the forces fighting each other, inflicting damage to one another in some way.
- Once the turn has finished the forces (in the arrays) are to be sorted using a sorting algorithm of your choice that will sort the force according to the remaining health of each member.
- The game or simulation continues its turns until all members within a force are dead, which results in a win for the force still living.
- You may implement this game however you wish, either as two-player, one-player, or automated simulation, but it must make use of two arrays of custom Class objects that are sorted each turn.
*/
 
#include "Stack.h" 
class Hero; 
class BattleArena : public Game
{
public:
	BattleArena();
	virtual ~BattleArena();
private:
	Stack<Hero>* team1;
	Stack<Hero>* team2;
	Stack<Hero>* winner;
protected:
	// Inherited via Game
	virtual void Start() override;
	virtual void Update() override;
	virtual void Shutdown() override;
};