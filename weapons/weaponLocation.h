#pragma once
#include "Weapons.h"

class WeaponLocation{

public:
	WeaponLocation(const Point2d& location, const Weapons& weapon);

private:
  Point2d _location;
  Weapons* _weapon;
  
};