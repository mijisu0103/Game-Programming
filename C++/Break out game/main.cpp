#include "CMainGame.h"

void main()
{
	CMainGame Game;

	Game.Initialize();

	int Curr = GetTickCount();

	while (true)
	{
		if (Curr + 50 < GetTickCount())
		{
			Curr = GetTickCount();
			Game.Progress();
			Game.Render();
		}
	}


}

