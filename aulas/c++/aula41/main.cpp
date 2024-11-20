#include <iostream>
#include <map>
int main () {

std::map<int,std::string>prod;
std::map<int,std::string>     ::iterator itmap;


prod.insert (std::pair<int,std::string>(0,"mause"));
prod.insert (std::pair<int,std::string>(1,"teclado"));
prod.insert (std::pair<int,std::string>(2,"munitor"));
prod.insert (std::pair<int,std::string>(3,"caixa. som"));


itmap=prod.find(3);       //precura a chave
if(itmap == prod.end()) { // caso não encontre a chave
 std::cout << "produto nao encontrado" << '\n'; 
} else if (itmap != prod.end()) {
 std::cout << "produto em estoque" << '\n';
 std::cout << "codigo: " << itmap->first << "produto: " << itmap->second << '\n';
}



//prod.erase(0); // limpar chave
//prod.clear();  // clear all chaves
prod.erase(prod.find(0),prod.find(2)); // começa do inicio pra limpar ate 2
for(auto it:prod) {

//std::cout << it->frist << '\n';  // imprime as chaves
std::cout << it.second << " - "<< it.second <<  '\n';   // imprime valores 

}

 return 0;
}