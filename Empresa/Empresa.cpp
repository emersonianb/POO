#include "Empresa.h"
using std::cout;

Empresa::Empresa(string nome, string cnpj, string razao) : PessoaJuridica(nome, cnpj, razao){
  this->clientes = new Cliente[5];
  this->funcionarios = new Funcionario[6];
}

Empresa::~Empresa(){
  if (clientes){
    delete [] clientes;
  }
  if (funcionarios){
    delete [] funcionarios;
  }
}

void Empresa::adicionaCliente(Cliente &cli){
  clientes[numCliente] = cli;
  numCliente+= 1;
}

void Empresa::adicionaFuncionario(Funcionario &func){
  funcionarios[numFuncioanrios] = func;
  numFuncioanrios+= 1;
}

void Empresa::imprimeClientes() const{
  for (int i = 0; i < numCliente; i++){
    cout << "-------------------------\n";
    cout << clientes[i];
    cout << "-------------------------\n";
  }
}

void Empresa::imprimeFuncionarios() const{
  for (int i = 0; i < numFuncioanrios; i++){
    cout << "-------------------------\n";
    cout << funcionarios[i];
    cout << "-------------------------\n";
  }
}

double Empresa::calcularFolhaPagamento() const{
  double total;
  for (int i = 0; i < numFuncioanrios; i++){
    total += funcionarios[i].calculaSalarioBruto();
  }
  return total;
}