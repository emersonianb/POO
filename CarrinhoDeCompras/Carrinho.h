#ifndef CARRINHO_H
#define CARRINHO_H

#include "Produto.h"

class Carrinho
{
public:
Carrinho(){;}
void armazenarProduto(Produto &);
void removerProduto(string);
void listarProdutos() const;

private:
Produto produtos[30];
int numProdutos = 0;
};

#endif