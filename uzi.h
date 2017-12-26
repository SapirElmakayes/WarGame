#pragma once 

#include "regularWeapons.h"

class UZI : public RegularWeapons {

static int _ballForIter=3; 
static double _power=40;

public:
	UZI();
	UZI(const Point2d& location);

};