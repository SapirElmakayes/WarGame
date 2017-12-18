#include "player.h"

Player::Player(PlayerTypes type, int numSoldiers) 
	: _type(type) 
	, _soldiers[numSoldiers] {
}

Player::Player(PlayerTypes type, int numSoldiers, Strategy strategy) 
	: _type(type) 
	, _soldiers(numSoldiers)
	, _strategy(strategy) {
}

Player::~Player() {

}
