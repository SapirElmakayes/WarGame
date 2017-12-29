#include <iostream>
#include <math.h> 

#include "normalSoldier.h"

NormalSoldier::NormalSoldier(const Point2d& location, Weapons& weapson, std::string name)
	: Soldier(location, _life, _radius, weapson, name) {
}


void NormalSoldier::walk(const Point2d& destination) {
	int myRad = _radius;
	if(_life < 30) {
		myRad = myRad / 2;
	}

	Point vec(destination.getX() - _myLocation.getX(), destination.getY() - _myLocation.getY());
	double vecSize = sqrt(pow(vec.getX(), 2) + pow(vec.getY(), 2));
	
	if(vecSize <= myRad) {
		_myLocation.setX(destination.getX());
		_myLocation.setY(destination.getY());

	} else if(vecSize > 4*myRad) {
		_life = _life - 10;
		Point normalized(vec.getX() / vecSize, vec.getY() / vecSize);

		_myLocation.setX(_myLocation.getX() + 2 * myRad * normalized.getX());
		_myLocation.setY(_myLocation.getY() + 2 * myRad * normalized.getY());
	} else {
		Point normalized(vec.getX() / vecSize, vec.getY() / vecSize);

		_myLocation.setX(_myLocation.getX() + myRad * normalized.getX());
		_myLocation.setY(_myLocation.getY() + myRad * normalized.getY());
	}

	//TODO: walking
}


bool NormalSoldier::attack(const Point2d& attackdestination) {
	Point vec(attackdestination.getX() - _myLocation.getX(), attackdestination.getY() - _myLocation.getY());
	double vecSize = sqrt(pow(vec.getX(), 2) + pow(vec.getY(), 2));

	double r = ((double) rand() / (RAND_MAX));

	if(r <= 1 / vecSize) {
		return true;
	} 
	return false;
}