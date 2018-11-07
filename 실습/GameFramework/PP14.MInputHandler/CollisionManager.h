#pragma once
#include "Game.h"

class CollisionManager
{
public:
	static CollisionManager* Instance()
	{
		if (s_pInstance == 0)
		{
			s_pInstance = new CollisionManager();
		}
		return s_pInstance;
	}
	void update();
	bool CollisionCheck(SDLGameObject* bullet, SDLGameObject* Object);

private:
	CollisionManager() {}
	~CollisionManager() {}
	static CollisionManager* s_pInstance;
};

typedef CollisionManager TheCollisionManager;