#pragma once

#include <vector>

#include "../solider/soldier.h" 
#include "../weapons/weapons.h"
#include "../armor/armor.h"
#include "../solid/solid.h"
#include "../weapons/weaponLocation.h"
#include "../armor/armorLocation.h"

class Map {
public:
  Map(size_t h, size_t w);
  void addSoldier(const Soldier& newS);
  void addWeapons(const Weapons& newW, const Point2d& location);
  void addArmor(const Armor& newA, const Point2d& location);
  void addSolid(const Solid& newS);

  inline void setHeight(int h) {
        _height = h;
  }
  inline void setWidth(int w) {
        _width = w;
  }
  inline int getHeight() {
        return _height;
  }
  inline int getWidth() {
        return _width;
  }
  inline std::vector<Soldier*>& getSoldiers() {
        return _soldiers;
  }
  
  virtual ~Map();

private:
  size_t _height;
  size_t _width;
  std::vector<Soldier*> _soldiers;
  std::vector<Solid*> _solids;
  std::vector<WeaponLocation*> _weapons;
  std::vector<ArmorLocation*> _armors;
  
};