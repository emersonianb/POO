#include "Gato.hpp"

Gato::Gato(string n, string r) : Animal(n, r){
}

string Gato::mia() const{
  string miado = "miau";
  return miado;
}