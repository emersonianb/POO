#ifndef IMOVEL_H
#define IMOVEL_H

#include <string>
using std::string;

class Imovel
{
  public:
  Imovel();
  Imovel(string, double);
  void setEndereco(string &);
  string getEndereco() const;
  void setPreco(double);
  double getPreco() const;
  
  protected:
  string endereco;
  double preco;
};

#endif