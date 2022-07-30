#include <iostream>

#include "ArrayList.h"

using std::cout;

int main() {
  ArrayList al(10);

  al.add(1).add(2).add(10).add(20);

  al.print();

  cout << al.busca(3) << "\n";

  al.remove(2);
  al.print();

  al.removeEl(2);
  al.print();

  al.add(2).add(10).add(30);

  auto novoArray = somaArray(al, 5);
  novoArray.print();

  auto outroArray = subArray(novoArray, 7);
  outroArray.print();

  auto maisUmArray = mulArray(outroArray, 2);
  maisUmArray.print();

  auto maisOutroArray = divArray(maisUmArray, 3);
  maisOutroArray.print();
  return 0;
}