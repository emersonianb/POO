#ifndef INTEGERSET
#define INTEGERSET

#include <iostream>
using std::ostream;

class IntegerSet
{
//funções friends de união
friend IntegerSet unionOfSets(IntegerSet &set1, IntegerSet &set2);
//função friend de interseção
friend IntegerSet intersectionOfSets(IntegerSet &set1, IntegerSet &set2);
//sobrecarga do operador << como função friend
friend ostream &operator<<(ostream &, const IntegerSet &);

public:
IntegerSet();
IntegerSet(int *, int);
~IntegerSet();
void insertElement(int);
void deleteElement(int);
void print() const;
void operator<<(int);
void operator>>(int);
const IntegerSet operator|(const IntegerSet &);
const IntegerSet operator&(const IntegerSet &);

private:
int *set;
};

#endif