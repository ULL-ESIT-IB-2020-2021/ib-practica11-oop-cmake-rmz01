  /*
Aarón Ramírez Valencia.
ULL.
Informática básica.
Práctica 11, ejercicio 1. (fecha.cc)
*/

#include <iostream>
#include "fecha.h"

using namespace std;

int main(){
  Fecha hoy;
  hoy.SetDia(3);
  hoy.SetMes(1);
  hoy.SetAno(2021);
  hoy.Imprimir();
  
  return 0;
}   
