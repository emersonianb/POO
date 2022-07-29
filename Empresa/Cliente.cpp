#include "Cliente.h"
using std::cout;

ostream &operator<<(ostream &out, const Cliente &cli){
  cout << "Nome do Cliente: " << cli.getNome() << "\nCpf: " << cli.getCpf() << "\nTelefone: " << cli.getTelefone() << "\nEndereco: " << cli.getEndereco() << "\n\n";

  return out;
}

Cliente::Cliente(string nome, string cpf, string telefone, string endereco) : PessoaFisica(nome, cpf){
  setTelefone(telefone);
  setEndereco(endereco);
}

void Cliente::setTelefone(string telefone){
  this->telefone = telefone;
}

void Cliente::setEndereco(string endereco){
  this->endereco = endereco;
}