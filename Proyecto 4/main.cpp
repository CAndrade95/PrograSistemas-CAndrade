#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int n1,n2,suma;
int main()

{
    cout << "ingresar numero#1..:";
    cin>> n1; //scanf("equivale haber colocado "%d",&n1);
    cout << "ingresar numero#2..:";
    cin>> n2; //scanf("equivale haber colocado "%d",&n2);
    suma= n1+n2;
    cout<<"La suma final es "<<suma<< "\n";
    return 0;
}
