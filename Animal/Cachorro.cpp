#include "Cachorro.hpp"

Cachorro::Cachorro(string n, string r) : Animal(n, r){
}

string Cachorro::late() const{
  string latir = "au au au";
  return latir;
}