#pragma once

#include "soldier.h"

class SniperSoldier : public Soldier {

public:
	SniperSoldier(const Point2d& location, Weapons& weapon, const std::string& name);
	bool attack(const Point2d& attackdestination);
	virtual std::string toString() const;
	virtual ~SniperSoldier();

private:
	static constexpr int _startLife = 80;
	static constexpr int _radius = 2;
};