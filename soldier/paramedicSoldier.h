#pragma once

#include "soldier.h"

class ParamedicSoldier : public Soldier {

public:
	ParamedicSoldier(const Point2d& location, const std::string& name);
	void attack(const Point2d& attackdestination);
	void toHandle();
	virtual std::string toString() const;
	~ParamedicSoldier();
	
private:
	static constexpr int _startLife = 120;
	static constexpr int _radius = 4;
};