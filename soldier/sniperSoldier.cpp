#include <iostream>
#include <math.h> 

#include "sniperSoldier.h"

SniperSoldier::SniperSoldier(const Point2d& location, Weapons& weapon, const std::string& name)
	: Soldier(location, _startLife, _radius, weapon, name) {
}


bool SniperSoldier::attack(const Point2d& attackdestination) {
	Point2d vec(attackdestination.getX() - _myLocation.getX(), attackdestination.getY() - _myLocation.getY());
	double vecSize = sqrt(pow(vec.getX(), 2) + pow(vec.getY(), 2));

	double r = ((double) rand() / (RAND_MAX));

	if(r <= (vecSize - 1) / vecSize) {
		return true;
	} 
	return false;
}

std::string SniperSoldier::toString() const {
	return "SniperSoldier " + Soldier::toString();
}
	
SniperSoldier::~SniperSoldier() {
	
}
