#pragma once
#include <ctime>

class Snake {
private:
	int headX;
	int headY;
	int bodyPositions[999][1];

	time_t firstTime;
	time_t lastTime;
public:
	Snake(int x, int y);

	void snake(int x, int y);

	void input();
	void move(int x, int y);
};