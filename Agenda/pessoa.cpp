#include <iostream>
#include "pessoa.h"

using std::cout;

Pessoa::Pessoa(string n, int i, double a){
  setNome(n);
  setIdade(i);
  setAltura(a);
}

Pessoa::Pessoa(){
  
}

void Pessoa::setIdade(int &i){
  if (i < 0){
    idade = 0;
  }
  else{
    idade = i;
  }
}

void Pessoa::setAltura(double &a){
  if (a < 0){
    altura = 0;
  }
  else{
    altura = a;
  }
}

void Pessoa::printDados(){
  cout << "Nome: " << getNome() <<"\nIdade: " << getIdade() << "\nAltura: " << getAltura();
}