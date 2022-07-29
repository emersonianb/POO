#include "PessoaFisica.h"

PessoaFisica::PessoaFisica(){}

PessoaFisica::PessoaFisica(string nome, string cpf) : Pessoa(nome){
  setCpf(cpf);
}

void PessoaFisica::setCpf(string cpf){
  this->cpf = cpf;
}

string PessoaFisica::getCpf() const{
  return this->cpf;
}