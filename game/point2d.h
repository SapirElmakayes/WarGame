#pragma once

// This is a simple representation of a point
// a vector of two doubles (x, y)
class Point2d {
public:
	Point2d(double x, double y);
	Point2d(const Point2d& other);

	inline double getX() const {
		return _x;
	}

	inline double getY() const {
		return _y;
	}

	inline void setX(double newX) {
		_x = newX;
	}

	inline void setY(double newY) {
		_y = newY;
	}
private:
	double _x;
	double _y;
};