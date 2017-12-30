#include <iostream>
#include "fileReader.h"

using namespace std;

FileReader::FileReader(string pathGame, string** pathPlayer)
    : _pathGame(pathGame)
    , _pathPlayer(pathPlayer) {
}

void FileReader::readFile(Game *game) {
    string path = _pathGame;
    Player**& players = game->getPlayers();
    size_t& computer_players = game->getComputerPlayers();
    size_t& human_players = game->getHumanPlayers();

    ifstream input(path);
    string line;
    int currentPlayer = 0;

    while(getline(input, line)) {
        vector<string> data;
        istringstream s(line);
        //not final
        while (s.good()) { 
            string sub;
            getline(s, sub, ','); 
            vec.push_back(sub);
        }

        string current = vec[0];

        switch(current) {
            case "Game":
                continue;
                break;
            case "Objects":
                continue;
                break;
            case "battlefieldSize":
                this->_height = stoi(vec[1]); //CHANGE
                this->_width = stoi(vec[2]); //CHANGE
                if(this->_width >= 0 && this->_height >= 0) {
                    game->setMap(height, width);
                } else {
                    throw invalid_argument("uncorrect size");
                }
                break;
            case "players":
                string numOfPlayers = vec[1];
                if(numOfPlayers == "2" || numOfPlayers == "3" || numOfPlayers == "4") {
                    this->_numOfPlayers = stoi(numOfPlayers);
                    players = new player*[this->_numOfPlayers];
                    for(int i = 0; i < this->_numOfPlayers; i++) {
                        players[i] = nullptr;
                    }
                } else {
                    throw invalid_argument("uncorrect number of players");
                }
                break;
            case "p1":
                if(currentPlayer == 0) {
                    currentPlayer++;
                    create_player(players, currentPlayer, vec[1], computer_players, human_players);
                } else {
                    throw invalid_argument("Invalid line 5");
                }
                break;
            case "p2":
                if (currentPlayer == 1) {
                    currentPlayer++;
                    create_player(players, currentPlayer, vec[1], computer_players, human_players);
                } else {
                    throw invalid_argument("invalid line 6");
                }
                break;
            case "p3":
                if (currentPlayer == 2) {
                    currentPlayer++;
                    create_player(players, currentPlayer, vec[1], computer_players, human_players);
                } else {
                    throw invalid_argument("invalid line 7");
                }
                break;
            case "p4":
                if(currentPlayer == 3) {
                    currentPlayer++;
                    create_player(players, currentPlayer, vec[1], computer_players, human_players);
                } else {
                    throw invalid_argument("invalid line 8");
                }
                break;
            case "soldiers":
                this->_numOfSoldiers = stoi(vec[1]);
                if(this->_numOfSoldiers <= 0) {
                    throw invalid_argument("invalid num of soldiers");
                }
                break;
            case "normal":
                Point2d* location = locationToPoint(vec[1]);
                Weapon* weapon_name = getWeapon(vec[2]);
                string army_name = "army:" + to_string(currentPlayer);
                NormalSoldier* newN = NormalSoldier(*location, weapon_name, army_name);
                if(currentPlayer > 0) {
                    players[currentPlayer - 1]->setNormalSoldier(*newN); //add
                }
                game->getArea().addSoldier(*newN); //change
                break;
            case "sniper":
                Point2d* location = locationToPoint(vec[1]);
                Weapon* weapon_name = getWeapon(vec[2]);
                string army_name = "army:" + to_string(currentPlayer + 1);
                SniperSoldier* newS = new SniperSoldier(*location, weapon_name, army_name);
                if(currentPlayer > 0) {
                    players[currentPlayer - 1]->setNewSniper(*newS);
                }
                game->getMap().addSoldier(*newS);
                break;
            case "paramedic":
                Point2d* location = locationToPoint(vec[1]);
                string army_name = "army:" + to_string(currentPlayer + 1);
                ParamedicSoldier* newP = new ParamedicSoldier(*location, nullptr, army_name); 
                if(currentPlayer > 0) {
                    players[currentPlayer - 1]->setNewParamedic(*newP);
                }
                game->getMap().addSoldier(*newP);
                break;
            case "Armor":
                Point2d* location = locationToPoint(vec[3]);
                Armor* armor_name = getArmor(vec[1], vec[2]);
                game->getMap().addArmor(*location, *armor_name);
                break;
            case "weapon":
                Point2d* location = locationToPoint(vec[2]);
                Weapon* weapon_name = getWeapon(vec[1]);
                game->getMap().addWeapon(*location,*weapon_name);
                break;
            case "solid":
                Solid* solid = new Solid(*locationToPoint(vec[4]), vec[1], stoi(vec[2]), stoi(vec[3]));
                game->getMap().addSolid(*solid);
                break;
            default:
                throw invalid_argument("invalid line");
        }


        // if(current == "Game" || current == "Objects") {
        //     continue;
        // } else if(current == "battlefieldSize") {
        //     this->_height = stoi(vec[1]); //CHANGE
        //     this->_width = stoi(vec[2]); //CHANGE
        //     if(this->_width >= 0 && this->_height >= 0) {
        //         game->setMap(height, width);
        //     } else {
        //         throw invalid_argument("uncorrect size");
        //     }
        // } else if(current == "players") {
        //     string numOfPlayers = vec[1];
        //     if(numOfPlayers == "2" || numOfPlayers == "3" || numOfPlayers == "4") {
        //         this->_numOfPlayers = stoi(numOfPlayers);
        //         players = new player*[this->_numOfPlayers];
        //         for(int i = 0; i < this->_numOfPlayers; i++) {
        //             players[i] = nullptr;
        //         }
        //     } else {
        //         throw invalid_argument("uncorrect number of players");
        //     }
        // } else if(current == "p1") {
        //     if(currentPlayer == 0) {
        //         currentPlayer++;
        //         create_player(players, currentPlayer, vec[1], computer_players, human_players);
        //     } else {
        //         throw invalid_argument("Invalid line 5");
        //     }
        // } else if(current == "p2") {
        //     if (currentPlayer == 1) {
        //         currentPlayer++;
        //         create_player(players, currentPlayer, vec[1], computer_players, human_players);
        //     } else {
        //         throw invalid_argument("invalid line 6");
        //     }
        // } else if(current == "p3") {
        //     if(currentPlayer == 2) {
        //         currentPlayer++;
        //         create_player(players, currentPlayer, vec[1], computer_players, human_players);
        //     } else {
        //         throw invalid_argument("invalid line 7");
        //     }
        // } else if(current == "p4") {
        //     if(currentPlayer == 3) {
        //         currentPlayer++;
        //         create_player(players, currentPlayer, vec[1], computer_players, human_players);
        //     } else {
        //         throw invalid_argument("invalid line 8");
        //     }
        // } else if(current == "soldiers") {
        //     this->_numOfSoldiers = stoi(vec[1]);
        //     if(this->_numOfSoldiers <= 0) {
        //         throw invalid_argument("invalid num of soldiers");
        //     }
        // } else if(current == "normal") {
        //     Point2d* location = locationToPoint(vec[1]);
        //     Weapon* weapon_name = getWeapon(vec[2]);
        //     string army_name = "army:" + to_string(currentPlayer);
        //     NormalSoldier* newN = NormalSoldier(*location, weapon_name, army_name);
        //     if(currentPlayer > 0) {
        //         players[currentPlayer - 1]->setNormalSoldier(*newN); //add
        //     }
        //     game->getArea().addSoldier(*newN); //change
        // } else if(current == "sniper") {
        //     Point2d* location = locationToPoint(vec[1]);
        //     Weapon* weapon_name = getWeapon(vec[2]);
        //     string army_name = "army:" + to_string(currentPlayer + 1);
        //     SniperSoldier* newS = new SniperSoldier(*location, weapon_name, army_name);
        //     if(currentPlayer > 0) {
        //         players[currentPlayer - 1]->setNewSniper(*newS);
        //     }
        //     game->getMap().addSoldier(*newS);
        // } else if(current == "paramedic") {
        //     Point2d* location = locationToPoint(vec[1]);
        //     string army_name = "army:" + to_string(currentPlayer + 1);
        //     ParamedicSoldier* newP = new ParamedicSoldier(*location, nullptr, army_name); 
        //     if(currentPlayer > 0) {
        //         players[currentPlayer - 1]->setNewParamedic(*newP);
        //     }
        //     game->getMap().addSoldier(*newP);
        // } else if(current == "Armor") {
        //     Point2d* location = locationToPoint(vec[3]);
        //     Armor* armor_name = getArmor(vec[1], vec[2]);
        //     game->getMap().addArmor(*location, *armor_name);
        // } else if(current == "weapon") {
        //     Point2d* location = locationToPoint(vec[2]);
        //     Weapon* weapon_name = getWeapon(vec[1]);
        //     game->getMap().addWeapon(*location,*weapon_name);
        // }else if(current == "solid") {
        //     Solid* solid = new Solid(*locationToPoint(vec[4]), vec[1], stoi(vec[2]), stoi(vec[3]));
        //     game->getMap().addSolid(*solid);
        // } else {
        //     throw invalid_argument("invalid line");
        // }
    }
}

