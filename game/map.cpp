#include <iostream>
#include "map.h" 

Map::Map(size_t h, size_t w)
  : _hight(h)
  , _width(w) 
  , _soldiers()
  , _solids()
  , _weapons()
  , _armors() {
}

void Map::addSoldier(const Soldier& newS) {
  _soldiers.pushback(newS);
}

void Map::addWeapons(const Weapons& newW, const Point2d& location) {
  if(location.getX() < 0 || location.getX() > _hight || location.getY() < 0 || location.getY() > _width) {
    throw std::invalid_argument("unknown location");
  }
  _weapons.pushback(newW);
  //ADD: Location
}

void Map::addArmor(const Armor& newA, const Point2d& location) {
  if(location.getX() < 0 || location.getX() > _hight || location.getY() < 0 || location.getY() > _width) {
    throw std::invalid_argument("unknown location");
  }
  _armors.pushback(newA);
  //ADD: Location
}

void Map::addSolid(const Solid& newS) {
  _solids.pushback(newS);
}

Map::~Map() {
  for(Soldier* s : _soldiers) {
    delete s;
  }

  for(Weapons* w : _weapons) {
    delete w;
  }

  for(Armor* a : _armors) {
    delete a;
  }
  
  for(Solid* s : _solids) {
    delete s;
  }
}