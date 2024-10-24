#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INLUDEDD
class aviao {


 public:
  int vel;
  int VelMax;
  std::string tipo;
  void ini(int tp); //prototipando
  void imprimir(); 

 private:


};

void aviao::ini(int tp) { //tipo 1 = jato,2 = monomotor,3 = planador
  if(tp == 1) {
    this -> tipo = "jato";
    this -> VelMax = 900;
  } else if(tp==2){
    this -> tipo = "monomotor";
    this -> VelMax = 350;
  } else if (tp==3){
    this -> tipo = "planador";
    this -> VelMax = 100;
  }
}

void aviao::imprimir() {
    std::cout << "Tipo.............: " << this -> tipo <<  '\n';
    std::cout << "velocidade Maxima: " << this -> VelMax << '\n';
    std::cout << "velocidade atual..: " << this -> vel << '\n';
    std::cout << "******************************" << '\n';
  }


#endif
