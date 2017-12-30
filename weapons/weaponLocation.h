#pragma once

#include "../game/point2d.h"
#include "Weapons.h"

class WeaponLocation {

public:
	WeaponLocation(const Point2d& location, const Weapons& weapon);
	std:string toString() const;
	~WeaponLocation();

private:
  Point2d _location;
  Weapons* _weapon;
  
};