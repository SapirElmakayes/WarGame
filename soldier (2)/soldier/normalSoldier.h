#pragma once

#include "soldier.h"

class NormalSoldier : public Soldier{

static int _life=100;
static int _radius=2;

public:
	NormalSoldier(const Point2d& location, Weapons& weapson, std::string name);
	void walk(const Point2d& destination);
	bool attack(const Point2d& attackdestination);

private:

};