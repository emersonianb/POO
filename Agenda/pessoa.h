#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using std::string;

class Pessoa
{
  private:
  string nome;
  int idade;
  double altura;

  public:
  Pessoa(string, int, double);
  Pessoa();
  void setNome(string &n){nome = n;}
  void setIdade(int &);
  void setAltura(double &);
  string getNome() const {return nome;}
  int getIdade() const {return idade;}
  double getAltura() const {return altura;}
  void printDados();
};

#endif