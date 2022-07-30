#ifndef BANCO_H
#define BANCO_H

#include <string>
using std::string;

class ContaBanco
{
  public:
  ContaBanco(string &nome, double &saldo);
  void setCliente(const string &nome);
  void setSaldo(double din);
  void creditar(double din);
  void debitar(double din);
  double getSaldo();

  private:
  string cliente;
  double saldo;
};

void interface(string &nome, double  &saldo);


#endif