#include <iostream>
#include "classes.h"


int main() { 

 Base1 *obj1 = new Base1();
 Base2 *obj2 = new Base2();
 CBF   *obj = new CBF();
obj  -> ImpBase1();
obj  -> ImpBase2();
std::cout << "---------------------------" << '\n';
obj1 -> ImpBase1();
obj2 -> ImpBase2();


 return 0;    
}