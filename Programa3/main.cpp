#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;
/*
Ingresar la nota examen y la nota acumulada en base
a 100.
la nota examen vale 70% y la nota acumulada 30%

          c  caracter
          d  decimal
          f  numero de punto flotante (float)
          lf numero de punto flotante (double)
          s  cadena de caracteres (string)
*/

int main()
{   double ne,na,nf
    printf("Ingresar nota examen ... ");
    scanf("%lf",&ne);

    printf("Ingresar nota acumulada ... ");
    scanf("%lf",&na);

    nf= (na*0.3) + (ne*0.7);
    Printf("Nota final %lf \n",nf);
    system("PAUSE");

    return 0;
}
