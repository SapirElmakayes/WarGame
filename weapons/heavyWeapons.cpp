#include <iostream>

#include "heavyWeapons.h"

HeavyWeapons::HeavyWeapons() 
	: Weapons() {
}

HeavyWeapons::HeavyWeapons(int power) 
	: Weapons(power) {
}

std::string HeavyWeapons::toString() const {
	return Weapons::toString() + "Heavy Weapons: ";
}

HeavyWeapons::~HeavyWeapons() {
	
}
