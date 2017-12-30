#include <iostream>
#include "armorLocation.h"

ArmorLocation::ArmorLocation(const Point2d& location, const Armor& armor)
	: _location(location)
	, _armor(&armor) {
}
