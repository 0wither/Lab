#include <iostream>
#include <vector>

int main() {
  
  std::vector<int> num;
  std::vector<int> num2;
     
  int tam,i;


  
  num.push_back(1);
  num.push_back(2);
  num.push_back(3);
  num.push_back(4);
  num.push_back(5);


  num2.push_back(5);
  num2.push_back(6);
  num2.push_back(7);
  num2.push_back(8);
  tam = num.size();
                      //extras:
 // num.swap(num2); //troca de de elementos entre os vetores
 // std::cout << "Primeiro valor de num..: " << num.front() << '\n';
 // std::cout << "Ultimo   valor de num..: " << num.back() << '\n';
 // std::cout << "Ultimo   valor do meio.: " << num.at(tam/2) << '\n';
 
 // num.insert(num.begin()+1,999);//begin = inserir na frente,inserindo na segunda posição,po
 //por conta do  '+1"'
  
  //num.insert(num.end()-2,999);//end = inserir naa ultimaa,inserindo na segunda pos
  //num.pop_back(); // retira elementos,comecando do Ultimo
  //num.clear(); // llmpa todos elementos



   for (int i = 0; i < tam; i++) {
    std::cout << num[i] << "\n"; // vai imprimir os os elementos
  }
  std::cout << '\n';
   for (int i = 0; i < tam; i++) {
    std::cout << num2[i] << "\n"; // vai imprimir os os elementos
  }
  return 0;
}
