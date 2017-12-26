#pragma once

#include "../game/point2d.h"

class Weapons {

public:
	Weapons();
	Weapons(const Point2d& location , double power);
	
protected:
	double _power;
	Point2d _location;
};