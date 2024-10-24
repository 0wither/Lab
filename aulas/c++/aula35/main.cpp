#include <iostream>

auto soma(double n1,double n2) -> double{ //
 // se eu quiser o retorno double,declaro aqui em cima 
 return n1+n2;
}


std::string canal() {
    return "CFB Cursos";
}
int main() {


 auto num = 10;
 auto nome = "bruno";
 auto valor = 10.5;
 
 //int res=canal(); // aqui eu ja teria que me precupar de mudar 'int' pra string
 //auto res=canal();
 // eu não preciso me precupar com o tipo,pois esta em 'auto' a variavel 'res' 
 
auto res = soma(10.3,5.2); 

 return 0;
}