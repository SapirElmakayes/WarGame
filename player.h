#pragma once
#include "../soldier/soldier.h"


// This is an enum that relate to the current player types
enum class PlayerTypes {
	computer = 0,
	human
};

// This is an enum that relate to the Strategy
enum class Strategy {
	NoStrategy = 0,
	A,
	B
};

class Player {
public:
	Player(PlayerTypes type, int numSoldiers);
	Player(PlayerTypes type, int numSoldiers, Strategy strategy);
	virtual ~Player();

private:
	Soldier* _soldiers;
	PlayerTypes _type;
	Strategy _strategy;
};