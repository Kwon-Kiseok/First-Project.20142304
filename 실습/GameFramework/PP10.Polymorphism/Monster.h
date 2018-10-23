#pragma once
#include "GameObject.h"

class Monster : public GameObject
{
public:
	Monster() {}
	~Monster() {}

	void update();
	void control(int m_x, int m_y, int currentFrame); //몬스터 이동 함수
private:
	bool goR = true;
};