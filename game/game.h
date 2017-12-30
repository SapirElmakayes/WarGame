#pragma once

#include "player.h"
#include "map.h"
#include "fileReader.h"

class Game {
public:
    Game(std::string& config);
    Player**& getPlayers();

    inline size_t getComputerPlayers() {
    	return _computerPlayers;
    }
    inline size_t getHumanPlayers() {
    	return _humanPlayers;
    }
    inline void setMap(int h, int w) {
    	_map->setHeight(h);
    	_map->setWidth(w); 
    }
    inline Map& getMap() const {
    	return *_map;
    }
    
    ~Game();

private:
	Map* _map;
    Player** _players;
    size_t _computerPlayers;
    size_t _humanPlayers;
};