#pragma once 

#include "regularWeapons.h"

class Missile : public HeavyWeapons {

static int _ballForIter=3; 
static double _power=40;

public:
	Missile();
	Missile(const Point2d& location);

};