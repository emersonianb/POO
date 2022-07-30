#include "agenda.h"
#include <iostream>
#include <iterator>

using std::cout; using std::endl;
using std::remove;

Agenda::Agenda(int tpessoas){
  this->pessoas = new Pessoa[tpessoas];
}

Agenda::~Agenda(){
  if (pessoas){
    delete [] pessoas;
  }
}

int Agenda::tamanhoArray() const{
  return (sizeof pessoas/sizeof pessoas[0]);
}

void Agenda::armazenaPessoa(string nome, int idade, double altura){
  if (numPessoas < tamanhoArray()){
    pessoas[numPessoas] = Pessoa(nome, idade, altura);
    numPessoas += 1;
  }
  else{
    cout << "Agenda cheia!\n";
    imprimePovo();
  }
}

void Agenda::armazenaPessoa(Pessoa p){
  if (numPessoas < 10){
    pessoas[numPessoas] = Pessoa(p.getNome(), p.getIdade(), p.getAltura());
    numPessoas += 1;
  }
  else{
    cout << "Agenda cheia!\n";
    imprimePovo();
  }
}

void Agenda::removePessoa(string pe){
  auto ind = buscaPessoa(pe);
  for (int i = ind; i < numPessoas; i++){
    if (pessoas[numPessoas-1].getNome() == pessoas[i].getNome()){
      Pessoa p;
      pessoas[i] = p;
    }
    else{
      pessoas[i] = pessoas[i+1];
    }
  }
  numPessoas--;
}

int Agenda::buscaPessoa(string n) const {
  int ind;
  for (int i = 0; i < numPessoas; i++){
    if (pessoas[i].getNome() == n){
      ind = i;
    }
  }
  return ind;
}

void Agenda::imprimePovo() const{
  for (int i = 0; i < numPessoas; i++){
    cout << "Pessoa [" << i << "]" << std::endl;
    cout << "Nome: " << pessoas[i].getNome() << std::endl;
    cout << "Idade: " << pessoas[i].getIdade() << std::endl;
    cout << "Altura: " << pessoas[i].getAltura() << std::endl;
    cout << "-------------------------" << std::endl;
  }
}

void Agenda::imprimePessoa(int &in) const{
  cout << "Pessoa [" << in << "]";
  cout << "Nome: " << pessoas[in].getNome() << std::endl;
  cout << "Idade: " << pessoas[in].getIdade() << std::endl;
  cout << "Altura: " << pessoas[in].getAltura() << std::endl;
}