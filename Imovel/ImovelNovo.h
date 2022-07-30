#ifndef IMOVELNOVO_H
#define IMOVELNOVO_H

#include "Imovel.h"

class ImovelNovo : public Imovel{

public:
ImovelNovo();
ImovelNovo(string, double);
void setAdicional(double);
double getAdicional() const;

private:
double adicional;
};

#endif