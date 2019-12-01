//
// Created by lica-pc on 11/25/19.
//

#ifndef PROYECTOBATTLESHIP_COMPUTERGAME_H
#define PROYECTOBATTLESHIP_COMPUTERGAME_H


#include "Ship.h"
#include "Game.h"

class ComputerGame{

private:

    vector<vector<casilla>> tableroPC; 

    vector<vector<casilla>> tableroRef; 

    string **computerboard;

    string **referenceboard;

    int size;

    Ship P2aircraftCarrier = Ship(4, 0, "Battleship");

    Ship P2battleCruiser = Ship(3, 0, "Cruiser");

    Ship P2battleCruiser1 = Ship(3, 0, "Cruiser");

    Ship P2Submarine = Ship(2, 0, "Submarine");

    Ship P2Submarine1 = Ship(2, 0, "Submarine");

    Ship P2Submarine2 = Ship(2, 0, "Submarine");

    Ship P2Torpedo = Ship(1, 0, "Torpedo");

    Ship P2Torpedo1 = Ship(1, 0, "Torpedo");

    Ship P2Torpedo2 = Ship(1, 0, "Torpedo");

    Ship P2Torpedo3 = Ship(1, 0, "Torpedo");

public:

    void setsize(int tamano);

    void createtable();

    void printcomputer();

    void printreference();

    void settable();

    int playerturn(int counter);

};



#endif //PROYECTOBATTLESHIP_COMPUTERGAME_H
