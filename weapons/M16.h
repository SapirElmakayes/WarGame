#pragma once 

#include "regularWeapons.h"

class M16 : public RegularWeapons {

public:
	M16();
	virtual int getPower() const;
	virtual std::string toString() const;
	virtual ~M16();
	
private:
	static int _ballForIter = 1; 
	static int _power = 50;
};