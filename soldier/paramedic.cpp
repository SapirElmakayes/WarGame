#include <iostream>


#include "paramedicSoldier.h"
#include "point.h"

ParamedicSoldier::ParamedicSoldier(const Point& location) : 
	_life(120), 
	_speed(4),
	_attackCapability(/),
	_myLocation(location){
} 

ParamedicSoldier::walk(const Point& destination) {
	double distance = sqrt(pow(_myLocation.getX() - destination.getX()) + pow(_myLocation.getY() - destination.getY()));
	
	int mySpeed = _speed;
	if(_life < 30) {
		mySpeed = mySpeed / 2;
	}

	//TODO: walking
}

ParamedicSoldier::attack(const Point& attackdestination) {
	double distance = sqrt(pow(_myLocation.getX() - attackdestination.getX()) + pow(_myLocation.getY() - attackdestination.getY()));
	_life = _life - 10;
	//TODO: attack
}

ParamedicSoldier::toHandle() {
	//TODO
}
