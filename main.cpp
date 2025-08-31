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
        opt = arrow(arr, opt, 8);
        system("cls");
        cout<<"-------- Calculadora Algebra I -----------\n";
        cout<<DrawArrow(opt, 1)<<"Memoria\n";
        cout<<DrawArrow(opt, 2)<<"Modulo de un vector || v ||\n";
        cout<<DrawArrow(opt, 3)<<"Vector unitario en la direccion Uv\n";
        cout<<DrawArrow(opt, 4)<<"Suma-Resta de vectores\n";
        cout<<DrawArrow(opt, 5)<<"Producto punto v.w \n";
        cout<<DrawArrow(opt, 6)<<"Producto cruz vxw \n";
        cout<<DrawArrow(opt, 7)<<"Producto triple escalar u.vxw \n";
        cout<<DrawArrow(opt, 8)<<"Salir\n";
        arr = getch();
    }
    switch(opt){

        case 5:{
            system("cls");
            cout<<"---- Producto Punto ---\n";
            string mode;
            while(true){
                cout << "Calcular dados 2 vectores (1) o dadas 2 magnitudes y un angulo (2)? : ";
                getline(cin, mode);
                if (mode == "1" || mode == "2") break;
            }
            if(mode == "1"){
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
                ProductoPunto resultado;
                resultado = prodPunto1(v, w);

                cout<<"\n------ Resultados------\n";
                cout<<"V = <"<<v[0]<<", "<<v[1]<<", "<<v[2]<<">\n";
                cout<<"W = <"<<w[0]<<", "<<w[1]<<", "<<w[2]<<">\n";
                cout<<"V.W = "<<resultado.prodPunto<<"\n";
                cout<<"|| V || = "<<"sqrt("<<pow(resultado.modV, 2)<<") = "<<resultado.modV<<"\n";
                cout<<"|| W || = "<<"sqrt("<<pow(resultado.modW, 2)<<") = "<<resultado.modW<<"\n";
                cout<<"Cos O = ("<<resultado.prodPunto<<") / (sqrt("<<pow(resultado.modV, 2)<<"))(sqrt("<<pow(resultado.modW, 2)<<")) = "<<resultado.CosAng<<"\n";
                cout<<" O = "<<resultado.Angulo<<" grados\n";
                cout<<" O (rad) = "<<resultado.AngRad<<" rad\n";
                 
            }
            getche();
            break;
        } 
        
        case 6: {
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

        case 8: {
            loop = false;
            break;
        }
        
    }



    }

}