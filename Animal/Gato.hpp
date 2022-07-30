#ifndef GATO_HPP
#define GATO_HPP

#include "Animal.hpp"

class Gato : public Animal
{
  public:
  Gato(){;}
  Gato(string, string);
  string mia() const;
};

#endif