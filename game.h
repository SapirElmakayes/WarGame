#pragma once

class Game {
    private:
    player** _players;
    size_t _computerPlayers;
    size_t _humanPlayers;
    
    public:
    Game();
    player**& getPlayers();
    size_t& getComputerPlayers();
    size_t& getHumanPlayers();
    void setArea(int, int);
};