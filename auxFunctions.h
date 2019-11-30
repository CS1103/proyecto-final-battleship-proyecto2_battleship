//
// Created by Jeronimo on 2019-11-30.
//

#ifndef PROYECTOBATTLESHIP_AUXFUNCTIONS_H
#define PROYECTOBATTLESHIP_AUXFUNCTIONS_H

#include <fstream>
#include <iostream>


std::string handShake(std::string file){   //retorna

    std::fstream out(file, std::ios::out);

    out<<"HANDSHAKE=HUASCAR"<<endl;






    //recibas un player2

   //la parte de la lectura que leemos un archivo igual y guardarlo, confirmar que los nombres sean diferentes

   return 'string player2 name';
}

std::string confHandshake(std::string file, std::string handshake) {

    if handshake != myhanshake{


                std::fstream out(file, std::ios::out);

                out << "HANDSHAKE" << endl;
                out << "STATUS=ACCEPTED" << endl;
                out << "TOKEN=123456" << endl;
                out << "SCOPE=J-10" << endl;

                //leer el accepted si si continuar
                //leer el token y guardarlo
                //leer el scope confirmar que sea un cuadrado y ponerlo en set size
        }
    else {


    }

}



void placeFleet(std::string file,int token, int x, int y){
//x = xchar; //funcion que convierte el x numerico en un character 1 es A ,4 es D , etc
    if token == tokenTemp{


                std::fstream out(file, std::ios::out);

                out << "TOKEN="<<token << endl;
                out << "PLACEFLEET"<<xchar<<y <<endl;


        }
    else {

        //TOKEN ERROR


    }}

    void confirmFleet(std::string file,int token, int tokentemp //este es el token que lees,int myToken){

    if token =! tokentemp{

                std::fstream out(file, std::ios::out);

                out << "TOKEN="<<token<<endl;
                out << "PLACEFLEET"<<endl;
                out << "STATUS=ACCEPTED"<<endl;
                out << "MESSAGE=CONTINUE"<<endl;

        }

        else {
        //token error

            std::fstream out(file, std::ios::out);

            out << "TOKEN="<<myToken<<endl;
            out << "PLACEFLEET"<<endl;
            out << "STATUS=REJECTED"<<endl;

    }

}







#endif //PROYECTOBATTLESHIP_AUXFUNCTIONS_H
