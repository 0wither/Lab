#include <iostream>
#include <fstream>

int main() {
  
 std::ofstream arquivo;

 arquivo.open("cbfcurso.txt",std::ios::app);
 //adicionando "app" ele vai adicionar um conteudo novo
 //sem "app",você apenas sobscreve conteúdo existente
 arquivo << "CBF Cursos" << '\n';

 arquivo.close(); // liberando memoria
 return 0;
}