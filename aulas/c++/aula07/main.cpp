#include <iostream>
using namespace std;

int main() {
 char opc; //opção
 int n1,n2,res;
 cout << "digite valor da nota 1: \n";
 cin >> n1;
 cout << "digite valor da nota 2: \n";
 cin >> n2;

 res = n1+n2;
 
 if(res >= 9) {
   cout << "\naprovado" << endl;
 }else if(res >= 5){
   cout << "\nreecuperação" << endl;
 }else{
   cout << "\nreprovado" << endl;
 }

 return 0;
}