void FileReader::create_player(Player**& players, int& currentPlayer, string type, size_t& computer_players, size_t& human_players) {
    if(type == "computer") {
        players[currentPlayer] = new Player(PlayerTypes::computer, _numOfSoldiers);
        computer_players++;
    } else if(Player == "human") {
        players[currentPlayer] = new Player(PlayerTypes::human, _numOfSoldiers);
        human_players++;
    } else {
        throw invalid_argument("unknown type of player");
    }
}

Weapons* FileReader::getWeapon(string type) {
    if(type == "M16") {
        return new M16();
    } else if(type == "Missile") {
        return new Missile();
    } else if(type == "UZI") {
        return new UZI();
    } else {
        throw invalid_argument("unknown weapon");
    }
}

Armor* FileReader::getArmor(string type, string power) {
    if(type == "ShieldArmor") {
        ShieldArmor* s = new ShieldArmor(stod(power));
        return s;
    } else if(type == "BodyArmor") {
        BodyArmor* b = new BodyArmor(stod(power));
        return b;
    } else {
        throw invalid_argument("unknown armor");
    }
}

Point2d* FileReader::locationToPoint(string location) const {
    size_t space = location.find(' ');
    double p1 = stoi(location.substr(1, space - 1));
    double p2 = stoi(location.substr(space, location.length() - space));
    return new Point2d(p1, p2);
}