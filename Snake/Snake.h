#pragma once
#include <ctime>

class Snake {
private:
	int headX;
	int headY;

	int lastX;
	int lastY;

	int bodyPositions[999][1];

	int lastKey;

	bool die;

	clock_t firstTime;
	clock_t lastTime;

public:
	Snake(int x, int y);

	void snake(int x, int y);

	void logik();

	int getLastX();
	int getLastY();
};