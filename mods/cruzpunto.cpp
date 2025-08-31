#include <iostream>
#include <array>
#include <string>
#include <cmath>

#include "cruzpunto.h"
#include "mstructs.h"
using namespace std;

ProductoCruz prodCruz( int v[3], int w[3] ){
    /* 
     vxw =  | i   -j   k    |
            | v1  v2   v3   |
            | w1  w2   w3   |
    */
   /*
    vxw =   | v2 v3 | i  - | v1  v3 | j + | v1  v2 | k
            | w2 w3 |      | w1  w3 |     | w1  w2 |
   */

   array<int, 3> vectorCruz;
   array<int, 3> vectorCom;
   vectorCruz[0] = (v[1]*w[2]) - (w[1] * v[2]);
   vectorCom[0] = ( w[1] * v[2] ) - ( v[1]*w[2] ); 

   vectorCruz[1] = ( ( v[0] * w[2] ) - ( v[2] * w[0] ) ) * (-1);
   vectorCom[1] = ( ( v[2] * w[0] ) - ( v[0] * w[2] ) ) * (-1);

   vectorCruz[2] = ( ( v[0]*w[1] ) - (v[1] * w[0]) );
   vectorCom[2] = ( (v[1] * w[0]) - ( v[0]*w[1] ) );

   float Apararelogramo;
   Apararelogramo = ( pow(vectorCruz[0], 2) ) + ( pow(vectorCruz[1], 2) ) + ( pow(vectorCruz[2], 2) );
   /*if( sqrt(Apararelogramo) == floor(sqrt(Apararelogramo) ){
        Apararelogramo = sqrt(Apararelogramo);
   }*/


   ProductoCruz VCruz;
   VCruz.vectorCruz = vectorCruz;
   VCruz.vectorCom = vectorCom;
   VCruz.vectortxt = to_string(vectorCruz[0]) + " i + ( " + to_string(vectorCruz[1]) + " ) j + ( " + to_string(vectorCruz[2]) + " ) k";
   VCruz.vectorComtxt = to_string(vectorCom[0]) + " i + ( " + to_string(vectorCom[1]) + " ) j + ( " + to_string(vectorCom[2]) + " ) k";
   VCruz.AreaParalelogramo = Apararelogramo;

   return VCruz;

}