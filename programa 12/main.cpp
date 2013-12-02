#include <iostream>

using namespace std;
/*
Ingresar 5 numeros, presentar el promedio, determinar los numeros pares e impares y determinar cual es el mañor
*/
int main()
{ int numero, Npares, Nimpares, Nmayor, contador, Nmenor;
    int sumap, sumai;
double promimpares, prompares;
sumap=0;
sumai=0;
Npares=0;
Nimpares=0;
Nmayor=0;
contador=0;
Nmenor=100000;
while (contador<5)
{
    cout<<"Ingrese un numero..";
    cin>> numero;


    if((numero % 2)==0)
    {
        sumap+=numero;//sumap=sumap+numero
        Npares++;
    }
    else
    {
        sumai+=numero;
        Nimpares++;
    }
    contador++;

    if (numero>Nmayor)
    {
        Nmayor=numero;
    }
    if(numero<Nmenor)
    {
        Nmenor=numero;
    }
} //fin de ciclo

cout<<"Numero Mayor es...:"<<Nmayor<<"\n";
cout<<"Numero Menor es...:"<<Nmenor<<"\n";

if(sumap!=0)
{
    prompares=sumap/Npares;
}
else
{
    prompares=0;
}
if(sumai!=0)
{
    promimpares=sumai/Nimpares;
}
else
{
    promimpares=0;
}


    cout<<"Promedio pares  "<<prompares<<"\n";
    cout<<"Promedio impares  "<<promimpares<<"\n";
    return 0;
}
