#include <iostream>

#include "soldier.h"

Soldier::Soldier() 
	: _life(0)
	, _speed(0)
	, _attackCapability(0)
	, _isAlive(true) {
}

void Soldier::walk(const Point& destination) {
	int mySpeed = _speed;
	if(_life < 30) {
		mySpeed = mySpeed / 2;
	}

	//TODO::add walk
}

void Soldier::attack(const Point& attackdestination) {
	
}

