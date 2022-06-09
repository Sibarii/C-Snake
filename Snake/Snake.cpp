#include "Snake.h"
#include "../ConsoleTools/GoTo.h"
#include "../ConsoleTools/ClearConsole.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <chrono>
#include <ctime>

Snake::Snake(int x, int y) {
	snake(x, y);
}

void Snake::snake(int x, int y) {
	die = false;

	firstTime = clock();
	headX = x;
	headY = y;

	lastX = 0;
	lastY = 0;

	// print new head
	GoTo(43 + headX, 5 + headY);
	std::cout << "o";
}

void Snake::logik() {
	int x, y;
	bool count = true;
	double difference;

	lastTime = clock();
	difference = difftime(lastTime, firstTime);

	if (GetKeyState(VK_UP) & 0x8000) // UP
	{
		lastKey = VK_UP;
		count = false;
	}
	else if (GetKeyState(VK_DOWN) & 0x8000) { // DOWN
		lastKey = VK_DOWN;
		count = false;
	}
	else if (GetAsyncKeyState(VK_LEFT) & 0x8000) { // LEFT
		lastKey = VK_LEFT;
		count = false;
	} 
	else if (GetKeyState(VK_RIGHT) & 0x8000) { // RIGHT
		lastKey = VK_RIGHT;
		count = false;
	}
	else if (GetKeyState(VK_ESCAPE) & 0x8000) { // CLEAR ALL
		ClearConsole();
	}

	if (difference >= 50 && !die) {

		if (lastKey == VK_UP && count) {
			GoTo(43 + headX, 5 + headY);
			std::cout << " ";
			snake(headX, headY - 1);
		}
		else if (lastKey == VK_DOWN && count) {
			GoTo(43 + headX, 5 + headY);
			std::cout << " ";
			snake(headX, headY + 1);
		}
		else if (lastKey == VK_LEFT && count) {
			GoTo(43 + headX, 5 + headY);
			std::cout << " ";
			snake(headX - 1, headY);
		}
		else if (lastKey == VK_RIGHT && count) {
			GoTo(43 + headX, 5 + headY);
			std::cout << " ";
			snake(headX + 1, headY);
		}
	}
}

int Snake::getLastX() {
	return lastX;
}
int Snake::getLastY() {
	return lastY;
}

bool snakeDie() {
	bool die = false;

	return die;
}

void eatApple() {

}

