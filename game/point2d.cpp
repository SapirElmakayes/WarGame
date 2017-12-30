#include <iostream>

#include "point2d.h"

Point2d::Point2d(double x, double y) 
	: _x(x), _y(y){

}

Point2d::Point2d(const Point2d& other) 
	: _x(other._x), _y(other._y) {

}

std::string Point2d::toString() const {
	return " (" + std::to_string(_x) + ", " + std::to_string(_y) + ") ";
}