#pragma once
#include "SDLGameObject.h"
#include "Game.h"

class Bullet : public SDLGameObject
{
public:
	Bullet(const LoaderParams* pParams);
	~Bullet() {}

	virtual void draw();
	virtual void update();
	virtual void clean();

private:
	bool isActive;
};