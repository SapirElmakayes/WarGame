#include <iostream>

#include "armor.h"

using namespace std;

Armor::Armor() : _degree(0)  { } 

Armor::Armor(const Point2d& location , double degree) : _location(location) {
    if(degree>1.0 || degree<0.65){
        throw invalid_argument("invalid degree of armor");
    }
    _degree=degree;
}



