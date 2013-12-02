#include <iostream>

using namespace std;

int main()
{ int num, cifra, suma, Cmayor, Cmenor,contador,cpar, cimpar;
double Promedio;
cout<<"ingrese un numero Entero...:";
cin>>num;
suma=0;
cout<<"numero al revez..:";
Cmenor=9;
Cmayor=0;
contador=0;
cpar=0;
cimpar=0;

while (num>0)
{
    cifra=num % 10;
    cout<<cifra;
    num= num/10;
    suma+=cifra;

    if(cifra>Cmayor)

        Cmayor= cifra;

    if (cifra<Cmenor)

        Cmenor=cifra;

        if (cifra%2== 0)
            cpar++;

        else
           cimpar++;
contador++;
}
Promedio= suma/contador;

    cout<<"\n";
    cout<<"Suma de las Cifras..."<<suma<<"\n";
     cout<<"Cifra Mayor es ..."<<Cmayor<<"\n";
      cout<<"Cifra Menor es ..."<<Cmenor<<"\n";
      cout<<"El Promedio es ..."<<Promedio<<"\n";
      cout<<"cifras pares ..."<<cpar<<"\n";
      cout<<"cifras impares ..."<<cimpar<<"\n";
    return 0;
}
