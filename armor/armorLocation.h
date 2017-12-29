#pragma once
#include "Armor.h"

class ArmorLocation{
  private:
  Point2d location;
  Armor * armor;
  
  ArmorLocation(const Point2d location,const Armor& armor);
  
};