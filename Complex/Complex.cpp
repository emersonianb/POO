#include "Complex.hpp"
#include <iostream>

using std::cout; using std::ostream;
using std::endl;


ostream &operator<<(ostream &out, const Complex &obj){
  out << obj.parteReal << " + " << obj.parteImaginaria << "i";
  out << endl;
  return out;
}

Complex operator++(Complex &obj){
  obj.parteReal += 1;
}

Complex operator--(Complex &obj){
  obj.parteReal -= 1;
}

Complex::Complex() : parteReal(0), parteImaginaria(0){}

Complex::Complex(int pr, int pi) : parteReal(pr), parteImaginaria(pi){}

Complex Complex::operator+(const Complex &obj){
  auto pr = this->parteReal + (obj.parteReal);
  auto pi = this->parteImaginaria + (obj.parteImaginaria);
  Complex objRetorno(pr, pi);
  return objRetorno;
}

Complex Complex::operator-(const Complex &obj){
  auto pr = this->parteReal - (obj.parteReal);
  auto pi = this->parteImaginaria - (obj.parteImaginaria);
  Complex objRetorno(pr, pi);
  return objRetorno;
}

void Complex::operator+=(const Complex&obj){
  this->parteReal += obj.parteReal;
  this->parteImaginaria += obj.parteImaginaria;
}

void Complex::operator-=(const Complex &obj){
  this->parteReal -= obj.parteReal;
  this->parteImaginaria -= obj.parteImaginaria;
}