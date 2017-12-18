#include <iostream>

#include "point.h"

Point::Point(double x, double y) 
	: _x(x), _y(y){

}

Point::Point(const Point& other) 
	: _x(other._x), _y(other._y) {

}