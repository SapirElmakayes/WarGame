#pragma once

#include "../game/point2d.h"
#include "Armor.h"

class ArmorLocation{
public:
  ArmorLocation(const Point2d& location, const Armor& armor);
  std::string toString() const;
  ~ArmorLocation();

private:
  Point2d _location;
  Armor* _armor;
};