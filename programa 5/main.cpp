#include <iostream>

using namespace std;
/*
Se tiene que ingresar la nota del alumno y el programa deberá de
presentar la observacion usando la siguiente tablea:
1-59 reprobado
60-80 bueno
81-90 Muy bueno
91-100 Sobresaliente.
*/



int main()
{int nota;
cout<< "ingresar la nota del alumno...>" ;
cin >> nota;

if (nota<60)
{
    cout<<"Reprobado"<<"\n";
}

else if (nota<81)
{
    cout<<"Bueno"<<"\n";
}
else if (nota<91)
{
    cout<<"Muy Bueno"<<"\n";
}
else
{
    cout<<"exelente"<<"\n";
}
return 0;

}

