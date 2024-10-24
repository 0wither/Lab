#include <iostream>
#include <vector>


//register int num; //acesso rapido a variavel que fica na cpu,poucas chances de funcionar
int main() {
 std::vector<int>v{10,20,30,40,50,60,70};
 for (auto it=v.begin();it!=v.end();it++) {
 std::cout << *it << '\n';
  } 
}