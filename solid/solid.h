#pragma once

#include "../game/point2d.h"

class Solid {

public: 
    Solid(const Point2d& location, const std::string& name, size_t h, size_t w);
    virtual std::string toString() const;

    inline std::string getName() const {
    	return _name;
    }
    inline Point2d getLocation() const {
    	return _location;
    }    
    inline size_t getHeight() const {
    	return _height;
    }
    inline size_t getWidth() const {
    	return _width;
    }
    virtual ~Solid();

private:
    std::string _name;
    Point2d _location;
    size_t _height;
    size_t _width;
  
};