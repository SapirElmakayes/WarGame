#pragma once

#include "../game/point2d.h"
#include "../weapons/weapons.h"

class Soldier {
	
public:
	Soldier(const Point2d& location);
	Soldier(const Point2d& location, int life, int rad, std::string name);
	Soldier(const Point2d& location, int life, int rad, Weapons& weapson, std::string name);//CHANGE
	void walk(const Point2d& destination);
	bool attack(const Point2d& attackdestination);
	void setIsAlive(bool isAlive);
protected:
	Point2d _myLocation;
	int _life;
	int _radius;
	bool _isAlive=true;
	Weapons * _weapson;
	std::string _nameOfArmy;
};