#include <iostream>
#include <vector>

using namespace std;

int main() {
  int x;
  int tam = 5;
  int vetor[tam];
  //outro metedo 
  //int vetor2[tam] = (10,20,30,40,50);
  vetor[0]=10;
  vetor[1]=20;
  vetor[2]=30;
  vetor[3]=40;
  vetor[4]=50;
  
   for(x=0; x<sizeof(vetor)/4; x++) {
    cout << vetor[x]<< endl;
   }



  return 0;
}
