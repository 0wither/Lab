#include <iostream>


struct Carro {
  std::string name; //nome do carro
  std::string cor;  //cor do carro
int VelMax;  //velocidade Maxima do carr


void inserir(std::string INname, std::string INcor, int INVelMax) {
    name = INname;
    cor = INcor;
    VelMax = INVelMax;
  }
};

int main() {

  Carro car1,car2;

  car1.name = "Tornado";
  car1.cor  = "vermelho";
  car1.VelMax = 225;
  car2.inserir("Koning", "Preto", 300);


  std::cout << "Carro............: " << car1.name << '\n'; 
  std::cout << "Cor..............: " << car1.cor << '\n';
  std::cout << "velocidadeMaxima.: " << car1.VelMax << '\n';


  std::cout << "\nCarro............: " << car2.name << '\n'; 
  std::cout << "Cor..............: " << car2.cor << '\n';
  std::cout << "velocidadeMaxima.: " << car2.VelMax << '\n';


return 0;
}
