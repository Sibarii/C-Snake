#pragma once
#include <ctime>

class Snake {
private:
	int headX;
	int headY;
	int bodyPositions[999][1];

	clock_t firstTime;
	clock_t lastTime;

public:
	Snake(int x, int y);

	void snake(int x, int y);

	void input();
	void move(int x, int y);
};