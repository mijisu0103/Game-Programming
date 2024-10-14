#pragma once
#include "define.h"
class CBlock
{
public:
	BLOCK tBlock[20];
public:
	int Search(int nEnd, int nX, int nY);
	void SetBlock(int nBlockCount);
public:
	void Initialize();
	void Progress();
	void Render();
	void Release();
public:
	CBlock();
	~CBlock();
};

