#include "Game.h"

void Game::Run(const char * name)
{
	mName = name;
	mGameOver = false;
	Start();
	while (!mGameOver)
	{
		Update();
	}
	Shutdown();	
}

