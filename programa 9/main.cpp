#include <iostream>

using namespace std;
/*¨Generar 10 numeros aleatorios, presentarlos en la
pantalla. Al final presentar el numero mayor y
el promedio de los 10 numeros.
Generar los numeros entre 30-80 */

int main()
{
  sand (time(0));
  int i;
  int numero, maxi=0, contar=0, suma=0,promedio;

  for (i=1;i<=10;i++)
  {
      numero =50 + rand() % (100-50);
      cout<< "valor de numero" <<i<<"es "<<numero<<"\n";
      if (numero>maxi)
      {
          maxi=numero;
      }
      contar++;
      suma+=numero; //suma = suma + numero;
      }
      promedio=suma/contador;
      cout<<"promedio "<<promedio<<"\n";
      cout
    return 0;
}
