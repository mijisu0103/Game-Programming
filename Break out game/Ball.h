#pragma once
#include "Define.h"

class Ball
{ 
private:
	INFO tInfo;
public:
	void Initialize(); // Initializes the ball.
	void Progress(); // Movement and calculation operations.
	void Render();  // Function to draw the ball.
	void Release(); // Cleanup function.
public:
	void gotoxy(int x, int y);
public:
	Ball();
	~Ball();
};
