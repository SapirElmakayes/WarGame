#include <iostream>

#include "missile.h"

Missile::Missile() {
}

int Missile::getPower() const {
	return Missile::_power;
}

std::string Missile::toString() const {
	return HeavyWeapons::toString() + " Missile ";
}

Missile::~Missile() {
	
}