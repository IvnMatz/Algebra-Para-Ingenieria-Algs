#ifndef ARROWLIB
#define ARROWLIB

#include <iostream> 
using namespace std;

//  Up or Down Arrow
int arrow(char input, int op, int max, char Up = 'w', char Down = 's');

// Draw Arrow
string DrawArrow(int opcY, int y, int opcX=0 , int x=0);

#endif
