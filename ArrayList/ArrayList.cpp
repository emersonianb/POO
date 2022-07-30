#include <iostream>
using std::cout,std::endl;

#include "ArrayList.h"
//Implementação das fgunções friends
ArrayList somaArray(ArrayList &array, int soma){
  ArrayList novoArray(array.tamArray());
  for (int i = 0; i <= array.tamArray(); i++){
    novoArray.add((array.busca(i)+soma));
  }
  return novoArray;
}

ArrayList subArray(ArrayList &array, int sub){
  ArrayList novoArray(array.tamArray());
  for (int i = 0; i <= array.tamArray(); i++){
    novoArray.add((array.busca(i)-sub));
  }
  return novoArray;
}

ArrayList mulArray(ArrayList &array, int mul){
  ArrayList novoArray(array.tamArray());
  for (int i = 0; i <= array.tamArray(); i++){
    novoArray.add((array.busca(i)*mul));
  }
  return novoArray;
}

ArrayList divArray(ArrayList &array, int div){
  ArrayList novoArray(array.tamArray());
  for (int i = 0; i <= array.tamArray(); i++){
    novoArray.add((array.busca(i)/div));
  }
  return novoArray;
}

//Implementação da Classe
ArrayList::ArrayList(int tam) : pos(0)
  {
    if (tam > 0)
    {
      this->tam = tam;
      arr = new int[tam];
    }
    else
    {
      arr = nullptr;
      this->tam = 0;
    }
  }

  ArrayList::~ArrayList()
  {
    if (arr)
      delete [] arr;
  }

  ArrayList &ArrayList::add(int v)
  {
    if (pos < tam)
      arr[pos++] = v;
    
    return *this;
  }

  void ArrayList::print() const
  {
    for (int i = 0 ; i < pos ; i++)
      std::cout << arr[i] << " ";
    std::cout << std::endl;
  }

  int ArrayList::busca(int ind) const{
    if (ind < tam){
      return arr[ind];
    }
    else{
      return 0;
    }
  }

  void ArrayList::remove(int ind){
    if (arr[ind]){
      for (int i = ind; i <= pos; i++){
        if (i != (pos)){
          arr[i] = arr[i+1];
        }
        else{
          arr[i] = 0;
        }
      }
    pos--;
    }
  }

  void ArrayList::removeEl(int el){
    int ind;
    for (int i = 0; i <= pos; i++){
      if (arr[i] == el){
        ind = i;
      }
    }
    this->remove(ind);
  }