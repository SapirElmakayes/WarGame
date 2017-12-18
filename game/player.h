#pragma once

// This is an enum that relate to the current player types
enum class PlayerTypes {
	Computer = 0,
	Human
};

// This is an enum that relate to the Strategy
enum class Strategy {
	A = 0,
	B
};

class Player {
public:
	Player(PlayerTypes type, int numSoldiers);
	Player(PlayerTypes type, int numSoldiers, Strategy strategy);
	virtual ~Player();

private:
	Soldiers _soldiers;
	PlayerTypes _type;
	Strategy _strategy;
};