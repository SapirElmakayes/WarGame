#pragma once 

#include "regularWeapons.h"

class M16 : public RegularWeapons {

static int _ballForIter=1; 
static double _power=50;

public:
	M16();
	M16(const Point2d& location);

};