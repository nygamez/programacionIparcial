#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
/*
Se tiene que ingresar un n�mero entero, que
sea par o divisible entre 5 usando un procedimiento.

Luego determinar cuantas cifras tiene el n�mero
usando un procedimiento, deber� de ingresar el n�mero generado en el
procedimiento anterior y obtener el n�mero de cifras que ser� un par�metro de
variable porque va a salir su valor  del procedimiento.

Presentar el n�mero de cifras del n�mero en
el programa principal.

Hacerlo para 5 n�meros, deber� de usar un
ciclo for , y dentro de este colocar los procedimientos y presentar los datos.
*/
int Cifras;
int Numero;
int contador;


void Ingresar (int &Numero)
{
    do
    {
        cout<<"Ingrese un Numero...:";
        cin>>Numero;
    }while ((Numero%2)or (Numero%5));
}

void calcular (int Numero,int &Cifras, int &contador)
{
    contador=0;
    while (Numero>0)
    {
        Cifras= Numero%10;
        Numero=Numero/10;
        contador++;
    }
}
void presentar(int contador)
{
    cout<<"La cifras son..."<<contador<<"\n";
}


int main()
{
    for (int i=0;i<5;i++)
    {
    Ingresar (Numero);
    calcular (Numero,Cifras,contador);
    presentar(contador);
    }
    return 0;
}
