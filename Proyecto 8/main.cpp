#include <iostream>

using namespace std;

int main()
{

    int mayor=0;
    int numero=0;
    int primero=0;
    int segundo=0;
    int tercero=0;
    int c=0;

    while (c<10);
    {
        cout <<"ingrese un numero...:";
        cin>>numero;
    if ((numero>=1)&& (numero<=50)){
        primero++;
        if(numero>mayor){
            mayor = numero;
        }
    }
    else if ((numero>=51)&& (numero<80)){
        segundo++;
        if (numero>mayor){
            mayor = numero;
        }

        }
        else {
            tercero++;
            if (numero>mayor){
                mayor = numero;
            }
        }
        c++;
    }
    cout<<"hubieron"<<primero<< "numero entre 1 y 50.\n";
    cout<<"hubieron"<<segundo<< "numero entre 51 y 80.\n";
    cout<<"hubieron"<<tercero<< "numero mayores que 80.\n";
    cout<<"El numero mayor fue: "<<mayor;
    }

    return 0;


