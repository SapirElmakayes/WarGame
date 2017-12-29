#include <iostream>

#include "paramedicSoldier.h"

ParamedicSoldier::ParamedicSoldier(const Point2d& location, std::string name)
	: Soldier(location, _life, _radius, name){
}


void ParamedicSoldier::attack(const Point2d& attackdestination) {
	_life = _life - 10;
	//TODO: attack
}

void ParamedicSoldier::toHandle() {

}
