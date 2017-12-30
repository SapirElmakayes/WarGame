#include <iostream>

#include "armor.h"

using namespace std;

Armor::Armor(const Point2d& location, double degree)
	: _location(location) {
	    if(degree > 1.0 || degree < 0.65) {
	        throw invalid_argument("invalid degree of armor");
	    }
	    _degree = degree;
}

std::string Armor::toString() const {
	return "Armor ";
}

Armor::~Armor() {

}


