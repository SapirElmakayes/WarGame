#include <iostream>

#include "shieldArmor.h"

ShieldArmor::ShieldArmor(){}

ShieldArmor::ShieldArmor(const Point & location, double degree) : Armor(location, degree) { 
}