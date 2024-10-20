#pragma once
#include "define.h"
class CBar;
class CBlock;
class CBall
{
private:
	BALL m_tBall;
	//MainGame
	CBar* m_pBar;
	CBlock* m_pBlock;
public:
	void SetBar(CBar* pBar) {m_pBar = pBar;	}
	void SetBlock(CBlock* pBlock) { m_pBlock = pBlock; }
	void ScreenLine();
	int Collision(int x, int y);
	void KeyInput();
public:
	BALL GetBall() { return m_tBall; }
	void SetX(int x) { m_tBall.nX += x; }
	void SetY(int y) { m_tBall.nY += y; }
	void SetBall(BALL tBall) { m_tBall = tBall; }
	void SetReady(int Ready) { m_tBall.nReady = Ready; }
public:
	void Initialize();
	void Progress();
	void Render();
	void Release();
public:
	CBall();
	~CBall();
};


