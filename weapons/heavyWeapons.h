#pragma once

#include "weapons.h"

class HeavyWeapons : public Weapons { 
public:
	HeavyWeapons();
    HeavyWeapons(int power);
    virtual int getPower() = 0;
    virtual std::string toString() const;
    virtual ~HeavyWeapons();
};