#include <iostream>
#include "Cachorro.hpp"
#include "Gato.hpp"
using std::cout; using std::endl;

int main() {
  Animal umAnimal("tucano", "poodle");
  Cachorro pequeno("papagaio", "labrador");
  Gato venus("venus", "albina");
  
  cout << umAnimal.caminha() << endl;
  cout << pequeno.caminha() << " "<< pequeno.late() << endl;
  cout << venus.caminha() << " "<< venus.mia() << endl;
}