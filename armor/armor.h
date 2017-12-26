#pragma once

#include "../game/point2d.h"

class Armor {

public:
	Armor();
	Armor(const Point2d& location , double degree);
	
protected:
	double _degree;
	Point2d _location;
};