#pragma once 

#include "regularWeapons.h"

class UZI : public RegularWeapons {

public:
	UZI();
	virtual int getPower() const;
	virtual std::toString() const;
	~UZI();

private:
	static int _ballForIter = 3; 
	static int _power = 40;
};