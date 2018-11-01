#pragma once
#include "SDL.h"
#include <vector>
#include "Vector2D.h"

enum mouse_buttons
{
	LEFT = 0, MIDDLE = 1, RIGHT = 2
};

class InputHandler
{
public:
	static InputHandler* Instance()
	{
		if (s_pInstance == 0)
		{
			s_pInstance = new InputHandler();
		}
		return s_pInstance;
	}
	void update();
	void clean();	//디바이스 관련 초기화된 부분을 지워줌
	bool isKeyDown(SDL_Scancode key);
	bool getMouseButtonState(int buttonNumber);



	std::vector<bool> m_mouseButtonStates;
	
	Vector2D* getMousePosition();

private:
	InputHandler();
	~InputHandler() {}
	static InputHandler* s_pInstance;

	Vector2D* m_mousePosition;
	const Uint8* m_keystates;
};

typedef InputHandler TheInputHandler;