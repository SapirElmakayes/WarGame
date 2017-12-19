#pragma once

class ParamedicSoldier : public Soldier{
public:
	ParamedicSoldier(const Point& location);
	void attack(const Point& attackdestination);

private:
	Point _myLocation;
	int _life;
	int _speed;
	double _attackCapability;
};