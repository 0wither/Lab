#include <iostream>
#include <stack>
#include <string>

int main() {

  std::stack<std::string> cartas;
 //primeira carta a entrar e a ultima a sair
  cartas.push("REI de cartas");
  cartas.push("REI de Espadas");
  cartas.push("REI de ouros");
  //ultima a entrar,é a primera a sair
  cartas.push("REI de paus");
  std::cout << "carta atual:"<< cartas.top() << std::endl;

//Quando tiver cartas executar:
 while (!cartas.empty()) {
  cartas.pop();
  std::cout << "-----------------------------" << std::endl;
  std::cout << "carta retirada\n" << std::endl;
  if (cartas.empty()) { std::cout << "-pilha sem cartas-" << std::endl; }
  if (!cartas.empty()) { std::cout << "-pilha com cartas-" << std::endl;}
  std::cout << "nova tamanho da pilha: " << cartas.size() << std::endl;
  std::cout << "primeira nova carta:" << cartas.top() << std::endl; 

 }
 std::cout << "\n--todas cartas retiradas--" << std::endl;
 if (cartas.empty()) { std::cout << "pilha sem cartas" << std::endl; }
 if (!cartas.empty()) { std::cout << "pilha com cartas" << std::endl;}
 return 0;
}
