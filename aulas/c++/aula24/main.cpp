#include<iostream>

using namespace std;

int main () {
   

  string veiculo = "Carro";  
  string *pv;

  pv=&veiculo; //o indereço 'pv'
  //(porque fiz a vsrivel pv virar um ponterio),recebe o endereco da variavel // veiculo

  std::cout << pv << '\n' << &veiculo << endl;
  std::cout << "Antigo valor na variavel da memoria.:  "<< veiculo << endl;
  *pv="Moto"; //no endereco apontado por 'pv' adicone o valor "moto"
  std::cout << "Novo valor na variavel da memoria...:  "<< veiculo << endl;
  return 0;
}
