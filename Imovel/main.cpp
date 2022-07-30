#include <iostream>
#include "ImovelNovo.h"
#include "ImovelVelho.h"

using std::cout;

int main() {
  Imovel imovel("rua tal tal", 1788);
  ImovelNovo imv_novo("rua abecedario", 1888);
  ImovelVelho imv_velho("rua embaixo da ponte", 1000);

  cout << "O imovel esta na " << imovel.getEndereco() << " e custa " << imovel.getPreco() << std::endl << std::endl;

  cout << "O imovel novinho esta na " << std::endl;
  cout << "Valor?" << std::endl;
  imv_novo.setAdicional(300);
  cout << "Custa " << imv_novo.getPreco() << std::endl << std::endl;

  cout << "O imovel esta na " << imovel.getEndereco() << std::endl;
  cout << "Valor?" << std::endl;
  imv_velho.setDesconto(300);
  cout << "Custa " << imv_velho.getPreco() << std::endl << std::endl;
  
}