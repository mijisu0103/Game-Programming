#pragma once
#include "define.h"
class CBar;
class CBall;
class CBlock;
class CMainGame
{
private:
	CBar* m_pBar = NULL;
	CBall* m_pBall = NULL;
	CBlock* m_pBlock = NULL;
public:
	void Initialize();
	void Progress();
	void Render();
	void Release();
public:
	CMainGame();
	~CMainGame();
};

