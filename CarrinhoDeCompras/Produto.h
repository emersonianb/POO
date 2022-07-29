#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>
using std::string;

class Produto
{
public:
Produto();
Produto(string, string, string);
void setNome(string);
string getNome() const;
void setCategoria(string);
string getCategoria() const;
void setValidade(string);
string getValidade() const;

private:
string nome;
string categoria;
string validade;
};

#endif