#include <iostream>

using namespace std;

int n1,n2; //variaveis globais,podem ser acessaadas dentro de funçães

int main() {

  int n3,n4; //variavel local 
  int res;
  cout << "Atribua um valor : ";
  cin >> n3;
  cout << "Atribua outro valor : ";
  cin >> n4;

  res=n3+n4;


  cout << "resultado foi:" << res << "\n\n";
  return 0;
}
