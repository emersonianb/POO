#include "Pessoa.h"

using std::cout;

ostream &operator<<( ostream &out, const Pessoa &pes){
  cout << pes.getNome();

  return out;
}

Pessoa::Pessoa(){
}

Pessoa::Pessoa(string nome){
  setNome(nome);
}

void Pessoa::setNome(string nome){
  this->nome = nome;
}

string Pessoa::getNome() const{
  return this->nome;
}