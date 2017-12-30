#pragma once
#include "Armor.h"

class ArmorLocation{
public:
  ArmorLocation(const Point2d& location, const Armor& armor);

private:
  Point2d _location;
  Armor* _armor;
};