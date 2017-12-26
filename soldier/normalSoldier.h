#pragma once

#include "soldier.h"

class NormalSoldier : public Soldier{
public:
	NormalSoldier(const Point& location);
	void walk(const Point& destination);
	bool attack(const Point& attackdestination);

private:

};