#pragma once

#include "../game/point.h"

class Soldier {
public:
	Soldier(const Point& location);
	Soldier(const Point& location, int life, int rad, double attackCapability, bool isAlive);
	void walk(const Point& destination);
	bool attack(const Point& attackdestination);

protected:
	Point _myLocation;
	int _life;
	int _radius;
	double _attackCapability;	
	bool _isAlive;
};