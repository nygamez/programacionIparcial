#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
/*
Ingresar el nombre del alumno, luego debemos de pedir
las tres notas parciales usando un ciclo, presentar el promedio, la
nota mayor de los tres parciales.
Preguntar si desea continuar, al fimal presentar el nombre del
alumno con la mejor nota.
*/
int main()
{ char nombre [30];
char resp;
int nota, promedio, notamax, alumnomax,suma;
char nombreMayor[30];
char estado[30];

alumnomax=0;
do
{
    cout<<"Nombre de Alumno...";
    cin.getline (nombre, 30);
suma=0;
notamax=0;
    for(int i=1;i<=3;i++)
    {
        cout<<"Ingresar el parcial.." <<i<<"..:";
        cin>>nota;
        suma+=nota;
        if(nota>notamax)
        {

        notamax=nota;
        }
    }

    promedio=suma/3;
    if (promedio>=60)
    {
        strcpy(estado,"Aprobado");

    }
    else
    {
         strcpy(estado,"Reprobado");
    }
    cout<<"Promedio del alumno..:"<<promedio<<"\n";
    cout<<"Nota Maxima es..:"<<notamax<<"\n";
 cout<<"el estado es..:"<<estado<<"\n";

if(alumnomax<promedio)
{
    alumnomax=promedio;
    strcpy(nombreMayor,nombre);
}

    do
    {
        cout<<"Desea Continuar...:";
        cin.get(resp);

    }while ((resp!='n')and (resp!='s'));
    _flushall();
}while(resp!='n');
cout<<"Nombre del alumno con la mejor nota "<<nombreMayor;
cout<<" con la nota"<<alumnomax<<"\n";

    return 0;
}
