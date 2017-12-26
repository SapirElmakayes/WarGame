#include <iostream>

#include "weapons.h"

Weapons::Weapons() : _power(0){ }

Weapons::Weapons(const Point2d& location , double power) : _location(location), _power(power) { }



