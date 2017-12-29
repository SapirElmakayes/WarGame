# include "soild.hpp"

#include <iostream>

using namespace std;

Solid::Solid(Point2d & location1,string name1, int h, int w): location(location1),name(name1){
    if(h>=2 && w>=2){
        height=h;
        weight=w;
    }
    else{
        throw invalid_argument("uncorrect size");
    }
}