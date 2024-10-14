#include "Ball.h"

Ball::Ball()
{
}

Ball::~Ball()
{
}

void Ball::Initialize()
{
	tInfo.m_nX = 0;
	tInfo.m_nY = 0;
}

void Ball::Progress()
{
	tInfo.m_nX += 1;
	tInfo.m_nY += 1;

	// Uncomment the following lines for collision detection and bouncing logic.
	/*
	int clashw;
	srand(unsigned(time(NULL)));
	clashw = rand() % 2 + 1;
	//→↑ tInfo.m_nX += 1; tInfo.m_nY -= 1;
	//→↓ tInfo.m_nX += 1; tInfo.m_nY += 1;
	//←↓ tInfo.m_nX -= 1; tInfo.m_nY += 1;
	//←↑ tInfo.m_nX -= 1; tInfo.m_nY -= 1;

	if (tInfo.m_nX >= 80 || tInfo.m_nX <= 0)
	{
		tInfo.m_nX = -tInfo.m_nX;
	}
	if (tInfo.m_nY >= 25 || tInfo.m_nY <= 0)
	{
		tInfo.m_nY = -tInfo.m_nY;
	}
	*/
}

void Ball::Render()
{
	system("cls");
	gotoxy(tInfo.m_nX, tInfo.m_nY);
	cout << "●";
}

void Ball::Release()
{
}

void Ball::gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
