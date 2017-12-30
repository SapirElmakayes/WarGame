#include <iostream>
#include "armorLocation.h"

ArmorLocation::ArmorLocation(const Point2d& location, const Armor& armor)
	: _location(location)
	, _armor(&armor) {
}

std::string ArmorLocation::toString() const {
	return "Armor: " + _armor->toString() + "location: " + _location->toString();
}

ArmorLocation::~ArmorLocation() {

}