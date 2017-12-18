#include <iostream>


#include "sniperSoldier.h"
#include "point.h"

SniperSoldier::SniperSoldier(const& Point location) : 
	_life(80), 
	_speed(2),
	_attackCapability(/),
	_myLocation(location){
} 

SniperSoldier::walk(const& Point destination) {
	double distance = sqrt(pow(_myLocation.getX() - destination.getX()) + pow(_myLocation.getY() - destination.getY()));
	
	int mySpeed = _speed;
	if(_life < 30) {
		mySpeed = mySpeed / 2;
	}

	//TODO: walking
}


SniperSoldier::attack(const& Point attackdestination) {
	double distance = sqrt(pow(_myLocation.getX() - attackdestination.getX()) + pow(_myLocation.getY() - attackdestination.getY()));
	//TODO: attack
}
