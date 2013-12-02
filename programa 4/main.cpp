#include <iostream>

using namespace std;

int main()
{ int Numero;
    cout << "Ingrese un numero...>" ;
    cin >>Numero;

    if (Numero>0)
        {
            cout<<"POSITIVO"<<"\n";
        }
    else if (Numero<0)
    {
        cout <<"NEGATIVO"<<"\n";
    }
    else
    {
        cout<<"CERO"<<"\n";
    }
    return 0;
}
