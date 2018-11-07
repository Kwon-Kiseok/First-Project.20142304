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

	//�����̽�Ű�� �Է¹����� m_gameObjects �ڿ� Ǫ���� ���ִ� ������� �̻��� �߻� ����
	if (TheInputHandler::Instance()->isKeyDown(SDL_SCANCODE_SPACE))
	{
		Game::Instance()->m_gameObjects.push_back(new Bullet
		(new LoaderParams(m_position.getX() + m_width, m_position.getY() + (m_height/3), 32, 32, "bullet")));
	}
}

