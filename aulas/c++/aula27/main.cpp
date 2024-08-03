#include <iostream>
#include <vector>



class aviao {


 public:
  int vel;
  int VelMax;
  std::vector<std::string> tipo;
  void ini(int tp);

 aviao() : tipo(3) {}

 private:


};

void aviao::ini(int tp) { //tipo 1 = jato,2 = monomotor,3 = planador

  this -> tipo[0] = "jato";
  this -> tipo[1] = "monomotor";
  this -> tipo[2] = "planador";


  if(tp == 1) {

    this -> VelMax = 900;
    std::cout << this -> tipo[0] << '\n';
    std::cout << this -> VelMax << '\n';
  } else if(tp==2){
    this -> VelMax = 350;
    std::cout << this -> tipo[1] << '\n';
    std::cout << this -> VelMax << '\n';
  } else if (tp==3){
    this -> VelMax = 100;
    std::cout << this -> tipo[2] << '\n';
    std::cout << this -> VelMax << '\n';
  }
}


int main() {

 aviao *av1=new aviao();
 aviao *av2=new aviao();

 av1 -> ini(1);
 av2 -> ini(2);


 //std::cout << av1 ->  VelMax << '\n';

 //std::cout << av2 -> VelMax << '\n';

  delete av1; // Libera a memória alocada para 'av1'
  delete av2; // Libera a memória alocada para 'av2'

  return 0;
}
