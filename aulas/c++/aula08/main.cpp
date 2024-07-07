#include <iostream>
#include <string>
using namespace std;

int main() {
 
  int n1,n2,all;
  string res;
  cout << "digite um valor n1:";
  cin >> n1;
  cout << "digite segundo valor:";
  cin >> n2;

  all = n1+n2;
  
  (all >= 7 ? res="aprovado" : res="reprovado");

  cout << "\no aluno foi " << res << endl;

  return 0;
}
