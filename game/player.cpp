#include <iostream>
#include "player.h"

Player::Player(PlayerTypes type, int numSoldiers) 
	: _type(type) 
	, _soldiers(new Soldier*[numSoldiers])
	, _strategy(Strategy::NoStrategy)
	, _numSoldiers(numSoldiers) {
}

Player::Player(PlayerTypes type, int numSoldiers, Strategy strategy) 
	: _type(type) 
	, _soldiers(new Soldier*[numSoldiers])
	, _strategy(strategy) {
}

Player::~Player() {

}
