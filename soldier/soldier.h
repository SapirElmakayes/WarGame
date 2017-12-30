#pragma once

#include "../game/point2d.h"
#include "../weapons/weapons.h"
#include "../armor/armor.h"
#include "../armor/shieldArmor.h"
#include "../armor/bodyArmor.h"



class Soldier {
	
public:
	Soldier(const Point2d& location, int life, int rad, const std::string& name);
	Soldier(const Point2d& location, int life, int rad, Weapons& weapon, const std::string& name);//CHANGE
	void walk(const Point2d& destination);
	bool attack(const Point2d& attackdestination);
	std::string toString() const;

	//ADD POINT2D&&&
	inline Point2d getLocation() const {
		return _myLocation;
	}
	inline void setLife(size_t life) {
		_life = life;
	}
	inline int getLife() {
		return _life;
	}
	inline void setIsAlive(bool isAlive) {
		_isAlive = isAlive;
	}
	inline void setWeapon(Weapons& weapon) {
		_weapon = &weapon;
	}
	inline void setShieldArmor(ShieldArmor& shieldArmor) {
		_shieldArmor = &shieldArmor;
	}
	inline void setBodyArmor(BodyArmor& bodyArmor) {
		_bodyArmor = &bodyArmor;
	}
	inline std::string getArmy() {
		return _nameOfArmy;
	}

	~Soldier();
	
protected:
	Point2d _myLocation;
	int _life;
	int _radius;
	bool _isAlive;
	Weapons* _weapon;
	ShieldArmor* _shieldArmor;
	BodyArmor* _bodyArmor;
	std::string _nameOfArmy;
};