//
// Created by lica-pc on 11/25/19.
//

#include "ComputerGame.h"
int aciertos=0;
void ComputerGame::setsize(int tamano) {size = tamano;}

void ComputerGame::createtable()
{
    for (size_t i = 0; i < size; i++)
    {
        vector<casilla> vectorTemporal;
        for (size_t j = 0; j < size; j++)
        {
            casilla casillaTemporal; 
            vectorTemporal.push_back(casillaTemporal);
        }
        tableroPC.push_back(vectorTemporal); 
        tableroRef.push_back(vectorTemporal); 
    }
}

void ComputerGame::printcomputer()
{

    for (int i = 0; i < size; ++i) {

        for (int j = 0; j < size; ++j) {

            cout << setw(2) << tableroPC[i][j].getChar();
        }

        cout << endl;
    }
}


void ComputerGame::printreference()
{
    for (int i = 0; i < size; ++i) {

        for (int j = 0; j < size; ++j) {

            cout << setw(2) <<tableroRef[i][j].getChar();
        }

        cout << endl;

    }
}

void ComputerGame::settable()
{
    P2aircraftCarrier.setshipP2(tableroPC, size, "../placeFleet.out");

    P2battleCruiser.setshipP2(tableroPC, size, "../placeFleet.out");

    P2battleCruiser1.setshipP2(tableroPC, size, "../placeFleet.out");

    P2Submarine.setshipP2(tableroPC, size,"../placeFleet.out");

    P2Submarine1.setshipP2(tableroPC, size, "../placeFleet.out");

    P2Submarine2.setshipP2(tableroPC, size, "../placeFleet.out");

    P2Torpedo.setshipP2(tableroPC, size, "../placeFleet.out");

    P2Torpedo1.setshipP2(tableroPC, size, "../placeFleet1.out");

    P2Torpedo2.setshipP2(tableroPC, size, "../placeFleet2.out");

    P2Torpedo3.setshipP2(tableroPC, size, "../placeFleet.out");


}

int ComputerGame::playerturn(int counter)
{
    //if token == myToken
    pair<int,int>vattack;
    vattack=parse_attack();
    printreference();
    cout<<endl;

    int x, y;

    x=vattack.first-1;
    y=vattack.second-1;
    cout<<x<<" "<<y<<endl;

    override_content_attack();
    /*

    cout << "Inserte la coordenada X de su ataque" << endl;

    cin >> x;

    cout << "Inserte la coordenada Y de su ataque" << endl;

    cin >> y;
*/
    if (x >= size || y >= size)

    {
        cout << "No puedes disparar ahi" << endl;

        playerturn(counter);
    }

    else

    {
        if (tableroRef[y][x].isAttacked()) 
        {

            //cout << "Ya has disparado aqui." << endl;

            playerturn(counter);

        }
        else
        {

            if (tableroPC[y][x].isOccupied()){

                cout << "Has acertado" << endl;

                tableroPC[y][x].attackHit();

                tableroRef[y][x].attackHit();

                counter++;

                playerturn(counter);

            }
            else if(aciertos==10){
                cout<<"P1 gano";
                exit(0);
            }
            else
            {
                if (!tableroPC[y][x].isOccupied())
                {
                    cout << "Has fallado" << endl;

                    tableroRef[y][x].attackMiss();
                }

                else
                {
                    if (tableroRef[y][x].isAttacked()) {

                        cout << "Ya has disparado aqui." << endl;

                        playerturn(counter);

                    }

                }

            }
        }

    }

    return counter;

}


