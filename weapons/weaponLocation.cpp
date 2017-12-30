#include "weaponLocation.h"

WeaponLocation::WeaponLocation(const Point2d& location, const Weapons& weapon)
	: _location(location)
	, _weapon(&weapon) {
}

std::string WeaponLocation::toString() const {
	return "weapon: " + _weapon->toString() + "location: " + _location->toString();
}

WeaponLocation::~WeaponLocation() {
	
}