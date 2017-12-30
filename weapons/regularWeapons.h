#pragma once

#include "weapons.h"

class RegularWeapons : public Weapons { 
public:	
	RegularWeapons();
    RegularWeapons(int power);
    virtual int getPower() = 0;
    virtual std::string toString() const;
    virtual ~RegularWeapons();
};