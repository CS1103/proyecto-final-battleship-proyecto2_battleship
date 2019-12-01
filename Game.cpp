//
// Created by lica-pc on 11/25/19.
//

#include "Game.h"
#include "Ship.h"


void Game::setsize() {
    int tamano = 10;

    size = tamano;
}

int Game::getsize() {
    return size;
}

void Game::createtable()
{
    for (size_t i = 0; i < size; i++)
    {
        vector<casilla> vectorTemporal;
        for (size_t j = 0; j < size; j++)
        {
            casilla casillaTemporal; 
            vectorTemporal.push_back(casillaTemporal);
        }
        tableroJugador.push_back(vectorTemporal); 
    }
    
}

void Game::printplayer()
{
    for (int i = 0; i < size; ++i) {

        for (int j = 0; j < size; ++j) {

            cout << setw(2) << tableroJugador[i][j].getChar();
        }
        cout << endl;
    }
}


void Game::settable() {

    P1AircraftCarrier.setshipP1(tableroJugador, size);
    printplayer();

    P1BattleCruiser.setshipP1(tableroJugador, size);

    printplayer();

    P1BattleCruiser1.setshipP1(tableroJugador, size);

    printplayer();

    P1Submarine.setshipP1(tableroJugador, size);

    printplayer();

    P1Submarine1.setshipP1(tableroJugador, size);

    printplayer();

    P1Submarine2.setshipP1(tableroJugador, size);

    printplayer();

    P1Torpedo.setshipP1(tableroJugador, size);

    printplayer();

    P1Torpedo1.setshipP1(tableroJugador, size);

    printplayer();

    P1Torpedo2.setshipP1(tableroJugador, size);

    printplayer();

    P1Torpedo3.setshipP1(tableroJugador, size);

    printplayer();
}


int Game::computerturn(int counter,std::string file)
{
    int myToken = 123;

    std::fstream out(file, std::ios::out);



    int x = rand()%size;

    int y = rand()%size;

    char X = x + 65;

    out << "TOKEN="<<myToken<< endl;
    out << "ATTACK=" <<X<<y<<endl;


    if(tableroJugador[y][x].isAttacked()) computerturn(counter, "../attack.out");

    else
    {

        if (tableroJugador[y][x].isOccupied()){

            cout << "P2 ha acertado" << endl;

            out << "MESSAGE=DAMAGED"<<endl;

            tableroJugador[y][x].attackHit();

            printplayer();

            counter++;


            computerdoubleturn(counter, x, y, "../attack.out");
        }

        else

        {
            if (!tableroJugador[y][x].isOccupied())
            {

                cout << "P2 fallo, es turno de P1" << endl;

                out << "MESSAGE=FAILED"<<endl;

                tableroJugador[y][x].attackMiss();
            }
        }
    }

    return counter;

}

int Game::computerdoubleturn(int counter, int x, int y, std::string file)
{
    int cx = x;

    char X = x + 65;

    int myToken = 123;

    int cy = y;

    std::fstream out(file, std::ios::out);

    out << "TOKEN="<<myToken<< endl;
    out << "ATTACK=" <<X<<y<<endl;


    int variable = rand()%4;

    if (variable == 0) cx++;

    else
    {
        if (variable == 1) cx -= 1;

        else
        {
            if (variable == 2) cy++;

            else cy -= 1;

        }
    }

    if (cx >= size || cx < 0 || cy >= size || cy < 0) computerdoubleturn(counter, x, y, "../attack.out");

    if(tableroJugador[cy][cx].isAttacked()) computerturn(counter, "../attack.out");

    else

    {

        if (tableroJugador[cy][cx].isOccupied()){

            cout << "P2 ha acertado" << endl;

            out << "MESSAGE=DAMAGED"<<endl;

            tableroJugador[cy][cx].attackHit();

            printplayer();

            counter++;

            computerdoubleturn(counter, cx, cy, "../attack.out");

        }

        else

        {
            if (!tableroJugador[cy][cx].isOccupied())

            {

                out << "MESSAGE=FAILED"<<endl;

                tableroJugador[cy][cx].attackMiss();
            }
        }

    }

    return counter;

}
