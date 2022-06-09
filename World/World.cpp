#include "World.h"
#include <iostream>
#include "../ConsoleTools/GoTo.h"
#include "../ConsoleTools/ClearConsole.h"

World::World(int x, int y) {
	setWorld(x, y);
}

void World::setWorld(int x, int y) {
	wight = x;
	hight = y;

	ClearConsole();

	for (int i = 0; i < y; i++) {
		for (int a = 0; a < x; a++) {
			GoTo(43 + a, 5);
			std::cout << "#";
			GoTo(43 + a, y + 4);
			std::cout << "#";
		}
		GoTo(43, 5 + i);
		std::cout << "#";
		GoTo(x + 43, 5 + i);
		std::cout << "#" << std::endl;
	}
}

int World::getWorld() {
	return wight, hight;
}

int World::getWight() {
	return wight;
}

int World::getHight(){
	return hight;
}
