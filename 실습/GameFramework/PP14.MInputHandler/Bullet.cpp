#include "Bullet.h"

Bullet::Bullet(const LoaderParams* pParams) :
	SDLGameObject(pParams)
{
	isActive = true;
}

void Bullet::draw()
{
	if (isActive == true)
	{
		SDLGameObject::draw();
	}
}

void Bullet::update()
{
	m_currentFrame = int(((SDL_GetTicks() / 100) % 1));
	m_position.setX(m_position.getX() + 2.0f);

	if (m_position.getX() + m_width > 500 &&
		m_position.getX() < 564 &&
		m_position.getY() < 164 &&
		m_position.getY() + m_height > 100)
	{
		this->clean();
	}
}

void Bullet::clean()
{
	isActive = false;
}

