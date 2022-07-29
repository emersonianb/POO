#include "Funcionario.h"
#include <iostream>

using std::cout;
ostream &operator<<(ostream &out, const Funcionario &func){
  cout << "Funcionario: " << func.getNome() << "\nCPF: " << func.getCpf() << "\nMatricula: " << func.getMatricula() << "\nSalario Base: " << func.getSalBase() << "\nCarga Horária Mensal: " << func.getCargaHor() << "\nHoras Trabalhadas: " << func.getQuantHrsTraMes() << "\nSalario Bruto: " << func.calculaSalarioBruto() << "\n\n";

  return out;
}

Funcionario::Funcionario(string nome, string cpf, string matricula, double salBas, int chm, int qhtnm) : PessoaFisica(nome, cpf){
  setMatricula(matricula);
  setSalBase(salBas);
  setCargaHor(chm);
  setQuantHrsTraMes(qhtnm);
}

void Funcionario::setMatricula(string matricula){
  this->matricula = matricula;
}

void Funcionario::setSalBase(double salBas){
  salarioBase = salBas;
}

void Funcionario::setCargaHor(int chm){
  cargaHorariaMensal = chm;
}

void Funcionario::setQuantHrsTraMes(int qhtnm){
  if (qhtnm > cargaHorariaMensal){
    cout << "Quantidade maior que a carga horaria mensal";
    quantidadeHorasTrabalhadas = 0;
  }
  else if (qhtnm < 0){
    cout << "Quantidade de horas inválida";
    quantidadeHorasTrabalhadas = 0;
  }
  else{
    quantidadeHorasTrabalhadas = qhtnm;
  }
}

double Funcionario::calculaSalarioBruto() const{
  double div = 1.0 * quantidadeHorasTrabalhadas/cargaHorariaMensal;
  auto sb = salarioBase * div;
  return sb;
}