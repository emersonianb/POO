#include <iostream>
#include <string>
#include "banco.h"

using std::string;

int main() {
  string nome;
  double saldo;
  std::cout << "Digite o nome do Cliente: ";
  std::cin >> nome;
  std::cout << "Digite o saldo inicial: ";
  std::cin >> saldo;
  ContaBanco conta(nome, saldo);
  int passo;
  std::cout << "O saldo de " << nome << " é " << conta.getSaldo();
  std::cout << "\n(1) Sacar\n(2) Depositar\n(3) Extrato\nO que deseja fazer?" << std::endl;
  std::cin >> passo;
  double din;
  if (passo == 1){
    std::cout << "Quanto deseja sacar? ";
    std::cin >> din;
    conta.debitar(din);
    std::cout << "Seu saldo é " << conta.getSaldo();}
  else if (passo == 2){
    std::cout << "Quanto deseja depositar? ";
    std::cin >> din;
    conta.creditar(din);
    std::cout << "Seu saldo é " << conta.getSaldo();}
  else{
    std::cout << conta.getSaldo();
  }
}