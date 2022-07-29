#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "PessoaFisica.h"

class Funcionario : public PessoaFisica{
  friend ostream &operator<<( ostream &, const Funcionario &);
  public:
  Funcionario(){;}
  Funcionario(string, string, string, double = 0, int = 0, int = 0);
  void setMatricula(string);
  string getMatricula() const{return matricula;}
  void setSalBase(double);
  double getSalBase() const{return salarioBase;}
  void setCargaHor(int);
  int getCargaHor() const{return cargaHorariaMensal;}
  void setQuantHrsTraMes(int);
  int getQuantHrsTraMes() const{return quantidadeHorasTrabalhadas;}
  double calculaSalarioBruto() const;
  
  private:
  string matricula;
  double salarioBase;
  int cargaHorariaMensal;
  int quantidadeHorasTrabalhadas;
};

#endif