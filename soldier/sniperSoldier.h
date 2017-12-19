#pragma once

#include "soldier.h"


class SniperSoldier : public Soldier{
public:
	SniperSoldier(const Point& location);
	void attack(const Point& attackdestination);

private:

};