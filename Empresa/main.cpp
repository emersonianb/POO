#include "Funcionario.h"
#include "Cliente.h"
#include "Empresa.h"

using std::cout;

int main() {
  /*
  Pessoa p1("jo");
  PessoaFisica p2("zé", "22222222222");
  PessoaJuridica p3("bar do zé", "22222222222", "bar");

  cout << p1 << " trabalha no " << p3 << " de Seu " << p2 << "\n";
  cout << p2.getCpf() << "\n";
  cout << p3.getCnpj() << "\n";
  */

  Funcionario funcionario1("joão", "1111111", "20211125");
  Funcionario funcionario2("maria", "121212", "22222", 1000, 120, 60);

  funcionario1.setSalBase(1000);
  funcionario1.setCargaHor(120);
  funcionario1.setQuantHrsTraMes(50);

  cout << funcionario1;
  cout << funcionario2;

  Cliente cliente1("jose", "2222222", "8899999999", "rua joselino barbosa");

  cout << cliente1;

  Cliente cliente2("maria", "11111111", "889977999", "rua joselino barbosa");

  Empresa empresa1("bar do seu ze", "22222222", "bar");
  empresa1.adicionaCliente(cliente1);
  empresa1.adicionaCliente(cliente2);
  empresa1.adicionaFuncionario(funcionario1);
  empresa1.adicionaFuncionario(funcionario2);

  empresa1.imprimeClientes();
  empresa1.imprimeFuncionarios();
}