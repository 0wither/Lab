#include <iostream>
#include <vector>
#include <stdexcept>

//? Tratamento de erro
int main() {
 
std::vector<int>num(5);

 try {
  num.at(4)=10;
  std::cout << num[4] << '\n';
 } catch(std::exception& e ) {
  std::cout << "FAIL: " << e.what()<< '\n';
 }
 return 0;
}