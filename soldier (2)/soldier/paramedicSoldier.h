#pragma once

#include "soldier.h"

class ParamedicSoldier : public Soldier {

static int _life=120;
static int _radius=4;

public:
	ParamedicSoldier(const Point2d& location, std::string name);
	void attack(const Point2d& attackdestination);
	void toHandle();
	
private:
};