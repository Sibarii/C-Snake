#include "GoTo.h"
#include <windows.h>

GoTo::GoTo(int x, int y) {
	gotoXY(x, y);
}

void GoTo::gotoXY(int x, int y) {
	lastX = x;
	lastY = y;

	COORD coord = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
