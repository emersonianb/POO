#include <iostream>
using std::cout, std::endl;

#include "agenda.h"


int main () {
	char linha[] = "---------------------------------------------\n";
	Agenda A(2);

	A.armazenaPessoa("Abel", 22, 1.78);
	A.armazenaPessoa(Pessoa("Tiago", 20, 1.80));
	A.imprimePovo();
	cout << linha;
  A.armazenaPessoa("emerson", 19, 1.83);
 	return 0;
}