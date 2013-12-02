#include <iostream>

using namespace std;
/*
Ingresar 10 numeros , al final presentar cuantos numeros fueron divisibles entre 5,
el promedio de los divisibles entre 5 y eel numero mayor de todos los numero
*/
int main()
{ int Numeros, Numdiv5, promedio, nummayor,suma;
nummayor=0;
Numdiv5=0;
suma=0;

    for (int i=0;i<=10; i++)
    {
        cout<<"Ingrese un Numero...:";
        cin>> Numeros;

        if(Numeros%5==0)
            {
                suma+=Numeros;
                Numdiv5++;
            }
        if(Numeros>nummayor)
            nummayor=Numeros;


    }
    promedio=suma/Numdiv5;

    cout<<"Numeros Divisibles entre 5..."<<Numdiv5<<"\n";
    cout<<"Promedio de Numeros Divisibles entre 5..."<<promedio<<"\n";
    cout<<"El Numero mayor es..."<<nummayor<<"\n";
    return 0;

}
