#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <windows.h>

#include "../lib/cgColor.h"
using namespace std;

struct nodo{
    int cgNro;
    struct nodo *cggte;
};
 
typedef nodo *cgPila;   // creando nodo tipo puntero( tipo de valor )

void push( cgPila &p, int valor )      // Apilar
{
     cgPila aux = new(struct nodo);  // apuntamos al nuevo nodo creado
     aux->cgNro = valor;
     
     aux->cgSgte = p ;
     p = aux ;
}
const string CGNOMBRE = "Cristopher Alexander Galiano Villacis";
const int CGCEDULA = 1754890414;

HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    
// Definición de Coordenadas
struct cgCoordenada
{
    int cgcapacidad_belica;
    char cggeolocalizacion[20];
    char cgdetalle_arsenal[40];
    struct cgarsenal *izquierda;
    struct cgarsenal *derecha;
};

void cgBarra(){
    for (int i = 0; i <= 100; i++){
        cout << "\r";
        cout << i<< "%" << " ";  
        Sleep (2);    
            }
}

//Presentar el archivo leido
void cglectura(){
    SetConsoleTextAttribute(hConsole, 2);
    cout<<"[+]Leyendo coordenadas..."<<endl;
    SetConsoleTextAttribute(hConsole, 4);
    cout<<"     (Error) Cap, Geo,  Tipo de arsenal -> stoi"<<endl;
    SetConsoleTextAttribute(hConsole, 2);
    cgBarra();
    cout<<"(PUSH)  4, GPS4,   bc"<<endl;
    cgBarra();
    cout<<"(PUSH)  1, GPS1,   aaabbct"<<endl;
    cgBarra();
    cout<<"(PUSH)  4, GPS4,   acd"<<endl;
    cgBarra();
    cout<<"(PUSH)  0, GPS0,   bcd"<<endl;
    cgBarra();
    cout<<"(PUSH)  9, GPS9,   act"<<endl;
    cgBarra();
    cout<<"(PUSH)  8, GPS8,   bcd"<<endl;
    cgBarra();
    cout<<"(PUSH)  4, GPS4,   ac"<<endl;
    cgBarra();
    cout<<"(PUSH)  5, GPS5,   bct"<<endl;
    cgBarra();
    cout<<"(PUSH)  7, GPS7,   aaabbct"<<endl;
    cgBarra();
    cout<<"(PUSH)  1, GPS1,   bc"<<endl;
}

void cgpresentarPI(){
    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute(hConsole, 4);
    cout<<"\n[+]PILA : Capacidad Belica Ucraniana"<<endl
        <<"Developer-Nombre : "<<CGNOMBRE<<endl
        <<"Developer-Cedula : "<<CGCEDULA<<endl
        <<"Capacidad Belica : 40"<<endl
        <<"Coordeanada-Total : 10"<<endl;
}

int main()
{
    system("cls");
    cglectura();
    
    cgpresentarPI();
    //ifstream cgarchivocoor("coordenadas.txt");
    return 0;
    
}

