#include <iostream>
#include "banco.h"

ContaBanco::ContaBanco(string &nome, double &saldo)
{
  setCliente(nome);
  setSaldo(saldo);
}

void ContaBanco::setCliente(const string &nome)
{
  this->cliente = nome;
}

void ContaBanco::setSaldo(double din)
{
  if (din < 0){
    this->saldo = 0;
  }
  else{
    this->saldo = din;
  }
}

void ContaBanco::creditar(double din)
{
  this->saldo += din;
}

void ContaBanco::debitar(double din)
{
  if (din > saldo){
    std::cout << "A quantia é maior que o saldo";
  }
  else
  {
      this->saldo -= din;
  }
}

double ContaBanco::getSaldo()
{  
  return saldo;
}

void interface(string &nome, double  &saldo){
  
}