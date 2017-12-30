#include <iostream>

#include "game.h"

Game::Game(std::string& config)
	: _map(new Map())
	, _players(nullptr)
	, _computerPlayers(0)
	, _humanPlayers(0) {

}

Game::getPlayers() {

}

size_t& Game::getComputerPlayers() {
	return _computerPlayers;
}

size_t& Game::getHumanPlayers() {
	return _humanPlayers;
}

void Game::setArea(int, int) {

}

Game::~Game() {
	if(_map != nullptr) {
		delete _map;
	}

	for(size_t i = 0; i < _humanPlayers + _computerPlayers; i++) {
		delete _players[i];
	}
	if(_players != nullptr) {
		delete _players;
	}
}