//
// Created by Jeronimo on 2019-11-30.
//

#ifndef PROYECTO_FINAL_BATTLESHIP_PROYECTO2_BATTLESHIP_0D3F4EC49B5D95282743751F40E8C30B1C54A835_DRIVER_H
#define PROYECTO_FINAL_BATTLESHIP_PROYECTO2_BATTLESHIP_0D3F4EC49B5D95282743751F40E8C30B1C54A835_DRIVER_H

#include "Game.h"
#include "ComputerGame.h"
#include "auxx.h"

void driver() {

    int a = 0;

    int b = 0;


    srand(time(NULL));

    Game Juego;

    ComputerGame Juego1;

    handShake("../handshake.out");

    Juego.setsize();

    Juego1.setsize(Juego.getsize());

    Juego.createtable();

    Juego1.createtable();

    cout << "Este es tu tablero, por favor, posiciona tus barcos." << endl;

    Juego.printplayer();

    Juego.settable();

    Juego1.settable();

    cout << "La computadora ha posicionado sus barcos." << endl;

    cout << "Este es tu tablero de referencia. Suerte!" << endl;



    int maxPoints = 18;

    do{a = Juego1.playerturn(a);

        b = Juego.computerturn(b, "../attack.out"); }while(a < maxPoints && b < maxPoints);

    if (a == maxPoints) {
        cout << "Ganaste";

    }


    else cout << "Perdiste";


    cout << "Fin del juego.";


}


#endif //PROYECTO_FINAL_BATTLESHIP_PROYECTO2_BATTLESHIP_0D3F4EC49B5D95282743751F40E8C30B1C54A835_DRIVER_H
