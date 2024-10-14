#pragma once
#include <Windows.h>
#include <conio.h>
#include <time.h>
#include <iostream>
using namespace std;

#define LEFT 75
#define RIGHT 77

struct BAR
{
	int nX[3];
	int nY;
};

struct BALL
{
	int nReady;
	int nDirect;
	int nX, nY;
};

struct BLOCK
{
	int nLife;
	int nX, nY;
};


static int g_WallCollision[4][6] =
{
	{ 3,  2, -1, -1, -1,  4},
	{-1, -1, -1, -1,  2,  1},
	{-1,  5,  4, -1, -1, -1},
	{-1, -1,  1,  0,  5, -1}
};
static void gotoxy(int x, int y)
{
	COORD CursorPosition = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE)
		, CursorPosition);
}
