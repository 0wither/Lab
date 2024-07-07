//testando soma
#include <iostream> 

using namespace std;

void soma(int s1,int s2);

int main() {
  int n1,n2;
  cout << "valor1:" << "\n";
  cin >> n1;
  cout << "valor2:" << "\n";
  cin >> n2;
  soma(n1,n2);
  return 0;
}

void soma(int s1,int s2) {
 cout << "\n"<< "resultado:" << s1+s2 << endl;
}
