#include <iostream>
#include <utility>
int main () {

 const int tam=3;
 std::pair<int,std::string> par[tam];

 par[0].first=100;
 par[0].second="CFB ";
 // alternativa
 par[1]=std::make_pair(200,"curso ");
 
 par[2]=std::make_pair(300,"c++");
 std::cout << par[0].second << par[1].second << par[2].second << '\n';


 return 0;
}