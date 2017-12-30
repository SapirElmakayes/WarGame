#include <iostream>

#include "weapons.h"

Weapons::Weapons()
	: _power(0) {
}

Weapons::Weapons(int power) 
	: _power(power) {
}

std::string Weapons::toString() const {
	return "Weapons: ";
}

Weapons::~Weapons() {

}




