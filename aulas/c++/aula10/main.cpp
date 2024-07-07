#include <iostream> 

using namespace std;

int n1 = 0;

int main() {

while (true) {
cout << ">";cin >> n1;
if (n1 > -1  ) {
break;
 } else {
 // Ação a ser executada se a entrada não for um número
   std::cout << "Erro: Entrada inválida. Por favor, digite apenas números." << std::endl;
 // Limpa o buffer de entrada para evitar loops infinitos em caso de entrada inválida
   std::cin.clear();
   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }  
 }
cout << "test\n" << n1;
}
