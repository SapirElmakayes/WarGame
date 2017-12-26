#pragma once

#include "game.h"
#include "player.h"
#include "../weapons/weapons.h"
#include "armor.h"
#include "point2d.h"

class FileReader {

public:
    FileReader(std::string pathGame, std::string** pathPlayer);
    void visit(Game *game);
    void create_player(Player**& players, int& currentPlayer, std::string type, size_t& computer_players, size_t& human_players);
    Weapon* getWeapon(std::string type);
    Armor* getArmor(std::string type, std::string rate);
    Point2d* locationToPoint(std::string location) const;

private:
    std::string _pathGame;
    std::string** _pathPlayer;
    int _height;
    int _width;
    int _numOfPlayers;
    int _numOfSoldiers;
};