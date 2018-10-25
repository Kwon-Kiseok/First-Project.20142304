#pragma once
#include "SDLGameObject.h"

class Monster : public SDLGameObject
{
public:
	Monster(const LoaderParams* pParams);
	~Monster() {}

	virtual void draw();
	virtual void update();
	virtual void clean();
	void control(int m_x, int m_y, int currentFrame); //���� �̵� �Լ�
private:
	bool goR = true;
};