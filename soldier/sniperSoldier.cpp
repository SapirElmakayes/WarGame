#include <iostream>
#include <math.h> 

#include "sniperSoldier.h"

SniperSoldier(const Point2d& location, Weapons& weapson, std::string name)
	: Soldier(location, _life, _radius, weapson, name) {}


bool SniperSoldier::attack(const Point2d& attackdestination) {
	Point vec(attackdestination.getX() - _myLocation.getX(), attackdestination.getY() - _myLocation.getY());
	double vecSize = sqrt(pow(vec.getX(), 2) + pow(vec.getY(), 2));

	double r = ((double) rand() / (RAND_MAX));

	if(r <= (vecSize - 1) / vecSize) {
		return true;
	} 
	return false;
}
