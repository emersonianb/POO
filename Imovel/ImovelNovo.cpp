#include "ImovelNovo.h"

ImovelNovo::ImovelNovo(){}

ImovelNovo::ImovelNovo(string end, double preco) : Imovel(end, preco){
}

void ImovelNovo::setAdicional(double adc){
  adicional = adc;
  preco += adicional;
}

double ImovelNovo::getAdicional() const{
  return adicional;
}