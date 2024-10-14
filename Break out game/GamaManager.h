#pragma once
class Ball; // Forward declaration to prevent issues with multiple headers.
class GameManager
{
private:
	Ball* pBall;
public:
	void Initialize(); // Function to initialize the objects.
	void Progress(); // Function to perform object operations.
	void Render(); // Function to draw the objects.
	void Release(); // Function to clean up the objects.
public:
	GameManager();
	~GameManager();
};
