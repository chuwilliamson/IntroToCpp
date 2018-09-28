#include "BattleArena.h"
#include "Hero.h" 
BattleArena::BattleArena()
{
}

BattleArena::~BattleArena()
{
}


void BattleArena::Start()
{
	std::string names[] =
	{
		"Iron Man",
		"Captain America",
		"War Machine",
		"Hawkeye",
		"Black Widow"
		"Falcon"
		"Black Panther",
		"Bucky Barnes",
		"The Vision",
		"Ant Man",
		"Spider Man",
		"Scarlet Witch"
	};

	team1 = new Stack<Hero>();
	team2 = new Stack<Hero>();

	int counter = 0;
	for (auto name : names)
	{
		///make a ptr to alternate between the two stacks to random assign
		Stack<Hero>*teamPtr = counter % 2 == 0 ? team1 : team2;
		teamPtr->Push(new Hero(name, 100, 100));
		counter++;
	}
}

void BattleArena::Update()
{
	mGameOver = team1->isEmpty() || team2->isEmpty();

	Hero top1 = team1->Top();
	Hero top2 = team2->Top();
	while (top1.IsAlive() && top2.IsAlive())
	{
		///dont care if they both kill each other
		///nobody got time for that
		top1.Fight(top2);
		top2.Fight(top1);
	}

	top2.IsAlive() ? team1->Pop() : team2->Pop();


	winner = team2->isEmpty() ? team1 : team2;

}

void BattleArena::Shutdown()
{
	winner == team1 ? printf("team1 wins...\n") : printf("team2 wins...\n");
	system("pause");
	delete team1;
	delete team2;
}
