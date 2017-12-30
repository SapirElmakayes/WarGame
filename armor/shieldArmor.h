#pragma once

#include "armor.h"

class ShieldArmor : public Armor {
public:
  	ShieldArmor(const Point2d& location, double degree);
  	std::string toString() const;
  	~ShieldArmor();
};