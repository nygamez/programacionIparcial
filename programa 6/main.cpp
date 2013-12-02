#include <iostream>

using namespace std;
/*
Ingresar el nombre del empleado, el turno y las horas.
luego determinar el pago por hora, el pago bruto,IHSS
y el total a pagar. turno 1= 100, turno 2= 150, turno 3=190;
para el seguro si el salario es arriba de 7000 es igual a
245 y si no deducir del salario bruto es 3.5%.
*/
int main()
{ char nombre [30];
    int turno, horas, PXH;
    double IHSS, TP, PB;

    cout << "ingresar el nombre..>";
    cin.getline(nombre,30);

    cout <<"ingresar el turno 1,2,3..>";
    cin>> turno;

    cout <<"ingresar las horas..>";
    cin>> horas;

    if (turno==1)
    {
        PXH=100;
    }

    else if (turno==2)
    {
        PXH=150;
    }
    else if (turno==3)
    {
        PXH=190;
    }
    else
    {
        PXH=0;

        }
    PB= PXH*horas;
    if(PB>7000)
    {
        IHSS=245;
    }
    else
    {
        IHSS= 0.035 * PB;
    }
    TP=PB-IHSS;
    cout<<"pago por hora"<<PXH<<"\n";
    cout<<"Pago Bruto"<<PB<<"\n";
    cout<<"Seguro Social"<<IHSS<<"\n";
    cout<<"Total A Pagar"<<TP<<"\n";


    return 0;
}
