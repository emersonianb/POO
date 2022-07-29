#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>
using std::string; using std::ostream;

class Pessoa
{
  friend ostream &operator<<( ostream &, const Pessoa &);

  public:
  Pessoa();
  Pessoa(string);
  void setNome(string);
  string getNome() const;

  protected:
  string nome;
};

#endif