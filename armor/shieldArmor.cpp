#include <iostream>

#include "shieldArmor.h"

ShieldArmor::ShieldArmor(const Point2d& location, double degree)
	: Armor(location, degree) { 
}

std::string ShieldArmor::toString() const {
	return Armor::toString() + "ShieldArmor ";
}

ShieldArmor::~ShieldArmor() {

}