#include <iostream>


#include "sniperSoldier.h"
#include "point.h"

NurseSoldier::NurseSoldier(const Point& location) : 
	_life(120), 
	_speed(4),
	_attackCapability(/),
	_myLocation(location){
} 

NurseSoldier::walk(const Point& destination) {
	double distance = sqrt(pow(_myLocation.getX() - destination.getX()) + pow(_myLocation.getY() - destination.getY()));
	
	int mySpeed = _speed;
	if(_life < 30) {
		mySpeed = mySpeed / 2;
	}

	//TODO: walking
}

NurseSoldier::attack(const Point& attackdestination) {
	double distance = sqrt(pow(_myLocation.getX() - attackdestination.getX()) + pow(_myLocation.getY() - attackdestination.getY()));
	_life = _life - 10;
	//TODO: attack
}

NurseSoldier::toHandle() {
	//TODO
}
