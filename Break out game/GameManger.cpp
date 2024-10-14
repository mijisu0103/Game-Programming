#include "GameManager.h"
#include "Ball.h"

GameManager::GameManager():pBall(NULL)
{
}

GameManager::~GameManager()
{
}

void GameManager::Initialize()
{
	if (pBall == NULL)
	{
		pBall = new Ball; // Create one ball.
		pBall->Initialize(); // Initialize the created ball.
	}
}

void GameManager::Progress()
{
	pBall->Progress();
}

void GameManager::Render()
{
	pBall->Render();
}

void GameManager::Release()
{
	delete pBall; // Clean up the ball.
}
