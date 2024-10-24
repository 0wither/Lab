#include <iostream>
#include <string>
#include <fstream>


int main() { 


 char opc = 'S';
 std::fstream arquivo;
 std::string name = "list"; 
 std::string linhas;


 arquivo.open("list.txt",std::ios::out); //abrindo o arquivo
 //? DICA:
 // você pode usar "| ios::app" para não apagar conteudo anterior 

 while((opc == 'S') || (opc == 's')) {  // Enquanto opc for "S" sempre ira executar isso
  std::cout << "Digite um nome: ";
  std::cin >> name; // usuario digitara o nome,para gaurdar na variavel 'nome'
  arquivo << name << '\n'; // escrevendo dentro do arquivo a variavel com guardando oque usario escreveu
  std::cout << "Deseja colocar mais 1 nome ?[n/y?]" << '\n';
  std::cin >> opc;
  system("CLS"); // limpando tela
 }
 arquivo.close(); // liberando espaço na memoria,fechando o arquivo

 arquivo.open("list.txt",std::ios::in);
 std::cout << "nomes digitados: " << '\n';

 if (arquivo.is_open()) {
 while (getline(arquivo,linhas)) {
    std::cout << linhas << '\n';
 }
 arquivo.close();
 } else { 
 std::cout << "nao foi possivel abrir o arquivo" << '\n';
 }
 } 