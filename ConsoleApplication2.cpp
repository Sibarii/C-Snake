#include <iostream>
#include <ctime>
#include <windows.h>
#include "ConsoleTools/ClearConsole.h"
#include "World/World.h"
#include "Timer/Timer.h"
#include "Snake/Snake.h"
#include <chrono>
=========
>>>>>>>>> Temporary merge branch 2

int main() {
	//World w = World(30, 10);
	Snake s = Snake(3, 7);
	std::cout.flush();
	while (true) {
		s.logik();
		Sleep(10);
	}
}