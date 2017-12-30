#include <iostream>
#include <math.h> 

#include "soldier.h"

Soldier::Soldier(const Point2d& location, int life, int rad, const std::string& name)
	: _myLocation(location)
	, _life(life)
	, _radius(rad)
	, _weapon(nullptr)
	, _shieldArmor(nullptr)
	, _bodyArmor(nullptr)
	, _nameOfArmy(name) { 
}

Soldier::Soldier(const Point2d& location, int life, int rad, Weapons& weapon, const std::string& name)
	: _myLocation(location)
	, _life(life)
	, _radius(rad)
	, _weapon(&weapon)
	, _shieldArmor(nullptr)
	, _bodyArmor(nullptr)
	, _nameOfArmy(name) { 
}

void Soldier::walk(const Point2d& destination) {
	int myRad = _radius;
	if(_life < 30) {
		myRad = myRad / 2;
	}

	Point2d vec(destination.getX() - _myLocation.getX(), destination.getY() - _myLocation.getY());
	double vecSize = sqrt(pow(vec.getX(), 2) + pow(vec.getY(), 2));
	
	if(vecSize <= myRad) {
		_myLocation.setX(destination.getX());
		_myLocation.setY(destination.getY());
	} else {
		Point2d normalized(vec.getX() / vecSize, vec.getY() / vecSize);

		_myLocation.setX(_myLocation.getX() + myRad * normalized.getX());
		_myLocation.setY(_myLocation.getY() + myRad * normalized.getY());
	}

	//TODO: check who attack!!!! only from others Armys
	//Paramedic:: who need help!!!! from my Army
}

std::string Soldier::toString() const {
	std::string soldier;
	if(_shieldArmor != nullptr) {
		soldier += _shieldArmor->toString();
	}
	if(_bodyArmor != nullptr) {
		soldier += _bodyArmor->toString();
	}
	if(_weapon != nullptr) {
		soldier += _weapon->toString();
	}
	return "Soldier Army: " + _nameOfArmy + "Location: " + _myLocation.toString() + "Life: " + std::to_string(_life) + soldier;
}

Soldier::~Soldier() {
	if(_bodyArmor != nullptr) {
		delete _bodyArmor;
	}
	if(_shieldArmor != nullptr) {
		delete _shieldArmor;
	}
	if(_weapon != nullptr) {
		delete _weapon;
	}
}