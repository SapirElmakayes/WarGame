#include <iostream>

#include "regularWeapons.h"

UZI::UZI() {
}

int UZI::getPower() const {
	return UZI::_power;
}

std::string UZI::toString() const {
	return RegularWeapons::toString() + " UZI ";
}

UZI::~UZI() {
	
}
