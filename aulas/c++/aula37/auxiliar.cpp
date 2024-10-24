#include <iostream>

extern int num; //se eu quiser usar uma variavel de outro arquivo tenho que usar 'extern'

void imp() {
    std::cout << num << std::endl;
}
