#pragma once
#include "SDLGameObject.h"
#include "Game.h"

class Wall : public SDLGameObject
{
public:
	Wall(const LoaderParams* pParams);
	~Wall() {}

	virtual void draw();
	virtual void update();
	virtual void clean();

private:
};