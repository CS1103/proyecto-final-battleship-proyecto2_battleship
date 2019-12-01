//
// Created by lica-pc on 11/25/19.
//

#ifndef PROYECTOBATTLESHIP_GAME_H
#define PROYECTOBATTLESHIP_GAME_H


#include "Ship.h"
#include "casilla.h"

class Game {

private:

    vector<vector<casilla>> tableroJugador; 

    string **playerboard;

    int size;

    Ship P1AircraftCarrier = Ship(4, 0, "Aircraft Carrier");

    Ship P1BattleCruiser = Ship(3, 0, "Cruiser");

    Ship P1BattleCruiser1 = Ship(3, 0, "Cruiser");

    Ship P1Submarine = Ship(2, 0, "Submarine");

    Ship P1Submarine1 = Ship(2, 0, "Submarine");

    Ship P1Submarine2 = Ship(2, 0, "Submarine");

    Ship P1Torpedo = Ship(1, 0, "Torpedo Boat");

    Ship P1Torpedo1 = Ship(1, 0, "Torpedo Boat");

    Ship P1Torpedo2 = Ship(1, 0, "Torpedo Boat");

    //Ship P1Torpedo3 = Ship(1, 0, "Torpedo Boat");

public:



    void setsize();

    int getsize();

    void createtable();

    void printplayer();

    void settable();

    int computerturn(int counter, std::string file);

    int computerdoubleturn(int counter, int x, int y, std::string file);

};



#endif //PROYECTOBATTLESHIP_GAME_H
