#include <iostream>

int main() { 
    
 std::string text;
 std::cout << "digite um texto para ser imprimido" << '\n'; 
 std::cin >> text;

 if (text == "test") { 
  std::cout << "test que você digitou: ";
  std::cout << text << '\n'; 

} else {
  std::cout << "saindo de if..." << '\n';
  return 0; //progama encerrado
}
 std::cout << "saiu!" << '\n';
 return 0;
}