#include "CMainGame.h"


void main()
{
	CMainGame Game;
	Game.Initialize();

	int Curr = GetTickCount();

	while (true)
	{
		if (Curr + 100 < GetTickCount())
		{
			Curr = GetTickCount();
			system("cls");
			Game.Progress();
			Game.Render();
		}
	}

}
