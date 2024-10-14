#include "Define.h"
#include "GameManager.h"

void main()
{
	GameManager Game;

	int Current = GetTickCount();

	Game.Initialize();
	while (true)
	{
		if (Current + 100 < GetTickCount())
		{
			Current = GetTickCount();
			Game.Progress();
			Game.Render();
		}
	}
	Game.Release(); // Clean up resources.
}
