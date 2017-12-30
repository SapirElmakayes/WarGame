#pragma once

#include "armor.h"

class BodyArmor : public Armor{
public:
  BodyArmor(const Point2d& location, double degree);
  std::string toString() const;
  ~BodyArmor();
};