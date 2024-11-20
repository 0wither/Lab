#include <iostream>
#include <vector>
int main() {
 
int             array [10] {10,20,30,40,50,60,70,80,90,100};
std::vector<int>vetor      {10,20,30,40,50,60,70,80,90,100};
//?     antigo 
 /*for (int i=0; i<10; i++) {
    std::cout << vetor[i] << '\n';
 } 
*/


//mesma coisa:
std::string nome = "YourName";
const char* name = "YourName";


// for-range-declaration
for (int i:array) {
    std::cout << i << '\n';
}

 std::cout << "##########################" << '\n';

 for(int i =0;i <= sizeof(name); i++)  { 
    std::cout << name[i] << '\n';
 }

 std::cout << "##########################" << '\n';

 for (int i:vetor) {
    std::cout << i << '\n';
}

return 0;
}