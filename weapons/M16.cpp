#include <iostream>

#include "M16.h"

M16::M16() {
}

int M16::getPower() const {
	return M16::_power;
}

std::string M16::toString() const {
	return RegularWeapons.toString() + "M16 ";
}

M16::~M16() {
	
}

