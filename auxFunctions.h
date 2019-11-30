//
// Created by Jeronimo on 2019-11-30.
//

#ifndef PROYECTOBATTLESHIP_AUXFUNCTIONS_H
#define PROYECTOBATTLESHIP_AUXFUNCTIONS_H

#include <fstream>
#include <iostrea>


void escritura(std::string file, std::vector<Rectangulo> tablero){ //literal mantequilla

    std::fstream out(file, std::ios::out);

    for(auto&i:tablero) //archivo out
        out<<i.accion<<' '<<i.esquina.first<<' '<<i.esquina.second<<' '<<i.alto<<' '<<i.largo<<'\n';
}





#endif //PROYECTOBATTLESHIP_AUXFUNCTIONS_H
