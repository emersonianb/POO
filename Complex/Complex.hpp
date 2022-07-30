#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include <iostream>
using std::ostream;

class Complex
{

  friend ostream &operator<<(ostream &, const Complex &);
  friend Complex operator++(Complex &obj);
  friend Complex operator--(Complex &obj);

  public:
  Complex();
  Complex(int, int);
  Complex operator+(const Complex&);
  Complex operator-(const Complex&);
  void operator+=(const Complex&);
  void operator-=(const Complex&);

  private:
  int parteReal;
  int parteImaginaria;
};

#endif