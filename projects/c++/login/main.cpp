#include <iostream>
#include <string>
#include <fstream>


void registrador(std::string login,std::string pass) {
//ofstream para editar
std::ofstream arquivo("registers.txt", std:: ios::app);
 if(!arquivo.is_open()) {
 std::cout << "erro ao abrir arquivo" << '\n';
 } else {
 arquivo << login << " " << pass << '\n';
 arquivo.close();
 std::cout << "salvo dados com sucesso!" << '\n';
 }
}


void VerificarLogin(std::string Login,std::string Pass) { 
//ifstream arquivo para leitura
std::ifstream arquivo("registers.txt", std:: ios::in);
std::string arquivoLogin,arquivoPass;
if(!arquivo.is_open()) { 
 std::cout << "erro ao encontrar arquivo registrator" << '\n';
} else {

 while(arquivo >> arquivoLogin >> arquivoPass) {
    std::cout << "comparando: " <<  arquivoLogin << " " << arquivoPass << '\n';
  if(arquivoLogin == Login && arquivoPass == Pass) {
     std::cout << "sucess" << '\n';
    } else {
     std::cout << "fail" << '\n';
    }}}
 arquivo.close();
}

int main() {

 int opc;
 std::string login,pass;
 std::cout << "   escolha sua opc: " << '\n';
 std::cout << "1.login" << '\n' << "2.register: " << '\n' << "3.exit: " << '\n';
 std::cin >> opc;


std::cout << "\nname: " << "\n";
std::cin >> login;
std::cout << "pass: " << '\n';
std::cin >> pass;


if (opc == 1) { VerificarLogin(login,pass); } else if (opc == 2) { registrador(login,pass); }
 return 0;
}