#pragma once

#include "../game/point.h"

class Soldier {
public:
	Soldier();
	void walk(const Point& destination);
	void attack(const Point& attackdestination) =0;

protected:
	Point _myLocation;
	int _life;
	int _speed;
	double _attackCapability;	
	bool _isAlive;
};