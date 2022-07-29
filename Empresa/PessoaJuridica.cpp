#include "PessoaJuridica.h"

PessoaJuridica::PessoaJuridica(){}

PessoaJuridica::PessoaJuridica(string nome, string cnpj, string razao) : Pessoa(nome){
  setCnpj(cnpj);
  setRazao(razao);
}

void PessoaJuridica::setCnpj(string cnpj){
  this->cnpj = cnpj;
}

string PessoaJuridica::getCnpj() const{
  return cnpj;
}

void PessoaJuridica::setRazao(string razao){
  this->razaoSocial = razao;
}

string PessoaJuridica::getRazao() const{
  return razaoSocial;
}