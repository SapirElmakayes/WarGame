#include <iostream>

#include "bodyArmor.h"

BodyArmor::BodyArmor(const Point2d& location, double degree)
	: Armor(location, degree) { 
}

std::string BodyArmor::toString() const {
	return Armor::toString() + "BodyArmor ";
}

BodyArmor::~BodyArmor() {

}