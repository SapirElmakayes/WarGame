#pragma once
#include "Weapons.h"

class WeaponLocation{
  private:
  Point2d location;
  Weapons * weapon;
  
  WeaponLocation(const Point2d location,const Weapons& weapon);
  
};