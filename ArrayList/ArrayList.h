#ifndef ARRAYLIST_H
#define ARRAYLIST_H

class ArrayList
{
  friend ArrayList somaArray(ArrayList &, int);
  friend ArrayList subArray(ArrayList &, int);
  friend ArrayList mulArray(ArrayList &, int);
  friend ArrayList divArray(ArrayList &, int);
  
  public:
    ArrayList(int);
    ~ArrayList();
  
    ArrayList &add(int);
  
    void print() const;
    int busca(int) const;
    void remove(int);
    void removeEl(int);
    int tamArray() const{return pos;}
  
  private:
    int *arr;
    int tam;
    int pos;
};

#endif