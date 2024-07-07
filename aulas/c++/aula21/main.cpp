//testando lista
#include <iostream>
#include <list>
#include <ostream>
int main() { 
  std::list<int> aula;
  int tam;
  // adiciona tamanho da lista
  tam=10;
   std::cout << "tamanho da lista:" << aula.size() << std::endl;
 for(int i =0; i < tam; i++) {
    aula.push_back(i);
  }
  
  
  tam = aula.size();
  for (int i = 0;i < tam; i++ ) {
  std::cout << "tamanho da lista:" << aula.front() << std::endl;
  aula.pop_front();
    }
  std::cout << "tamanho da lista:" << aula.front() << std::endl;

  return 0;
  }
