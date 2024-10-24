#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
#include <iostream>



class Base1 {
public: 
  void ImpBase1();
};

class Base2 {
 public:
  void ImpBase2();
};

void Base1::ImpBase1() {
 std::cout << "imprimindo Base1" << '\n';

}

void Base2::ImpBase2() {
 std::cout << "imprimindo Base2" << '\n';
}

class CBF:public Base1, public Base2 {
 
};
#endif