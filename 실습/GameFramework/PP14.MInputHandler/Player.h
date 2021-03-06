#pragma once
#include "SDLGameObject.h"
#include "Game.h"

class Player : public SDLGameObject
{
public:
	Player(const LoaderParams* pParams);
	~Player() {}

	virtual void draw();
	virtual void update();
	virtual void clean();
private:
	void handleInput();

};