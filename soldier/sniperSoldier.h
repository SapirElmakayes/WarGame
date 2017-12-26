#pragma once

#include "soldier.h"


class SniperSoldier : public Soldier{
public:
	SniperSoldier(const Point& location);
	bool attack(const Point& attackdestination);

private:

};