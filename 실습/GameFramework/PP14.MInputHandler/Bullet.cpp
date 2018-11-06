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
	m_position.setX(m_position.getX() + 1.0f);
}

void Bullet::clean()
{
}

