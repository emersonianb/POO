#include "Imovel.h"

Imovel::Imovel(){
}

Imovel::Imovel(string end, double pre){
  setEndereco(end);
  setPreco(pre);
}

void Imovel::setEndereco(string &end){
  this->endereco = end;
}

void Imovel::setPreco(double pre){
  this->preco = pre;
}

string Imovel::getEndereco() const{
  return this->endereco;
}

double Imovel::getPreco() const{
  return this->preco;
}