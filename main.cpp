#include <iostream>
#include <conio.h>
#include <cmath>
#include <string>
#include <sstream>
#include "arrowlib.h"
#include "mods/cruzpunto.h"
#include "mods/mstructs.h"
using namespace std;

int main(){
    bool loop = true;
    char arr;
    int opt = 1;

    while(loop){
    arr = 'a';
    

    while(arr!='q'){
        opt = arrow(arr, opt, 7);
        system("cls");
        cout<<"-------- Calculadora Algebra I -----------\n";
        cout<<DrawArrow(opt, 1)<<"Memoria\n";
        cout<<DrawArrow(opt, 2)<<"Módulo de un vector || v ||\n";
        cout<<DrawArrow(opt, 3)<<"Vector unitario en la dirección Uv\n";
        cout<<DrawArrow(opt, 4)<<"Suma-Resta de vectores\n";
        cout<<DrawArrow(opt, 5)<<"Producto punto v.w \n";
        cout<<DrawArrow(opt, 6)<<"Producto cruz vxw \n";
        cout<<DrawArrow(opt, 7)<<"Producto triple escalar u.vxw \n";
        cout<<DrawArrow(opt, 8)<<"Salir\n";
        arr = getch();
    }
    switch(opt){
        
        case 5: {
            system("cls");
            cout<<"---- Producto Cruz ----\n";
            int v[3], w[3];
            string vp[3], wp[3];
            string inp1, inp2;
            cout<<"Valores de V:\n";
            getline(cin, inp1);
            std::istringstream iss(inp1);
            iss >> vp[0] >> vp[1] >> vp[2] ;

            cout<<"Valores de W: \n";
            getline(cin, inp2);
            std::istringstream isss(inp2);
            isss >> wp[0] >> wp[1] >> wp[2] ;
            for(int i=0; i<3; i++){
                v[i] = stoi(vp[i]);
                w[i] = stoi(wp[i]);
            }
            
            ProductoCruz resultado;
            resultado = prodCruz(v, w);
            cout<<"\n----Resultados------\n";
            cout<<"V = < "<<v[0]<<", "<<v[1]<<", "<<v[2]<<">\n";
            cout<<"W = < "<<w[0]<<", "<<w[1]<<", "<<w[2]<<">\n";
            cout<<"vxw: "<<resultado.vectortxt<<"\nwxv: "<<resultado.vectorComtxt<<"\n";
            cout<<"VxW= <"<<resultado.vectorCruz[0]<<", "<<resultado.vectorCruz[1]<<", "<<resultado.vectorCruz[2]<<">\n";
            cout<<"WxV= <"<<resultado.vectorCom[0]<<", "<<resultado.vectorCom[1]<<", "<<resultado.vectorCom[2]<<">\n";
            cout<<"Area del Paralelogramo (Ap) = sqrt("<<resultado.AreaParalelogramo<<")";
            if(sqrt(resultado.AreaParalelogramo) == floor(sqrt(resultado.AreaParalelogramo))){
                cout<<" = "<<sqrt(resultado.AreaParalelogramo)<<"\n";
            }
            
            getche();
            break;
        }

        case 7: {
            loop = false;
            break;
        }
        
    }



    }

}