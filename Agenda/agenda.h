#ifndef AGENDA_H
#define AGENDA_H

#include "pessoa.h"
#include <vector>

class Agenda
{
private:
int numPessoas = 0;
Pessoa *pessoas;

public:
Agenda(int tpessoas = 1);
~Agenda();
inline int tamanhoArray() const;
void armazenaPessoa(string, int, double);
void armazenaPessoa(Pessoa);
void removePessoa(string);
int buscaPessoa(string) const;
void imprimePovo() const;
void imprimePessoa(int &) const;
};

#endif