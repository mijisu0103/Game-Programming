#include "CMainGame.h"
#include "CBall.h"
CMainGame::CMainGame()
{
}

CMainGame::~CMainGame()
{
	Release();
}
void CMainGame::Initialize()
{
	srand(unsigned(time(NULL)));
	m_pBall = new CBall(1);

}

void CMainGame::Progress()
{
	m_pBall->Progress();
}

void CMainGame::Render()
{
	m_pBall->Render();
}

void CMainGame::Release()
{
	delete m_pBall;
}


