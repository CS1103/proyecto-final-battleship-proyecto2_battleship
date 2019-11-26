//
// Created by Jeronimo on 2019-11-26.
//

#ifndef PRUEBA2_INTELIGENCIA_H
#define PRUEBA2_COMPUTERGAME_H

#include "Ship.h"
#include "Game.h"

class ComputerGame{

private:

    string **computerboard;

    string **referenceboard;

    int size;

    Ship computerbattleship = Ship(4, 0, "Battleship");

    Ship computercruiser = Ship(3, 0, "Cruiser");

    Ship computercruiser1 = Ship(3, 0, "Cruiser");

    Ship computerdestroyer = Ship(2, 0, "Destroyer");

    Ship computerdestroyer1 = Ship(2, 0, "Destroyer");

    Ship computerdestroyer2 = Ship(2, 0, "Destroyer");

    Ship computersubmarine = Ship(1, 0, "Submarine");

    Ship computersubmarine1 = Ship(1, 0, "Submarine");

public:

    void setsize(int tamano);

    void createtable();

    void printcomputer();

    void printreference();

    void settable();

    int playerturn(int counter);

};



#endif //PRUEBA2_INTELIGENCIA_H
