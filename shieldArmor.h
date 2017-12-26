#pragma once

#include "armor.h"

class ShieldArmor : Public Armor {
  ShieldArmor();
  ShieldArmor(const Point& location, double degree);
};