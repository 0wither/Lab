#include <iostream>
#include <vector>

//? Este codigo serve como formas de usar interator
// normalmente interator serve apenas para mostrar uma lista de vetores.e navegar entre ela. 
int main() { 
 
 std::vector<std::string> 
 produtos = {"mause","teclado","munitor","gabinete"};
 std::vector<std::string>:: 
 iterator it;








 //mostreanso o inicio da lista
 it= produtos.begin(); //retorna primeiro elemente 
 std::cout << *it << '\n'; 
 std::cout << "########################################" << '\n';
 //####################################
 
 
 
//mosteando final da lista 
 
 it = produtos.end() -1; // subtraindo para exibir ultimo elemento
 std::cout << *it << '\n';
 std::cout << "########################################" << '\n';
 //####################################




// avança indo para tal elemento

 it = produtos.begin();
 advance(it,3); // começa no inicio ê avança três indices parando,em 'gabinete'
 std::cout << *it << '\n';
 std::cout << "########################################" << '\n';
 //####################################



// vai para tal elemento

 it = produtos.begin();
 std::cout << *next(it,3) << '\n'; // começa no inicio ê avança três indices parando,em 'gabinete'
 std::cout << "########################################" << '\n';
 //####################################





 it = produtos.end();
 std::cout << *prev(it,2) << '\n';  // começa no final ê volta no penultimo indice parando,em 'munitor'
 std::cout << "########################################" << '\n';
 //####################################

 std::vector<std::string>:: 
 iterator it2;

  
//for(std::vector<std::string>:: iterator it2 = produtos.begin();it2!=produtos.end(); it2++) { // forma mais usada
for(it2 = produtos.begin();it2!=produtos.end(); it2++) {
    std::cout << *it2 << '\n';
}


 return 0;
 }