#pragma once

#include "soldier.h"

class ParamedicSoldier : public Soldier {
public:
	ParamedicSoldier(const Point& location);
	void attack(const Point& attackdestination);
	void toHandle();
	
private:
};