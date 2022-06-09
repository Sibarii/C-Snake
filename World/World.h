#pragma once

class World {
private:
	int wight, hight;

public:
	World(int x, int y);

	void setWorld(int x, int y);

	int getWorld();
	int getWight();
	int getHight();
};