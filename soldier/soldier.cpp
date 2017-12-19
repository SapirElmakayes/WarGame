#include <iostream>

#include "soldier.h"
#include "point.h"

Soldier::Soldier() 
	: _life(0)
	, _speed(0)
	, _attackCapability(0) {
}

void Soldier::walk(const Point& destination) {
	int mySpeed = _speed;
	if(_life < 30) {
		mySpeed = mySpeed / 2;
	}

	//TODO::add walk
}
