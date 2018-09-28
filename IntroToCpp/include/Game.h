#pragma once
class Game
{
public:
	void Run(const char* name);
private:
	const char* mName;
	
protected:
	virtual void Start() = 0;
	virtual void Update() = 0;
	virtual void Shutdown() = 0;
	bool mGameOver;	
};