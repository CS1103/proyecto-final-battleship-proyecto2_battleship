//
// Created by Jeronimo on 2019-11-30.
//

#ifndef PROYECTO_FINAL_BATTLESHIP_PROYECTO2_BATTLESHIP_0D3F4EC49B5D95282743751F40E8C30B1C54A835_AUXX_H
#define PROYECTO_FINAL_BATTLESHIP_PROYECTO2_BATTLESHIP_0D3F4EC49B5D95282743751F40E8C30B1C54A835_AUXX_H

#include <casilla.h>

void handShake(std::string file){

        std::string nombre = "HUASCAR";

        std::fstream out(file, std::ios::out);

        out << "HANDSHAKE=" << nombre << endl;
}

















#endif //PROYECTO_FINAL_BATTLESHIP_PROYECTO2_BATTLESHIP_0D3F4EC49B5D95282743751F40E8C30B1C54A835_AUXX_H
