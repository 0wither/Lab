#include <algorithm>
#include <iostream>
#include <iterator>
#include <ostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
//variavel do player
int hp = 7;
char name[21];
int opc;
int serra = 1,
lupa = 0,
soda = 0,
regen = 0;
//inimigo status 
int hp_inimigo = 7;
int Iserra,Ilupa,Isoda,Iregen;
//rodadas
int rodadas = 0;
int rodadas_max = 6;
// Declarando função
void intro(int balasV,int balasC);
void inicio();
void morreu(bool morto);
void limparTela(); 
  int main() {
  std::cout << "Bem-vindo à roleta russa jogador.\n Digite seu nome: " << std::endl;  
  std::cin >> name;
  intro(0,0);
  inicio();

return 0;
}

  // Definindo a função
  void intro(int balasV,int balasC) {
  srand(time(0));
  balasV = rand()%6;
  balasC = rand()%5;

  if (balasV == 0 && balasC == 0) {
    intro(++balasV,++balasC);
  }

  std::cout << "comecando..." << std::endl;
  std::cout << "------------------------------------------------" << std::endl;
  std::cout << balasV << "X balas falsas:"<< std::endl; 
  std::cout << balasC << "X balas verdadeiras:" << std::endl;
  std::cout << "------------------------------------------------" << std::endl;
  std::cin.clear();
  }
//jogo
 void inicio() {
  bool morto = false;
  int teclado;
  int GunDamage = 1;
  bool cortado = false;

if (rodadas == 2) {
// sistema sorteio de itens
  std::cout << "Voce ganhou:" << std::endl;
  serra = rand()%2;
  lupa = rand()%2; 
  soda = rand()%2;
  regen = rand()%2;
  std::cout << serra << "X serras" << std::endl;
  std::cout << soda << "X sodas" << std::endl;
  std::cout << lupa << "X lupas" << std::endl;
  std::cout << regen << "X cigarros" << std::endl;
  Iserra = rand()%2;
  Ilupa = rand()%2; 
  Isoda = rand()%2;
  Iregen = rand()%2;
}
if (hp <= 0) {morto = true;}
if (morto == true) {morreu(true);}
if (cortado ==  true) {
  std::cout << "--Cano da arma cortado--";
  GunDamage = 2;
}
 do {
  std::cout << "Your hp:\n" << hp << std::endl;

  std::cout << serra << "X serras [1]" << std::endl;
  std::cout << soda << "X sodas [2]" << std::endl;
  std::cout << lupa << "X lupas [3]" << std::endl;
  std::cout << regen << "X cigarros [4]" << std::endl;

  std::cout << "\nselecione qual item vocẽ vai usar:";
  
  std::cin >> teclado;

 if (std::cin.fail()) {
 std::cin.clear(); // Limpar o erro de entrada
 std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignorar o resto da linha
 std::cout << "--opção invalida...--" << std::endl;
 std::cout << "------------------------------------------------" << std::endl;
  continue; // Voltar para o início do loop
  //limparTela();
 }
  switch (teclado) {
    case 1: // item que dobra dano: serra
       if (cortado == true) { // verifica se serra foi usada
        std::cout << "--sua arma ja foi esta causando dobro dano--" << std::endl;
       }
        if (serra <= 0 && cortado == false ) {
        std::cout << "--Voce não tem serras--" << std::endl;
        }
       if (serra > 0) {
       if (cortado == false) {  // verfica se serra foi usada
        std::cout << "--Arma recebe dobro de dano agora--" << std::endl;
        cortado = true;
        GunDamage = 2;
        --serra;
       }}
       break;
    case 2: // item que pula rodadas: soda
       break;
    case 3: //item que ve a proxima bala: lupa
        break;
    case 4: // item que lhe da 1 de hp: cigarro 
        break;

    default:
      std::cout << "--opção invalida...--" << std::endl;
       }
  std::cout << "------------------------------------------------" << std::endl;
  } while(teclado != 99);
 }
//assim que jogdor perder:
 void morreu(bool morto) {

 }
void limparTela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
