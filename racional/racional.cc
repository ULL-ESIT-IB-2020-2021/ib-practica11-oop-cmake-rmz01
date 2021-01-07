/*
Aarón Ramírez Valencia.
ULL.
Informática básica.
Práctica 11, ejercicio 3. (racional.cc)
*/

#include<iostream>
using namespace std;

class Racional{

  private:
    int numerador; // inicia numerador
    int denominador; // inicia denominador
    double d; // inicia d
    double x; // inicia x

  public:
    Racional(int num = 0, int den = 1);
    double suma(Racional c);
    double resta(Racional c);
    double multiplicacion(Racional c);
    double division(Racional c);
    void printRacional();
    void printRacional_double();

  private:
    double reduc();
};

Racional::Racional(int num, int den) : numerador(num), denominador(den){

}

double Racional::suma(Racional c){
  numerador = numerador + c.numerador; // añade numerador
  denominador = denominador + c.denominador; // añade denominador
  return reduc();
}


double Racional::resta(Racional c){
  numerador = numerador - c.numerador; // resta numerador
  denominador = denominador - c.denominador; // resta denominador
  return reduc();
}

double Racional::multiplicacion(Racional c){
  numerador = numerador * c.numerador; // multiplica numerador
  denominador = denominador * c.denominador; // multiplica denominador
  return reduc();
}

double Racional::division(Racional c){
  numerador = numerador * c.denominador; // divides numerador y denominador
  denominador = denominador * c.numerador; // divdes denominador y numerador
  return reduc();
}

void Racional::printRacional(){
  std::cout << numerador << "/" << denominador; // muestra fraccion
}

void Racional::printRacional_double(){
	std::cout << d / static_cast<float>( x ); // muestra numero double
}


double Racional::reduc(){
  int largest; // inicia largest
  largest = numerador > denominador ? numerador : denominador;

  int MCD = 0; // comun divisor

  for ( int bucle = 2; bucle <= largest; bucle++ )
    if ( numerador % bucle == 0 && denominador % bucle == 0 )
      MCD = bucle;

    if (MCD != 0){
      numerador /= MCD;
      denominador /= MCD;
   } 
   return MCD;
}


//***************FUNCION***MAIN***************************
int main(){
  Racional c( 2, 6 ), d( 7, 8 ), x; // crea tres objetos racionales  
  c.printRacional(); // muestra objeto racional c
  std::cout << " + ";
  d.printRacional(); // muestra objeto racional d				
  x = c.suma
  
  ( d ); // añade objeto c y d; fija valor a x

  cout << " = ";
  x.printRacional(); // muestra objetor racional x
  cout << '\n';
  x.printRacional(); // muestra objeto racional x    
  cout << " = ";
  x.printRacional_double(); // muestra objeto racional x como double
  cout << "\n\n";

  c.printRacional(); // muestra objeto racional c
  cout << " - ";
  d.printRacional(); // muestra objeto racional d
  x = c.resta( d ); // resta objeto c y d 
           
  cout << " = ";
  x.printRacional(); // muestra objeto racional x
  cout << '\n';
  x.printRacional(); // muestra objeto racional x
  cout << " = ";
  x.printRacional_double(); // muestra objeto racional x como double
  cout << "\n\n";

  c.printRacional(); // muestra objeto racional c
  cout << " x ";
  d.printRacional(); // muestra objeto racional d
  x = c.multiplicacion

  ( d ); // multiplica objeto c y d
                            
  cout << " = ";
  x.printRacional(); // muestra objeto racional x
  cout << '\n';
  x.printRacional(); // muestra objeto racional x
  cout << " = ";
  x.printRacional_double(); // muestra objeto racional x como double
  cout << "\n\n";

  c.printRacional(); // muestra objeto racional c
  cout << " / ";
  d.printRacional(); // muestra objeto racional d	
  x = c.division( d ); // divides objeto c y d
                            
  cout << " = ";
  x.printRacional(); // muestra objeto racional x		
  cout << '\n';
  x.printRacional(); // muestra objeto racional x
  cout << " = ";
  x.printRacional_double(); // muestra objeto racional x como double
  std::cout << endl;
  system("pause");
   
  return 0;
}
