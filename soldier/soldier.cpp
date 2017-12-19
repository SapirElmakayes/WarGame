#include <iostream>
#include <math.h> 

#include "soldier.h"

Soldier::Soldier(const Point& location) 
	: _myLocation(location)
	, _life(0)
	, _radius(0)
	, _attackCapability(0)
	, _isAlive(true) {
}

Soldier::Soldier(const Point& location, int life, int rad, double attackCapability, bool isAlive)
	: _myLocation(location)
	, _life(life)
	, _radius(rad)
	, _attackCapability(attackCapability)
	, _isAlive(isAlive) {
}


void Soldier::walk(const Point& destination) {
	int myRad = _radius;
	if(_life < 30) {
		myRad = myRad / 2;
	}

	Point vec(destination.getX() - _myLocation.getX(), destination.getY() - _myLocation.getY());
	double vecSize = sqrt(pow(vec.getX(), 2) + pow(vec.getY(), 2));
	
	if(vecSize <= myRad) {
		_myLocation.setX(destination.getX());
		_myLocation.setY(destination.getY());
	} else {
		Point normalized(vec.getX() / vecSize, vec.getY() / vecSize);

		_myLocation.setX(_myLocation.getX() + myRad * normalized.getX());
		_myLocation.setY(_myLocation.getY() + myRad * normalized.getY());
	}

	//TODO: check who attack!!!! only from others Armys
	//Paramedic:: who need help!!!! from my Army
}


