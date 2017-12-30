#pragma once

#include "../game/point2d.h"

class Weapons {

public:
	Weapons();
	Weapons(int power);
	virtual int getPower() const = 0;
	virtual std::string toString() const;
	virtual ~Weapons() = 0;

protected:
	int _power;
};