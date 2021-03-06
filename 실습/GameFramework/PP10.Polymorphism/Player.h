#pragma once
#include "GameObject.h"

class Player : public GameObject
{
public:
	Player() {}
	~Player() {}

	void load(int x, int y, int width, int height, std::string textureID);
	void draw(SDL_Renderer* pRenderer);
	void update();
	//virtual void clean();
};