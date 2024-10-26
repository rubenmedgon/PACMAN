#include <iostream>
#include <TazoDorado.hpp>

using namespace std;

int main(int argc, char const *argv[])
{
    // int entero=0;
    // bool booleano=true;
    // char letra='A';
    // float decimal=0.5;

    // cout<<"Tamaño Entero: "<<sizeof(entero)<<endl;
    // cout<<"Tamaño Booleano: "<<sizeof(booleano)<<endl;
    // cout<<"Tamaño Letra: "<<sizeof(letra)<<endl;
    // cout<<"Tamaño Decimal: "<<sizeof(decimal)<<endl;
    // cout<<"Tamaño Tazo: "<<sizeof(TazoDorado)<<endl;
    // cout<<endl;

    // TazoDorado tazo;
    // TazoDorado tazo2;
    // cout<<"Direccion Tazo1: "<< &tazo <<endl;
    // cout<<"Direccion Tazo2: "<< &tazo2 <<endl;

    // cout<<endl;

    // TazoDorado tazos[20];
    // for (size_t i = 0; i < 20; i++)
    // {
    //     cout << "Direccion Tazo" << i << " : " << &tazos[i] << endl;
    // }
    
    TazoDorado* direccion;
    direccion = (TazoDorado *) malloc(sizeof(TazoDorado));
    direccion->Inicializar();
    cout << "Valor en direccion: " << direccion->Flotando() << endl;
    // cout << "Direccion de direccion: " << &direccion << endl;
    // cout << "Direccion dinamica0: " << direccion << endl;
    // cout << "Direccion dinamica1: " << direccion + 1 << endl;
    
    
    

// C++ -----
    TazoDorado *direccion2;
    direccion2 = new TazoDorado();
    cout << "Valor de direccion2: " << direccion2->Flotando() << endl;

    return 0;
}

//Cntrl + kc comentar
//Cntrl + ku descomentar
