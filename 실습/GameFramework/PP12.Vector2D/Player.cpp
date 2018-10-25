#include "Player.h"

Player::Player(const LoaderParams* pParams) :
	SDLGameObject(pParams)
{
}


void Player::draw()
{
	SDLGameObject::draw();
}

void Player::update()
{
	//���ӵ� ������ ��ô ������
	m_acceleration.setX(1);
	m_currentFrame = int(((SDL_GetTicks() / 100) % 6));
	SDLGameObject::update();
}

void Player::clean()
{
}