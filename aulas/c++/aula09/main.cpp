//testando switch

#include <iostream>
using namespace std;

int main() {

 int opc;
 cout << "selecione um item\n";
 cout << "[1] arma [2] sigarro  [3] bebida:";
 cin >> opc;


  switch (opc) {
 case 1:
  cout << "\nvocẽ selecionou a arma" << endl;
  break;
 case 2:
  cout << "\nvocẽ reginerou 1 vida" << endl;
  break;
 case 3:
  cout << "\nvocẽ pulou uma partida" << endl;
  break;
 }
}
