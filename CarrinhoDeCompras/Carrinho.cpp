#include "Carrinho.h"
#include <iostream>

using std::cout;

void Carrinho::armazenarProduto(Produto &pro){
  if (numProdutos < 30){
    produtos[numProdutos] = pro;
    numProdutos += 1;
  }
}

void Carrinho::removerProduto(string nome){
  for (int i = 0; i < numProdutos; i++){
    if (nome == produtos[i].getNome()){
      Produto pro;
      produtos[i] = pro;
      numProdutos -= 1;
      for (int j = i; i < numProdutos; i++){
          produtos[i] = produtos[i+1];
        }
      }
    }
  }

void Carrinho::listarProdutos() const{
  for (int i = 0; i <= numProdutos; i++){
    if (produtos[i].getNome() != ""){
      cout << "Produto: " << produtos[i].getNome() << std::endl;
      cout << "Categoria: " << produtos[i].getCategoria() << std::endl;
      cout << "Validade: " << produtos[i].getValidade() << std::endl;
      cout << "_________________________" << std::endl;
    }
  }
}