#include <iostream>

using namespace std;
/*Ingresar la nota acumulada y examen, luego
obtener la nota final y ajustarla a 60 si se
encuentra entre 57-59 a 60 , presentar la nota
y el estado si es aprobado o reprobado. */

int main()
{
    cout <<"ingresar nota de acumulada";
    cin>> nota;
    cout<<"ingresar nota examen";
    cin>>notae;
    notaf=nota+notae;
    if((notaf>=57) and (notaf>=59))
    {
        notaf=60;
        cout<<notaf<< "aprobado";
    }
    else if ((nota>=0)and(notaf<=56))
    {notaf=notaf;
    cout<<notaf<<"reprobado";
    } else
    {
    cout<<notaf<<"aprobado";
    }

    }
    }

    return 0;
}
