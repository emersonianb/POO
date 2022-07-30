#include <iostream>
#include "IntegerSet.h"

using std::cout; using std::endl;

int main() {
  IntegerSet inteiro;
  inteiro.insertElement(1);
  inteiro.insertElement(25);
  inteiro.insertElement(5);
  inteiro.insertElement(34);
  inteiro.insertElement(90);
  inteiro.print();

  int array[] = {1, 25, 46, 78, 56, 43};
  IntegerSet conjunto(array, 6);
  conjunto.print();

  auto umSet = unionOfSets(inteiro, conjunto);
  //umSet.print();

  //auto set = intersectionOfSets(inteiro, conjunto);
  //set.print();

  //umSet << 2;
  //umSet << 3;
  //umSet.print();
  //umSet >> 3;
  //umSet.print();

  auto set2 = inteiro | conjunto;
  cout << set2;
  auto set3 = inteiro & conjunto;

  cout << set3;
  
}