#include "Animal.hpp"

Animal::Animal(){}

Animal::Animal(string n, string r) : nome(n), raca(r){
}

string Animal::caminha() const{
  string frase = (nome + " está caminando");
  return frase;
}