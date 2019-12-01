//
// Created by Ivan Mamani on 30/11/2019.
//

#include "functions.h"

pair<pair<int,int>,char> parse_place_fleet() {
    pair<pair<int,int>,char>vset_ship;
    ifstream fileIn("set_ship.txt");
    string name,token,orientation;
    string line;
    string posxy;
    int posx;
    int posy;
    if (!fileIn)
    {
        cout<<"A error has occured, please contact support.";
    }

    getline(fileIn,line,'=');
    getline(fileIn,line);
    token=line;
    getline(fileIn,line,'-');
    getline(fileIn,line,'-');
    posxy=line;
    posx=int(posxy[0])-64;
    vset_ship.first.first=posx;
    if(posxy.size()==2){
        posy=int(posxy[1]-48);
        vset_ship.first.second=posy;
    } else{

        posy=int(posxy[1])+int(posxy[2])-87;
        vset_ship.first.second=posy;

    }
    getline(fileIn,line);
    orientation=line;
    vset_ship.second=orientation[0];


    //cout<<token<<endl<<posx<<" "<<posy<<endl<<orientation<<endl;
    fileIn.close();

    return vset_ship;
}

string parse_read_name(){
    ifstream read_name("name.txt");
    string name;
    string line;
    if (!read_name)
    {
        cout<<"A error has occured, please contact support.";
    }

    getline(read_name,line,'=');
    getline(read_name,line);
    name=line;

    //cout<<name<<endl;
    read_name.close();
    return name;
}

void parse_handshake(){
    ifstream fhanshake("handshake.txt");
    string status,token;
    string line;
    if (!fhanshake)
    {
        cout<<"A error has occured, please contact support.";
    }
    getline(fhanshake,line);
    getline(fhanshake,line,'=');
    getline(fhanshake,line);
    status=line;
    getline(fhanshake,line,'=');
    getline(fhanshake,line);
    token=line;
    cout<<status<<endl<<token<<endl;
    fhanshake.close();
}


pair<int,int> parse_attack() {
    pair<int, int>posxandy;
    ifstream fattack("attack.txt");
    string line, token, posxy;
    int posx, posy;
    if (!fattack) {
        cout << "A error has occured, please contact support.";
    }
    getline(fattack, line, '=');
    getline(fattack, line);
    token = line;
    getline(fattack, line, '=');
    getline(fattack, line,'-');
    posxy = line;
    posx= int(posxy[0])-64;
    posxandy.first=posx;
    getline(fattack, line);
    stringstream ss(line);
    ss>>posxy;
    posy=stoi(posxy);
    posxandy.second=posy;
    //cout<<token<<endl<<posxandy.first<<" "<<posxandy.second<<endl;
    fattack.close();
    return posxandy;
}


void override_content_ship(){
    int x, y,oo;
    char o;

/*
    random_device rd;

    uniform_int_distribution<int>dist1(65,74);
    uniform_int_distribution<int>dist2(1,10);
    default_random_engine generator;
    int dice_roll = dist1(generator);
    x=dist1(rd);
    y=dist2(rd);

 */
    srand(time(NULL));
    x=rand()%(75-65)+65;
    y=rand()%10+1;
    oo=rand()%2;
    if(oo==0)
        o='H';
    else
        o='V';

    ofstream fset_ship("set_ship.txt");

    if (!fset_ship) {
        cout << "A error has occured, please contact support.";
    }
    fset_ship<<"TOKEN = 123456\n";
    fset_ship<<"PLACEFLEET = A-"<<char(x)<<y<<"-"<<o;
    fset_ship.close();
}
void override_content_attack(){
    int x, y;


/*
    random_device rd;

    uniform_int_distribution<int>dist1(65,74);
    uniform_int_distribution<int>dist2(1,10);
    default_random_engine generator;
    int dice_roll = dist1(generator);
    x=dist1(rd);
    y=dist2(rd);

 */


    srand(time(NULL));
    x=rand()%(75-65)+65;
    y=rand()%10+1;

    ofstream fset_attack("attack.txt");

    if (!fset_attack) {
        cout << "A error has occured, please contact support.";
    }

    fset_attack<<"TOKEN=123456\n";
    fset_attack<<"ATTACK="<<char(x)<<"-"<<y;
    fset_attack.close();

}
void override_content_order_ship(){
    int y;
    ofstream fset_ship("set_ship.txt");

    if (!fset_ship) {
        cout << "A error has occured, please contact support.";
    }
    fset_ship<<"TOKEN = 123456\n";
    fset_ship<<"PLACEFLEET = A-"<<'A'<<y<<"-"<<'H';
    fset_ship.close();

}

