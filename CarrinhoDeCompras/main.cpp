#include <iostream>
#include "Carrinho.h"

using std::cout;

int main() {
  Produto produto1("leite", "leites", "26/01/2003");
  Produto produto2("queijo", "derivados do leite", "25/12/2024");
  Produto produto3("arroz", "comida", "23/05/1994");
  Produto produto4("feijão preto", "feijão", "15/03/2023");
  Produto produto5("macarrão", "massas", "06/07/2022");

  Carrinho carrinho;
  carrinho.armazenarProduto(produto1);
  carrinho.armazenarProduto(produto2);
  carrinho.armazenarProduto(produto3);
  carrinho.armazenarProduto(produto4);
  carrinho.armazenarProduto(produto5);

  carrinho.listarProdutos();

  carrinho.removerProduto(produto2.getNome());
  carrinho.removerProduto(produto5.getNome());

  cout << "\n";

  carrinho.listarProdutos();
}