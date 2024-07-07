#include <iostream>
#include <tuple>

using namespace std;

int main() {
 int matriz[3][4]; 
 int c,l;

 //adiconando valor 
 for(l=0;l<3;l++) {
  for(c=0;c<4;c++) {
    matriz[l][c] = l;
}} 


 for(l=0;l<3;l++) {
  for(c=0;c<4;c++) {
    cout << matriz[l][c] << " ";
}
cout << "\n"; 
} 

  return 0;
}
