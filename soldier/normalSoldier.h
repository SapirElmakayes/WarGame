#pragma once

#include "soldier.h"

class NormalSoldier : public Soldier {

public:
	NormalSoldier(const Point2d& location, Weapons& weapon, const std::string& name);
	void walk(const Point2d& destination);
	bool attack(const Point2d& attackdestination);
	virtual std::string toString() const;
	~NormalSoldier();

private:
	static constexpr int _startLife = 100;
	static constexpr int _radius = 2;
};