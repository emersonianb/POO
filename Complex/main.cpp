#include "Complex.hpp"

using std::cout;

int main() {
  Complex numero(1, 2);
  Complex numero2(10, 20);
  numero2 += numero;
  cout << numero;
  auto numero3 = numero + numero2;
  cout << numero3;
  auto numero4 = numero2 - numero;
  cout << numero4;
  numero4 -= numero;
  cout << numero4;
}