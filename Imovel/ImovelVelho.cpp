#include "ImovelVelho.h"

ImovelVelho::ImovelVelho(){
}

ImovelVelho::ImovelVelho(string end, double pre) : Imovel(end, pre){
}

void ImovelVelho::setDesconto(double des){
  desconto = des;
  preco -= desconto;
}

double ImovelVelho::getDesconto() const{
  return desconto;
}