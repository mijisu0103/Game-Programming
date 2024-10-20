#include "CBall.h"
#include "CBar.h"
#include "CBlock.h"

void CBall::ScreenLine()
{
    gotoxy(0, 0);
    cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓";
    gotoxy(0, 1);
    cout << "┃                                                                            ┃";
    gotoxy(0, 2);
    cout << "┃                                                                            ┃";
    gotoxy(0, 3);
    cout << "┃                                                                            ┃";
    gotoxy(0, 4);
    cout << "┃                                                                            ┃";
    gotoxy(0, 5);
    cout << "┃                                                                            ┃";
    gotoxy(0, 6);
    cout << "┃                                                                            ┃";
    gotoxy(0, 7);
    cout << "┃                                                                            ┃";
    gotoxy(0, 8);
    cout << "┃                                                                            ┃";
    gotoxy(0, 9);
    cout << "┃                                                                            ┃";
    gotoxy(0, 10);
    cout << "┃                                                                            ┃";
    gotoxy(0, 11);
    cout << "┃                                                                            ┃";
    gotoxy(0, 12);
    cout << "┃                                                                            ┃";
    gotoxy(0, 13);
    cout << "┃                                                                            ┃";
    gotoxy(0, 14);
    cout << "┃                                                                            ┃";
    gotoxy(0, 15);
    cout << "┃                                                                            ┃";
    gotoxy(0, 16);
    cout << "┃                                                                            ┃";
    gotoxy(0, 17);
    cout << "┃                                                                            ┃";
    gotoxy(0, 18);
    cout << "┃                                                                            ┃";
    gotoxy(0, 19);
    cout << "┃                                                                            ┃";
    gotoxy(0, 20);
    cout << "┃                                                                            ┃";
    gotoxy(0, 21);
    cout << "┃                                                                            ┃";
    gotoxy(0, 22);
    cout << "┃                                                                            ┃";
   
    gotoxy(0, 23);
    cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛";
}

int CBall::Collision(int x, int y)
{
    // Block
    // 20
    for (int i = 0; i < 20; i++)
    {
        if (m_pBlock->tBlock[i].nLife == 1)
        {
            if (x >= m_pBlock->tBlock[i].nX &&
                x <= m_pBlock->tBlock[i].nX + 1 &&
                y == m_pBlock->tBlock[i].nY)
            {
                // 1->2 2->1 5->4   4->5
                if (m_tBall.nDirect == 1)
                    m_tBall.nDirect = 2;
                else if (m_tBall.nDirect == 2)
                    m_tBall.nDirect = 1;
                else if (m_tBall.nDirect == 5)
                    m_tBall.nDirect = 4;
                else if (m_tBall.nDirect == 4)
                    m_tBall.nDirect = 5;

                m_pBlock->tBlock[i].nLife = 0;
                return 1;
            }
            else if (x >= m_pBlock->tBlock[i].nX &&
                x <= m_pBlock->tBlock[i].nX + 1 &&
                y == m_pBlock->tBlock[i].nY + 1)
            {
                // 1->2 2->1 5->4   4->5
                if (m_tBall.nDirect == 1)
                    m_tBall.nDirect = 2;
                else if (m_tBall.nDirect == 2)
                    m_tBall.nDirect = 1;
                else if (m_tBall.nDirect == 5)
                    m_tBall.nDirect = 4;
                else if (m_tBall.nDirect == 4)
                    m_tBall.nDirect = 5;

                m_pBlock->tBlock[i].nLife = 0;
                return 1;
            }
        }
    }
    
    // Wall collision
    if (y == 0)
    {
        m_tBall.nDirect = g_WallCollision[0][m_tBall.nDirect];
        return 1;
    }
    if (x == 1)
    {
        m_tBall.nDirect = g_WallCollision[1][m_tBall.nDirect];
        return 1;
    }
    if (x == 77)
    {
        m_tBall.nDirect = g_WallCollision[2][m_tBall.nDirect];
        return 1;
    }

    // Paddle collision
    if (x >= m_pBar->m_tBar.nX[0] &&
        x <= m_pBar->m_tBar.nX[2] + 1 &&
        y == (m_pBar->m_tBar.nY))
    {
        m_tBall.nDirect = g_WallCollision[3][m_tBall.nDirect];
        return 1; // Direction changes.
    }
    else if (x >= m_pBar->m_tBar.nX[0] &&
        x <= m_pBar->m_tBar.nX[2] + 1 &&
        y == m_pBar->m_tBar.nY + 1)
    {
        m_tBall.nDirect = g_WallCollision[0][m_tBall.nDirect];
        return 1;
    }

    if (y == 23)
    {
        m_tBall.nDirect = g_WallCollision[3][m_tBall.nDirect];
        return 1;
    }

    return 0;
}

void CBall::KeyInput()
{
}

void CBall::Initialize()
{
    m_tBall.nReady = 0; // 0 means moving.
    m_tBall.nDirect = 2; 
    m_tBall.nX = 20;
    m_tBall.nY = 1;
}

void CBall::Progress()
{
    if (m_tBall.nReady == 0)
    {
        switch (m_tBall.nDirect)
        {
        case 0:
            if (Collision(m_tBall.nX, m_tBall.nY - 1) == 0)
                m_tBall.nY--;
            break;
        case 1:
            if (Collision(m_tBall.nX + 1, m_tBall.nY - 1) == 0)
            {
                m_tBall.nX++;
                m_tBall.nY--;
            }
            break;
        case 2:
            if (Collision(m_tBall.nX + 1, m_tBall.nY + 1) == 0)
            {
                m_tBall.nX++;
                m_tBall.nY++;
            }
            break;
        case 3:
            if (Collision(m_tBall.nX, m_tBall.nY + 1) == 0)
            {
                m_tBall.nY++;
            }
            break;
        case 4:
            if (Collision(m_tBall.nX - 1, m_tBall.nY + 1) == 0)
            {
                m_tBall.nX--;
                m_tBall.nY++;
            }
            break;
        case 5:
            if (Collision(m_tBall.nX - 1, m_tBall.nY - 1) == 0)
            {
                m_tBall.nX--;
                m_tBall.nY--;
            }
            break;
        }
    }
}

void CBall::Render()
{
    ScreenLine();
    gotoxy(m_tBall.nX, m_tBall.nY);
    cout << "●";
}

void CBall::Release()
{
}

CBall::CBall()
{
}

CBall::~CBall()
{
}
