#include <iostream> 
#include <vector>
#include <string>
#include "aviao.h"


int main() {

 aviao *av1=new aviao();
 aviao *av2=new aviao();
 aviao *av3=new aviao();

 av1 -> ini(3);
 av2 -> ini(2);
 av3 -> ini(1);

 av1 -> imprimir();
 av2 -> imprimir();
 av3 -> imprimir();
  return 0;
}
