#pragma once

#include "soldier.h"


class SniperSoldier : public Soldier{

static int _life=80;
static int _radius=2;

public:
	SniperSoldier(const Point2d& location, Weapons& weapson, std::string name);
	bool attack(const Point2d& attackdestination);

};