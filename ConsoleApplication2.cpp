#include <iostream>
#include <ctime>
#include "ConsoleTools/ClearConsole.h"
#include "World/World.h"
#include "Timer/Timer.h"
#include "Snake/Snake.h"
#include <chrono>

void test() {

}

int main() {
	//World w = World(30, 10);
	Snake s = Snake(3, 7);
	std::cout.flush();
	while (true) {
		s.input();
	}
}