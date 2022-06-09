#include "Timer.h"
#include <iostream>
#include <chrono>
#include <thread>

Timer::Timer(int timerStartMS, bool status) {
	startTimer(timerStartMS, status);
	//std::thread timerThread(&Timer::startTimer, this, timerStartMS, status);
}

void Timer::startTimer(int timerStartMS, bool status) {
	timerStatus = status;
	timeMS = timerStartMS;

	while (getTimerStatus()) {
		timeMS = timeMS + 10;
		std::cout << timeMS << std::endl;

		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}
}

void Timer::setTimerStatus(bool status) {
	timerStatus = status;
}

bool Timer::getTimerStatus() {
	return timerStatus;
}

int Timer::getTime() {
	return timeMS;
}