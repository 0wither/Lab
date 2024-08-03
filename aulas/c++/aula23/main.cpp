#include <iostream>


struct Carro {
  
  std::string name;
  std::string cor;
  int VelMax;


  void inserir(std::string INname, std::string INcolor,int INVelMax) {

    name = INname;
    cor = INcolor;
    VelMax = INVelMax;

  }
  void mostrar() {

    std::cout << "\nNome..........: " << name<< '\n';
    std::cout << "Cor..............: " << cor << '\n';
    std::cout << "VelocidadeMaxima : " << VelMax << '\n';

  }
};

int main (int argc, char *argv[]) {
  

  Carro *carros=new Carro[5];
  Carro car1,car2,car3,car4,car5;
  carros[0]=car1;  carros[1]=car2; carros[2]=car3;  carros[3]=car4;  carros[4]=car5;

  carros[0].inserir("do batman", "preto", 400); 
  carros[1].inserir("Maquen", "vermelho ", 255); 
  carros[2].inserir("tornado", "branco", 190);  
  carros[3].inserir("fusca", "azul", 120);  
  carros[4].inserir("camaro","amarelo", 250);
  
  for (int i = 0; i < 5; i++) {
    carros[i].mostrar();
  }
  return 0;
}
