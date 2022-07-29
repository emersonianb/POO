#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include "Pessoa.h"

class PessoaFisica : public Pessoa{
public:
PessoaFisica();
PessoaFisica(string, string);
void setCpf(string);
string getCpf() const;

protected:
string cpf;
};

#endif