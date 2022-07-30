#include <iostream>

using std::cout; using std::endl;

#include "IntegerSet.h"

IntegerSet unionOfSets(IntegerSet &set1, IntegerSet &set2 ){
  IntegerSet newSet;
  for (int i = 0; i < 100; i++){
    if ((set1.set[i] == 1) || (set2.set[i] == 1)){
      newSet.insertElement(i);
    }
  }
  return newSet;
}

IntegerSet intersectionOfSets(IntegerSet &set1, IntegerSet &set2){
  IntegerSet novoSet;
  for (int i = 0; i < 100; i++){
    if ((set1.set[i] == 1) && (set2.set[i] == 1)){
      novoSet.insertElement(i);
    }
  }
  return novoSet;
}

ostream &operator<<(ostream &out, const IntegerSet &obj){
  for (int i = 0; i < 100; i++){
    if (obj.set[i] == 1){
      out << obj.set[i] << " ";
    }
  }
  out << endl;
  return out;
}

IntegerSet::IntegerSet(){
  set = new int[100];
}

IntegerSet::IntegerSet(int *arr, int tam){
  set = new int[100];
  for (int i = 0; i < tam; i++){
    set[arr[i]] = 1;
  }
}

IntegerSet::~IntegerSet(){
  delete [] set;
}

void IntegerSet::insertElement(int k){
  set[k] = 1;
}

void IntegerSet::deleteElement(int k){
  set[k] = 0;
}

void IntegerSet::print() const{
  for (int i = 0; i < 100; i++){
    if (set[i] == 1){
      cout << i << " ";
      }
    if (i == 99){
      cout << endl;
      }
  }
}

void IntegerSet::operator<<(int k){
  insertElement(k);
}

void IntegerSet::operator>>(int k){
  deleteElement(k);
}

const IntegerSet IntegerSet::operator|(const IntegerSet &obj){
  IntegerSet setRetorno;
  for (int i = 0; i < 100; i++){
    if ((this->set[i] == 1) || (obj.set[i] == 1)){
      setRetorno.insertElement(i);
    }
  }
  return setRetorno;
}

const IntegerSet IntegerSet::operator&(const IntegerSet &obj){
  IntegerSet setRetorno;
  for (int i = 0; i < 100; i++){
    if ((this->set[i] == 1) && (obj.set[i] == 1)){
      setRetorno.insertElement(i);
    }
  }
  return setRetorno;
}