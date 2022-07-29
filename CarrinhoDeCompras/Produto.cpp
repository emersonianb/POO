#include "Produto.h"

Produto::Produto(){
}

Produto::Produto(string nome, string categoria, string validade){
  setNome(nome);
  setCategoria(categoria);
  setValidade(validade);
}

void Produto::setNome(string nome){
  this->nome = nome;
}

string Produto::getNome() const{
  return this->nome;
}

void Produto::setCategoria(string categoria){
  this->categoria = categoria;
}

string Produto::getCategoria() const{
  return this-> categoria;
}

void Produto::setValidade(string validade){
  this->validade = validade;
}

string Produto::getValidade() const{
  return this->validade;
}