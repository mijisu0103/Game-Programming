#include "CBall.h"

CBall::CBall()
{
}

CBall::CBall(int Direct)
{
    m_tBall.nReady = 0; // Ball is not ready to move
    m_tBall.nDirect = Direct; // Initial direction
    m_tBall.nX = 30; // Initial X position
    m_tBall.nY = 10; // Initial Y position
}

CBall::~CBall()
{
}

// Function to draw the walls
void CBall::ScreenLine()
{
    gotoxy(0, 0);
    cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓";
    for (int i = 1; i < 23; ++i) {
        gotoxy(0, i);
        cout << "┃                                                                            ┃";
    }
    gotoxy(0, 23);
    cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛";
}

// Function to handle collision detection with walls
int CBall::Collision(int x, int y)
{
    if (y == 0) // Top wall
    {
        m_tBall.nDirect = g_WallCollision[0][m_tBall.nDirect]; // Change direction
        return 1; // Direction changed
    }

    if (x == 1) // Left wall
    {
        m_tBall.nDirect = g_WallCollision[1][m_tBall.nDirect]; // Change direction
        return 1; // Direction changed
    }

    if (x == 76) // Right wall
    {
        m_tBall.nDirect = g_WallCollision[2][m_tBall.nDirect]; // Change direction
        return 1; // Direction changed
    }

    if (y == 23) // Bottom wall
    {
        m_tBall.nDirect = g_WallCollision[3][m_tBall.nDirect]; // Change direction
        return 1; // Direction changed
    }

    return 0; // No direction change
}

// Function to handle keyboard input
void CBall::KeyInput()
{
    int nKey;
    if (_kbhit()) // Check if a key is pressed
    {
        nKey = _getch();
        if (nKey == 32) // Spacebar
        {
            m_tBall.nReady = 1; // Set ball to ready state
        }
    }
}

// Function to initialize the ball's properties
void CBall::Initialize()
{
    m_tBall.nReady = 0; // Not moving
    m_tBall.nDirect = 0; // Initial direction
    m_tBall.nX = 30; // Initial X position
    m_tBall.nY = 10; // Initial Y position
}

// Function to update the ball's position
void CBall::Progress()
{
    if (m_tBall.nReady == 0) // Only if not ready
    {
        switch (m_tBall.nDirect)
        {
            case 0: // Up
                if (Collision(m_tBall.nX, m_tBall.nY - 1) == 0)
                {
                    m_tBall.nY--;
                }
                break;
            case 1: // Up-Right
                if (Collision(m_tBall.nX + 1, m_tBall.nY - 1) == 0)
                {
                    m_tBall.nX++;
                    m_tBall.nY--;
                }
                break;
            case 2: // Down-Right
                if (Collision(m_tBall.nX + 1, m_tBall.nY + 1) == 0)
                {
                    m_tBall.nX++;
                    m_tBall.nY++;
                }
                break;
            case 3: // Down
                if (Collision(m_tBall.nX, m_tBall.nY + 1) == 0)
                {
                    m_tBall.nY++;
                }
                break;
            case 4: // Down-Left
                if (Collision(m_tBall.nX - 1, m_tBall.nY + 1) == 0)
                {
                    m_tBall.nX--;
                    m_tBall.nY++;
                }
                break;
            case 5: // Up-Left
                if (Collision(m_tBall.nX - 1, m_tBall.nY - 1) == 0)
                {
                    m_tBall.nX--;
                    m_tBall.nY--;
                }
                break;
        }
    }
}

// Function to render the ball on the screen
void CBall::Render()
{
    ScreenLine();
    gotoxy(m_tBall.nX, m_tBall.nY);
    cout << "●"; // Draw the ball
}

// Cleanup function (currently empty)
void CBall::Release()
{
}
