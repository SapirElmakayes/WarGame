#include "player.h"

Player::Player(PlayerTypes type, int numSoldiers) 
	: _type(type) 
	, _soldiers(new Soldier[numSoldiers])
	, _strategy(Strategy::NoStrategy) {
}

Player::Player(PlayerTypes type, int numSoldiers, Strategy strategy) 
	: _type(type) 
	, _soldiers(new Soldier[numSoldiers])
	, _strategy(strategy) {
}

Player::~Player() {

}
