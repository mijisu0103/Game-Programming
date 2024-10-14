#include "CBar.h"

void CBar::Initialize()
{
	m_tBar.nY = 18;
	m_tBar.nX[0] = 12;
	m_tBar.nX[1] = 14;
	m_tBar.nX[2] = 16;
}

void CBar::Progress(CBall* pBall)
{
	// This is where the paddle moves when the ball is caught.
	int nKey = 0;
	if (_kbhit())
	{
		nKey = _getch();

		switch (nKey)
		{
		case LEFT:
			m_tBar.nX[0]--;
			m_tBar.nX[1]--;
			m_tBar.nX[2]--;
			break;
		case RIGHT:
			m_tBar.nX[0]++;
			m_tBar.nX[1]++;
			m_tBar.nX[2]++;
			break;
		}
	}
}

void CBar::Render()
{
	for (int i = 0; i < 3; i++)
	{
		gotoxy(m_tBar.nX[i], m_tBar.nY);
		cout << "▦";
	}
}

void CBar::Release()
{
}

CBar::CBar()
{
}

CBar::~CBar()
{
}
