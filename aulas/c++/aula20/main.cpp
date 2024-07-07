//testando fila

#include <algorithm>
#include <iostream>
#include <ostream>
#include <queue>
int main() {
  
  std::queue<std::string> cartas;
  //primeira carta a entrar,seempre a primera a sai
  cartas.push("REI de cartas");
  cartas.push("REI de espadas");
  cartas.push("REI de ouros");
  cartas.push("REI de paus");
  std::cout << "tamanho atual:" << cartas.size() << std::endl;
  std::cout << "carta atual:" << cartas.front() << std::endl;
  std::cout << "utlima carta da fila:" << cartas.back() << std::endl;
 cartas.pop();
 
  while (!cartas.empty()) {
  cartas.pop();
  std::cout << "--------------------" << std::endl;
  std::cout << "1x carta retirada\n" << std::endl;
  if (!cartas.empty()) { std::cout << "-pilha com cartas-" << std::endl; }
  if (cartas.empty()) { std::cout << "-pilha sem cartas-" << std::endl;  }
  std::cout << "novo tamanho da fila:" << cartas.size() << std::endl;  
  std::cout << "nova carta:" << cartas.front() << std::endl;
  }
  return 0;
}
