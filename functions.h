//
// Created by Ivan Mamani on 30/11/2019.
//

#ifndef PROYECTO_FINAL_BATTLESHIP_PROYECTO2_BATTLESHIP_FUNCTIONS_H
#define PROYECTO_FINAL_BATTLESHIP_PROYECTO2_BATTLESHIP_FUNCTIONS_H


#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <utility>
#include <ctime>
#include <random>

using namespace std;

pair<pair<int,int>,char> parse_place_fleet();
string parse_read_name();
void parse_handshake();
pair<int,int> parse_attack();
void override_content_ship();
void override_content_attack();
void override_content_order_ship();

#endif //PROYECTO_FINAL_BATTLESHIP_PROYECTO2_BATTLESHIP_FUNCTIONS_H
