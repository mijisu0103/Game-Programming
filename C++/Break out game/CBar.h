#pragma once
#include "define.h"
class CBall;
class CBar
{
public:
	BAR m_tBar;
	int m_nCatch;
public:
	void Initialize();
	void Progress(CBall* pBall);
	void Render();
	void Release();
public:
	CBar();
	~CBar();
};
