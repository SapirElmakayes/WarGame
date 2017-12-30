#include <iostream>

#include "paramedicSoldier.h"

ParamedicSoldier::ParamedicSoldier(const Point2d& location, const std::string& name)
	: Soldier(location, _startLife, _radius, name) {
}


void ParamedicSoldier::attack(const Point2d& attackdestination) {
	_life = _life - 10;
	//TODO: attack
}

void ParamedicSoldier::toHandle() {

}

std::string ParamedicSoldier::toString() const {
	return "ParamedicSoldier " + Soldier::toString();
}
	
ParamedicSoldier::~ParamedicSoldier() {
	
}
