#include "CBlock.h"

int CBlock::Search(int nEnd, int nX, int nY)
{
    for (int i = 0; i < nEnd; i++)
    {
        if (tBlock[i].nY == nY)
        {
            if (tBlock[i].nX == nX || (tBlock[i].nX + 1) == nX)
                return 1;
        }
    }
    return 0;
}

void CBlock::SetBlock(int nBlockCount)
{
    int nX, nY;
    srand((unsigned)time(NULL));

    for (int i = 0; i < nBlockCount; i++)
    {
        tBlock[i].nLife = 1;

        while (true)
        {
            nX = rand() % 57 + 2;
            nY = rand() % 14 + 2;

            if (Search(i, nX, nY) == 0)
            {
                tBlock[i].nX = nX;
                tBlock[i].nY = nY;
                break;
            }
        }
    }
}

void CBlock::Initialize()
{
    memset(tBlock, 0, sizeof(tBlock));
    SetBlock(20);


}

void CBlock::Progress()
{
}

void CBlock::Render()
{
    for (int i = 0; i < 20; i++)
    {
        if (tBlock[i].nLife == 1)
        {
            gotoxy(tBlock[i].nX, tBlock[i].nY);
            cout << "■";
        }
    }
}

void CBlock::Release()
{
}

CBlock::CBlock()
{
}

CBlock::~CBlock()
{
}
