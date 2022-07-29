#ifndef PESSOAJURUDICA_H
#define PESSOAJURUDICA_H

#include "Pessoa.h"

class PessoaJuridica : public Pessoa{
public:
PessoaJuridica();
PessoaJuridica(string, string, string);
void setCnpj(string);
string getCnpj() const;
void setRazao(string);
string getRazao() const;

protected:
string cnpj;
string razaoSocial;
};

#endif