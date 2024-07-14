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
lupa = 1,
soda = 1,
regen = 1;
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

int generateRandom(int upper, bool includeZero) {
    int number;
    do {
        number = rand() % upper;
    } while (!includeZero && number == 0);
    return number;
}
//------------------------------------------------------------------



  int main() {
  std::cout << "Bem-vindo à roleta russa jogador.\n Digite seu nome: " << std::endl;  
  std::cin >> name;
  intro(0,0);
  inicio();

return 0;
}

//------------------------------------------------------------------






// Definindo a função
  void intro(int balasV,int balasC) {
   srand(static_cast<unsigned int>(time(0)));
  //srand(time(0));
  balasV = generateRandom(6,false);
  balasC = generateRandom(5,false);

   std::cout << "comecando..." << std::endl;
  std::cout << "------------------------------------------------" << std::endl;
  std::cout << balasV << "X balas falsas:"<< std::endl; 
  std::cout << balasC << "X balas verdadeiras:" << std::endl;
  std::cout << "------------------------------------------------" << std::endl;
  std::cin.clear();
  }
//jogo
 void inicio() {
  int rodadas = 1;
  bool morto = false;
  int teclado;
  int GunDamage = 1;
  bool cortado = false;

if (rodadas == 2) {
// sistema sorteio de itens
  std::cout << "Voce ganhou:" << std::endl;
  serra = generateRandom(2,true);
  lupa = generateRandom(2,true);
  soda = generateRandom(2,true);
  regen = generateRandom(2,true);
  std::cout << serra << "X serras" << std::endl;
  std::cout << soda << "X sodas" << std::endl;
  std::cout << lupa << "X lupas" << std::endl;
  std::cout << regen << "X cigarros" << std::endl;
  Iserra = generateRandom(2,true);
  Ilupa = generateRandom(2,true);
  Isoda = generateRandom(2,true);
  Iregen = generateRandom(2,true);
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
  std::cout << regen << "proximo [99]" << std::endl;

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
        if (soda <= 0) {
        std::cout << "--Voce não tem Soda--" << std::endl;
        }
        if (soda > 0) {
        std::cout << "--Soda foi usada--" << std::endl;
        --soda;
        }
       break;
    case 3: //item que ve a proxima bala: lupa
        if (lupa <= 0) {
        std::cout << "--Voce não tem Lupa--" << std::endl;
        }
        if (lupa > 0) {
        std::cout << "--Lupa foi usada--" << std::endl;
        --lupa;
        }

        break;
    case 4: // item que lhe da 1 de hp: cigarro 
       if (regen <= 0) {
        std::cout << "--Voce não tem Cigarros--" << std::endl;
        }
        if (regen > 0) {
        std::cout << "--Cigarro foi usada--" << std::endl;
        --regen;
        ++hp;
        }

        break;

    default:
      std::cout << "--opção invalida...--" << std::endl;
       }
  std::cout << "------------------------------------------------" << std::endl;
  } while(teclado != 99);
  inicio();
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
