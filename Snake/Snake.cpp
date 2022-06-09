#include "Snake.h"
#include "../ConsoleTools/GoTo.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <chrono>
#include <ctime>

//#include <stdio.h>
//#include <ctype.h>

#define ESC   27
#define UP	72
#define LEFT  75
#define RIGHT 77
#define DOWN  80

Snake::Snake(int x, int y) {
	snake(x, y);
}

void Snake::snake(int x, int y) {
	firstTime = clock();
	headX = x;
	headY = y;

	GoTo(43 + headX, 5 + headY);
	//GoTo(43 + headX, 5 + headY);
	//std::cout << "o";
}

void Snake::input() {
	int ch = _getch();

	switch (ch) {
	case UP:
		move(headX, headY + 1);
	case DOWN:
		move(headX, headY - 1);
	case LEFT:
		move(headX - 1, headY);
	case RIGHT:
		move(headX + 1, headY);
	}
}

void Snake::move(int x, int y) {
	double difference;

	lastTime = clock();
	difference = difftime(lastTime, firstTime);

	if (difference >= 400) {
		std::cout << difference << std::endl;

		snake(x, y);
	}
}

bool snakeDie() {
	bool die = false;

	return die;
}

void eatApple() {

}

