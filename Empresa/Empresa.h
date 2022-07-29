#ifndef EMPRESA_H
#define EMPRESA_H

#include "PessoaJuridica.h"
#include "Funcionario.h"
#include "Cliente.h"

class Empresa : public PessoaJuridica{
public:
Empresa(string, string, string);
~Empresa();
void adicionaCliente(Cliente &);
void adicionaFuncionario(Funcionario &);
void imprimeClientes() const;
void imprimeFuncionarios() const;
double calcularFolhaPagamento() const;

private:
Cliente *clientes;
int numCliente = 0;
Funcionario *funcionarios;
int numFuncioanrios = 0;
};

#endif