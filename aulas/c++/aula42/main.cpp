#include <iostream>
#include <memory>

class carro { 

public:
 int vel=0;


 int GetVel() { 
  return vel;
  //obetenha propriedade da velocidade atual
 }

 void setVel(int v) { 
  this -> vel = v;
  // modifique propriedade velocidade
 }


};

int main() {


std::shared_ptr<carro>c1(new carro);
std::shared_ptr<carro>c2 = c1;

c1 -> setVel(10);
c2 -> setVel(5);

std::cout << "Velocidade: " << c2->GetVel() << '\n';
std::cout << "Velocidade: " << c1->GetVel() << '\n';

// saida: Velocidade: 5
//        Velocidade: 5

// Basicamente você esta usando ponteiro compartilhado





//ponteiro inteligente
 //std::unique_ptr<std::string>str(new std::string("CBF cursos"));

//std::cout << *str << " - tamanho: " << str->size() << '\n';




//ponteiro comum

 // int *pnum = new int();
 // std::shared_ptr<int>pnum(new int); //  ponteiro compartilhado
 // std::unique_ptr<int>pnum(new int); //int
 // std::string* str=new std::string("CFB cursos");
 // std::cout << *str << " - " << &str << '\n';


 return 0;
}