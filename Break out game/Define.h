Define.h
#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

struct BALL
{
	int nReady;
	int nX, nY;
	int nDirect;
};
static void gotoxy(int x, int y)
{
	COORD CursorPosition = { x,y };
	SetConsoleCursorPosition(GetStdHandle
	(STD_OUTPUT_HANDLE), CursorPosition);
}

static int g_WallCollision[4][6] =
{
	{3 ,  2, -1, -1, -1, 4},
	{-1, -1, -1, -1,  2, 1},
	{-1,  5,  4, -1, -1,-1},
	{-1, -1,  1,  0,  5,-1}
};
