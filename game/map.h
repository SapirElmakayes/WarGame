#pragma once

#include "../solider/soldier.h" 
#include "../weapons/weapons.h"
#include "../armor/armor.h"
#include "../solid/solid.h"
#include "../weapons/weaponLocation.h"
#include "../armor/armorLocation.h"

class Map{
  private:
  std::vector<Soldier*> soldiers;
  std::vector<Solid*> solid;
  std::vector<WeaponLocation*> weapons;
  std::vector<ArmorLocation*> armors;
  
  public:
  void addSoldier(const Soldier& newS);
  void addWeapons(const Weapons& newW, const Point2d location);
  void addArmor(const Armor& newA, const Point2d location);
  void addSolid(const Solid& newS);
};