#ifndef CLIENTE_H
#define CLIENTE_H

#include "PessoaFisica.h"

class Cliente : public PessoaFisica{
friend ostream &operator<<(ostream &, const Cliente &);

public:
Cliente(){;}
Cliente(string, string, string, string);
void setTelefone(string);
string getTelefone() const{return telefone;}
void setEndereco(string);
string getEndereco() const{return endereco;}

private:
string telefone;
string endereco;
};

#endif