#include <iostream>

int num  = 0;
int num2 = 0;
int main() {
 std::cout << "digite primeiro numero para somar: ";
 std::cin >> num;
 std::cout << "\ndigite segundo numero para somar: " << '\n';
 std::cin >> num2;

 //somando 
 std::cout << "A soma entre: \n" << num << " + " << num2 << "\n E: \n" << num + num2;
 return 0;
}