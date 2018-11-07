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
	//가속도 증가로 무척 빨라짐
	//m_acceleration.setX(1);
	m_velocity.setX(0);
	m_velocity.setY(0);
	handleInput();
	m_currentFrame = int(((SDL_GetTicks() / 100) % 6));
	SDLGameObject::update();
}

void Player::clean()
{
}

void Player::handleInput()
{
	if (TheInputHandler::Instance()->isKeyDown(SDL_SCANCODE_RIGHT))
	{
		m_velocity.setX(2);
	}
	if (TheInputHandler::Instance()->isKeyDown(SDL_SCANCODE_LEFT))
	{
		m_velocity.setX(-2);
	}
	if (TheInputHandler::Instance()->isKeyDown(SDL_SCANCODE_UP))
	{
		m_velocity.setY(-2);
	}
	if (TheInputHandler::Instance()->isKeyDown(SDL_SCANCODE_DOWN))
	{
		m_velocity.setY(2);
	}

	//스페이스키를 입력받으면 m_gameObjects 뒤에 푸쉬백 해주는 방법으로 미사일 발사 구현
	if (TheInputHandler::Instance()->isKeyDown(SDL_SCANCODE_SPACE))
	{
		Game::Instance()->m_gameObjects.push_back(new Bullet
		(new LoaderParams(m_position.getX() + m_width, m_position.getY() + (m_height/3), 32, 32, "bullet")));
	}
}

