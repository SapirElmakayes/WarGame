#pragma once

class RegularSoldier : public Soldier{
public:
	RegularSoldier(const& Point location);
	void attack(const& Point attackdestination);
	void run(const& Point location);

private:
	Point _myLocation;
	int _life;
	int _speed;
	double _attackCapability;
};