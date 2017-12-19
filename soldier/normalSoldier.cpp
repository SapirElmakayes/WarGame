#include <iostream>


#include "normalSoldier.h"
#include "point.h"



NormalSoldier::NormalSoldier(const Point& location) : 
	_life(100), 
	_speed(2),
	_attackCapability(/),
	_myLocation(location){
} 

NormalSoldier::walk(const Point& destination) {
	double distance = sqrt(pow(_myLocation.getX() - destination.getX()) + pow(_myLocation.getY() - destination.getY()));
	if(distance > 4 * _rad) {
		int mySpeed = _speed * 2;
		_life = _life - 10;
		//TODO: Runing
	}

	int mySpeed = _speed;
	if(_life < 30) {
		mySpeed = mySpeed / 2;
	}

	//TODO: walking
}


NormalSoldier::attack(const Point& attackdestination) {
	double distance = sqrt(pow(_myLocation.getX() - attackdestination.getX()) + pow(_myLocation.getY() - attackdestination.getY()));
	//TODO: attack
}
