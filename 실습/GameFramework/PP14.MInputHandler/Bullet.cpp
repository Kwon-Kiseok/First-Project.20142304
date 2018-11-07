#include "Bullet.h"

Bullet::Bullet(const LoaderParams* pParams) :
	SDLGameObject(pParams)
{
}

void Bullet::draw()
{
	SDLGameObject::draw();
}

void Bullet::update()
{
	m_currentFrame = int(((SDL_GetTicks() / 100) % 1));
	m_position.setX(m_position.getX() + 2.0f);
}

void Bullet::clean()
{
	
}

