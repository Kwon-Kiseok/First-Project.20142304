#include "Game.h"

bool Game::init(const char*title, int xpos, int ypos,
	int width, int height, bool fullscreen)
{
	title = "HOSEO BAR";
	xpos = 0;
	ypos = 0;
	width = 1024;
	height = 768;
	fullscreen = false;

	return true;
}

void Game::render()
{
	SDL_RenderClear(m_pRenderer); //draw color로 render 지우기
	SDL_RenderPresent(m_pRenderer); //화면 제시하기
}

void Game::clean()
{
	std::cout << "cleaning game\n";
	SDL_DestroyWindow(m_pWindow);
	SDL_DestroyRenderer(m_pRenderer);
	SDL_Quit();
}

void Game::handleEvents()
{
	SDL_Event event;
	if (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			m_bRunning = false;
			break;
		default:
			break;
		}
	}
}