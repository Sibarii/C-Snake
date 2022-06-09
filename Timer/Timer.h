#pragma once
class Timer
{
private:
	int timeMS;
	bool timerStatus = false;

public:
	Timer(int timerStartMS, bool on);

	void startTimer(int timerSartMS, bool on);
	void setTimerStatus(bool status);

	bool getTimerStatus();
	int getTime();
};

