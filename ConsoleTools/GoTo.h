#pragma once

class GoTo {
private:
	int lastX, lastY;

public:
	GoTo(int x, int y);

	void gotoXY(int x, int y);

	int getLastXY() { return lastX, lastY; }
	int getLastX() { return lastX; }
	int getLastY() { return lastY; }
};