#include <iostream>
#include <math.h> 

#include "sniperSoldier.h"

SniperSoldier::SniperSoldier(const Point& location)
	: Soldier(location, 80, 2, 0, true) {
}


bool SniperSoldier::attack(const Point& attackdestination) {
	Point vec(attackdestination.getX() - _myLocation.getX(), attackdestination.getY() - _myLocation.getY());
	double vecSize = sqrt(pow(vec.getX(), 2) + pow(vec.getY(), 2));

	double r = ((double) rand() / (RAND_MAX));

	if(r <= (vecSize - 1) / vecSize) {
		return true;
	} 
	return false;
}
