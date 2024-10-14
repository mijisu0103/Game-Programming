#pragma once
#include "Define.h"
class CBall;
class CMainGame
{
private:
	CBall* m_pBall= NULL;
public:
	void Initialize();
	void Progress();
	void Render();
	void Release();
public:
	CMainGame();
	~CMainGame();
};
