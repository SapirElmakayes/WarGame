#include <iostream>

#include "regularWeapons.h"

RegularWeapons::RegularWeapons()
	: Weapons() {
}

RegularWeapons::RegularWeapons(int power)
	: Weapons(power) {
}

std::string RegularWeapons::toString() const {
	return Weapons::toString() + "Regular Weapons: ";
}

RegularWeapons::~RegularWeapons() {

}
