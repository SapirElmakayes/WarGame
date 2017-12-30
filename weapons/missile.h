#pragma once 

#include "heavyWeapons.h"

class Missile : public HeavyWeapons {

public:
	Missile();
	virtual int getPower() const;
	virtual std:string toString() const;
	virtual ~Missile();

private:
	static int _ballForIter = 3; 
	static int _power = 40;

};