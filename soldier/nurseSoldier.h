#pragma once

class NurseSoldier : public Soldier{
public:
	NurseSoldier(const& Point location);
	void attack(const& Point attackdestination);

private:
	Point _myLocation;
	int _life;
	int _speed;
	double _attackCapability;
};