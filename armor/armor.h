#pragma once

#include "../game/point2d.h"

class Armor {
public:
	Armor(const Point2d& location, double degree);
	virtual std::string toString() const;
	virtual ~Armor();
	
protected:
	Point2d _location;
	double _degree;
};