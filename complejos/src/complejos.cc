/*
Aarón Ramírez Valencia.
ULL.
Informática básica.
Práctica 11, ejercicio 2. (complejos.cc)
*/

#include <iostream>
using namespace std;

class Complejo{

  private:
    double real,imag;

  public:
    Complejo(){
      real=imag=0;
    }
 
    Complejo(double r){
      real=r;
      imag=0;
    }

    Complejo(double r, double i){
      real=r;
      imag=i;
    }

    Complejo(Complejo &obj){
      real=obj.real;
      imag=obj.imag;
    }

    Complejo add(Complejo c){
      Complejo Add;
      Add.real = real + c.real;
      Add.imag = imag + c.imag;
      return Add;
    }

    Complejo res(Complejo c){
      Complejo Res;
      Res.real = real - c.real;
      Res.imag = imag - c.imag;
      return Res;
    }

  void print(){
    cout<<real<<"+"<<imag<<"i"<<endl<<endl;
  }

  double getReal() const{
  return real;
  }
    
  double getImag() const{
  return imag;
  }

  void setReal(double re){
  real = re;
  }

  void setImag(double im){
  imag = im;
  }

};

//***************FUNCION***MAIN***************************
int main(){

  double real1,imag1,real2,imag2;

  cout<<"Introduce la parte real del primer número: ";
    cin>>real1;
  cout<<"Introduce la parte imaginaria del segundo número: ";
    cin>>imag1;
    Complejo obj1(real1,imag1);
  obj1.print();

  cout<<"Intruduce la parte real del segundo número: ";
    cin>>real2;
  cout<<"Introduce la parte imaginaria del segundo número: ";
    cin>>imag2;
    Complejo obj2(real2,imag2);
  obj2.print();

  Complejo c;
  c = obj1.add(obj2);
  cout<<"La suma es: ("<<c.getReal()<<")+("<<c.getImag()<<")i"<<endl;
  c= obj1.res(obj2);
  cout<<endl<<"La resta es: ("<<c.getReal()<<")+("<<c.getImag()<<")i"<<endl;

  return 0;
}
