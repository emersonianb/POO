#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
using std::string;

class Animal
{
public:
Animal();
Animal(string, string);
string caminha() const;
void setNome(string n){nome = n;}

protected:
string nome;
string raca;
};

#endif