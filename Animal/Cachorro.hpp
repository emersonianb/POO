#ifndef CACHORRO_HPP
#define CACHORRO_HPP

#include <iostream>
#include "Animal.hpp"

class Cachorro : public Animal
{
  public:
  Cachorro(string, string);
  string late() const;
};

#endif