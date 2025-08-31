#ifndef ARROWLIB
#define ARROWLIB

#include <iostream> 
#include "arrowlib.h"
using namespace std;

//  Up or Down Arrow
int arrow(char input, int op, int max, char Up = 'w', char Down = 's'){
	if(input == Up){
		if(op > 1){
			op = op-1;
		}
		else{
			op=max;
		}
	}
	if(input==Down){
		if(op < max){
			op = op+1;
		}
		else{op = 1;}
	}
	return(op);
}

// Draw Arrow
string DrawArrow(int opcY, int y, int opcX=0 , int x=0){
	if(opcY == y && opcX == x){
		return(">> ");
	}
	else{
		return("   ");
	}
}

#endif
