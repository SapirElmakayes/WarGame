#include <iostream>

# include "solid.h"

using namespace std;

Solid::Solid(const Point2d& location, const string& name, size_t h, size_t w)
	: _location(location)
	, _name(name) {	
	    if(h >= 2 && w >= 2) {
	        _height = h;
	        _width = w;
	    } else {
	        throw invalid_argument("uncorrect size");
	    }
}

string Solid::toString() const {
	return "Solid: " + _name + _location.toString();
}

Solid::~Solid() {
	
}