#include <iostream>

using namespace std;
/*
Ingresar 5 numeros y contar cuantos positivos, negativos y ceros.
*/
int main()
{ int numero, cpositivos, cceros, cnegativos, contador;
    cpositivos= 0; cnegativos= 0; cceros= 0;
    contador=0;
    while (contador<5)
    {
        cout<<"Ingresar un numero ";
        cin>> numero;

        if (numero>0)
        {
            cpositivos++;
        }
        else if (numero<0)
        {
            cnegativos++;
        }
        else
        {
            cceros++;
        }
        contador++;
    }
    cout<<"Contador de Positivos..:"<<cpositivos <<"\n";
    cout<<"Contador de Negativos..:"<<cnegativos <<"\n";
    cout<<"Contador de Ceros..:"<<cceros <<"\n";
    return 0;
}
