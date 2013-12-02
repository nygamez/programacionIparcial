#include <iostream>

using namespace std;
/*
Ingresar el nombre del empleado, las horas trabajadas,
luego determinar las horas normales que son las primeras 40
y las extras que son las mayoeres a 40.
debera de obtener pago por por hora usando el turno, luego un bono,
el pago bruto que son la suma de los pagos normales y extras. ihss y total a pagar

turno pn  pe
1     100   130
2     135   140
3     140   138

bono si el empleado es de turno 1 y trabajo mas de 45 horas el bono es de 300 y sino es de 100
para calcular el seguro el pago bruto mayor a 7000 es 245 y si no el pago bruto es 3.5%
*/
int main()
{char NombreEmpleado[30];
int HorasTrabajadas, Turno, HorasNormales, HorasExtras, PN, PE, Bono;
double IHSS, PB, TP;

    cout << "Ingresar el Nombre del Empleado...:";
        cin.getline(NombreEmpleado,30);

    cout << "Ingresar las Horas Trabajadas...:";
        cin >> HorasTrabajadas;

     cout << "Ingresar Turno...:";
        cin >> Turno;

    if (HorasTrabajadas>40)
    {
        HorasNormales=40;
            HorasExtras=HorasTrabajadas-40;
    }
    else
    {
        HorasNormales=HorasTrabajadas;
            HorasExtras=0;
    }

    cout<<"Horas Normales...:"<<HorasNormales<<"\n";
    cout<<"Horas Extras...:"<<HorasExtras<<"\n";

    if (Turno==1)
    {
        PN=100*HorasNormales;
        PE=130*HorasExtras;
    }
    else if (Turno==2)
        {
            PN=135*HorasNormales;
            PE=140*HorasExtras;
        }
    else if (Turno==3)
        {
            PN=140*HorasNormales;
            PE=138*HorasExtras;
        }
    else
    {
        PN=0;
        PE=0;
    }

    if ((Turno==1) and (HorasTrabajadas>45))
    {
        Bono=300;
    }
    else
    {
        Bono=100;
    }

    PB=PN+PE+Bono;


    if (PB>7000)
    {
        IHSS=245;
    }
    else
    {
        IHSS=(PB*0.035);
    }

    TP=PB-IHSS;

    cout<<"Pago Normal...:"<<PN<<"\n";
    cout<<"Pago Extra...:"<<PE<<"\n";
    cout<<"Bono...:"<<Bono<<"\n";
    cout<<"Pago Bruto...:"<<PB<<"\n";
    cout<<"IHSS...:"<<IHSS<<"\n";
    cout<<"Total a Pagar...:"<<TP<<"\n";

    return 0;
}
