#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
Elaborar un programa donde ingresemos un numero. luego
pregumtar si desea,os ingresar otro numero.
al final presentar la suma de los numeros ingresados.
*/


int main()
{ int numero,suma ;
    char resp;
    suma=0;
    do
    {
        do
        {
            cout<<"Ingresar un Numero entre 1-100...:";
            cin>>numero;
        }while((numero<1) or(numero>100));  //para hacerlo con el and se hace}while((!(numero>=1) and (numero<=100)))
        suma+=numero;
        _flushall();
        do
        {
            cout<<"Desea Continuar...";
            cin.get(resp);

        }
        while((resp!='n')and (resp!='s'));
    }while(resp!='n');

    cout<<"La suma de los Numeros es: "<<suma<<"\n";
    cout<<"FINAL DE PROGRAMA";
    return 0;

}
