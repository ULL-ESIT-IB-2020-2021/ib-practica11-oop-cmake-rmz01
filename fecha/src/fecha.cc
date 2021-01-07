/*
Aarón Ramírez Valencia.
ULL.
Informática básica.
Práctica 11, ejercicio 1. (fecha.cc)
*/

#include <iostream>
#include "fecha.h"

class Fecha{
  private:
    int dia_{};
    int mes_{};
    int ano_{};
      
  public:
    void Imprimir(){
      cout << dia_ << '/' << mes_ << '/' << ano_ << endl;
    }
     int ObtenerDia() {return dia_ ;}
     void SetDia(int dia) {dia_=dia ;}
    
     int ObtenerMes() {return mes_ ;}
     void SetMes(int mes) {mes_= mes ;}

     int ObtenerAno() {return ano_ ;}
     void SetAno(int ano){ano_=ano ;}
 };
