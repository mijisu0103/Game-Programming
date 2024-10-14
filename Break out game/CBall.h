#pragma once
#include "Define.h"
class CBall
{
private:
	BALL m_tBall;
public:
	void ScreenLine();
	int Collision(int x, int y);
	void KeyInput();
public:
	void Initialize();
	void Progress();
	void Render();
	void Release();
public:
	CBall();
	CBall(int Direct);
	~CBall();
};

