#include <iostream>
#include <utility>
int main () {

 const int tam=3;
 std::pair<int,std::pair <std::string,double>> par[tam];


 par[0]=std::make_pair(1,std::make_pair("mause   \n",   10.55));
 par[1]=std::make_pair(2,std::make_pair("teclado \n", 34.20));
 par[2]=std::make_pair(3,std::make_pair("muntior \n", 600.99));
 // alternativa
 
 for(int i=0; i < tam ; i++ ) {
  std::cout << par[i].first << " - " <<  par[i].second.first << " price: " << par[i].second.second << '\n';
}
 return 0;
}