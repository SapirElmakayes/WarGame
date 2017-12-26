#include <iostream>

#include "paramedicSoldier.h"

ParamedicSoldier::ParamedicSoldier(const Point& location)
	: Soldier(location, 120, 4, 0, true) {

}


void ParamedicSoldier::attack(const Point& attackdestination) {
	_life = _life - 10;
	//TODO: attack
}

void ParamedicSoldier::toHandle() {

}
