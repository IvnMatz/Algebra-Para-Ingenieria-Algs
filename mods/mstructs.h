#ifndef MSTRUCTS
#define MSTRUCTS

#include <iostream>
#include <array>
using namespace std;

struct ProductoPunto{
    string vectortxt;
    float prodPunto;
    float CosAng;
    float Angulo;
}

struct ProductoCruz{
    string vectortxt;
    array<int, 3> vectorCruz;
    array<int, 3> vectorCom;
    string vectorComtxt;

    float AreaParalelogramo = 0;
    float AreaTriangulo = 0;
};



#endif