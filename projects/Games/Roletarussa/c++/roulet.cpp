#include <algorithm>
#include <iostream>
#include <iterator>
#include <ostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>



class Player {
public:
    std::string name;
    int hp;
    int serra;
    int lupa;
    int soda;
    int regen;
    int cortado;
    int damage;
    // Construtor padrão
    Player() : hp(6), serra(1), lupa(10), soda(10), regen(1), damage(1) {}
};


class Enemy {
public:
  int hp;
  int serra;
  int lupa;
  int soda;
  int regen;

  Enemy() : hp(6), serra(1), lupa(1), soda(1), regen(1) {}

};

//variaveis globais 
int opc; //opcão opara o telcado
//rodadas
int rodadas = 0;
int rodadas_max = 6;
std::vector<char> balas;
int balasV = 0;
int balasF = 0;
// Declarando funçãoo
void shuffleVector(std::vector<char>& vec);
void TelaBalas(Player & player);
void RandomBalas();
void RandomItem(Player & player,Enemy & enemy);
void ItensUse(Player & player, Enemy & enemy);
void limparTela(); 
void cena2(Player&player,Enemy & enemy);

// Função para embaralhar usando rand()
void shuffleVector(std::vector<char>& vec) {
    size_t n = vec.size();
    for (size_t i = 0; i < n; ++i) {
        size_t j = rand() % n;
        std::swap(vec[i], vec[j]);
    }
}


//gerador 
int generateRandom(int upper, bool includeZero) {
    int number;
    do {
        number = rand() % upper;
    } while (!includeZero && number == 0);
    return number;
}



// Definindo a função
void RandomBalas() {
srand(static_cast<unsigned int>(time(0)));
  
  balasV = generateRandom(6,false); //Definindo quantas balas vão ser geradas
  balasF = generateRandom(5,false); //Definindo quantas balas vão ser geradas

  for (int i = 0; i < balasV; ++i) {
    balas.push_back('V'); // 'V' para balas verdadeiras
  }

  for (int i = 0; i < balasF; ++i) {
     balas.push_back('F'); // 'F' para balas falsas
   }

// Embaralha as balas
shuffleVector(balas);
}


// mostrar na tela balas
void TelaBalas() { 
  std::cout << balasV << "X balas falsas:"<< '\n'; 
  std::cout << balasF << "X balas verdadeiras:" << '\n';
  std::cout << "------------------------------------------------" << '\n';
  std::cin.clear();
  }
 void ItensUse(Player & player,Enemy & enemy) {

  int teclado;
  bool cortado = false;
 do {
  std::cout << "Your hp:\n" << player.hp << '\n';

  std::cout << player.serra << "X serras [1]" << '\n';
  std::cout << player.soda << "X sodas [2]" << '\n';
  std::cout << player.lupa << "X lupas [3]" << '\n';
  std::cout << player.regen << "X cigarros [4]" << '\n';
  std::cout << "proximo [99]" << '\n';

  std::cout << "\nselecione qual item vocẽ vai usar:";
  
  std::cin >> teclado;

 if (std::cin.fail()) {
 std::cin.clear(); // Limpar o erro de entrada
 std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignorar o resto da linha
 std::cout << "--opção invalida...--" << '\n';
 std::cout << "------------------------------------------------" << '\n';
  continue; // Voltar para o início do loop
  //limparTela();
 }
  switch (teclado) {
    case 1: // item que dobra dano: serra
       if (cortado == true) { // verifica se serra foi usada
        std::cout << "--sua arma ja foi esta causando dobro dano--" << '\n';
       }
        if (player.serra <= 0 && cortado == false ) {
        std::cout << "--Voce não tem serras--" << '\n';
        }
       if (player.serra > 0) {
       if (cortado == false) {  // verfica se serra foi usada
        std::cout << "--Arma recebe dobro de dano agora--" << '\n';
        cortado = true;
        player.damage = 2;
        --player.serra;
       }}
       break;
    case 2: // item que pula rodadas: soda
        if (player.soda <= 0) {
        std::cout << "--Voce não tem Soda--" << '\n';
        }
        if (player.soda > 0) {
        std::cout << "--Soda foi usada--" << '\n';
        if(balas.back() == 'F') {
            std::cout << "retirada: " << "falsa" << '\n';
        } else if(balas.back() == 'V') {
            std::cout << "retirada: " << "verdadeira" << '\n';
        } else {
            std::cout << "%ERROR%" << '\n';
          }
          balas.pop_back(); //retira a bala
          --player.soda;
        }
       break;
    case 3: //item que ve a proxima bala: lupa
        if (player.lupa <= 0) {
        std::cout << "--Voce não tem Lupa--" << '\n';
        }
        if (player.lupa > 0) {
         std::cout << "--Lupa foi usada--" << '\n';
         --player.lupa; 
            //verifica se bala e falsa ou nao
            if(balas.back() == 'F') {
            std::cout << "proxima bala e:" << "falsa" << '\n';
             } else if(balas.back() == 'V') 
            std::cout << "proxima bala e:" << "verdadeira" << '\n';
             } else {
             std::cout << "%sem balas%" << '\n';
      }
    break;
      case 4:
        if(player.regen <= 0) {
         std::cout << "--Voce não tem Cigarros--" << '\n';
        }
        if(player.hp > 6) {
          std::cout << "--Cigarro foi usado--" << '\n';
        }
        if (player.regen > 0) {
          std::cout << "--Cigarro foi usado--" << '\n';
          --player.regen;
        }
      break;
     }
    if (!balas.back()) {
      RandomItem(player,enemy);
    }
    std::cout << "------------------------------------------------" << std::endl;
   } while (teclado != 99);
    cena2(player,enemy);
}
  void RandomItem(Player & player,Enemy & enemy) {
  ++rodadas; 
  if (rodadas == 2) {
  limparTela();
  std::cout << "----Raund: "<< rodadas << " ----- \n";
    // sistema sorteio de itens
  std::cout << "Voce ganhou:" << '\n';
  player.serra = generateRandom(2,true);
  player.lupa = generateRandom(2,true);
  player.soda = generateRandom(2,true);
  player.regen = generateRandom(2,true);
  std::cout << player.serra << "X serras" << '\n';
  std::cout << player.soda << "X sodas" << '\n';
  std::cout << player.lupa << "X lupas" << '\n';
  std::cout << player.regen << "X cigarros" << '\n';
  enemy.serra = generateRandom(2,true);
  enemy.lupa = generateRandom(2,true);
  enemy.soda = generateRandom(2,true);
  enemy.regen = generateRandom(2,true);
  }
 }

void cena2(Player & player, Enemy & enemy) {
  TelaBalas();
  do {
  std::cout << enemy.hp << "x hp enemy" <<  '\n';
  std::cout << player.hp << "x hp your" <<  '\n';
  std::cout << "shoot you [1]" << '\n'; 
  std::cout << "shoot enemy [2]" << '\n'; 
  std::cin >> opc;
  if (std::cin.fail()) {
    std::cin.clear(); // Limpar o erro de entrada
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignorar o resto da linha
    std::cout << "--opção invalida...--" << '\n';
    std::cout << "------------------------------------------------" << std::endl;
    continue;
  }
  switch (opc) {
    case 1:
     if (balas.back() == 'V')  {
      std::cout << "--Voce sofreu dano--" << '\n';
      player.hp -= player.damage;
      //vez do enemy
    } else if(balas.back() == 'F') {
      std::cout << "--Bala estava vazia--" << '\n';
      // vez do player continua por estar vazio
      ItensUse(player,enemy);
       }
    break;
    case 2:
    if (balas.back() == 'V') {
    enemy.hp -= player.damage;
    }
    break;
    default:
    std::cout << "--opção invalida...--" << '\n';
    break;
   }
     std::cout << "------------------------------------------------" << '\n';
   } while (opc != 99);
  //vez do enimigo
    player.damage = 1;
  }



void limparTela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}




//------------------------------------------------------------------



  int main() {

  Player player;
  Enemy enemy;
  std::cout << "Bem-vindo à roleta russa jogador.\n Digite seu nome: " << std::endl;  
  std::cin >> player.name;
  std::cout << "comecando..." << '\n';
  std::cout << "------------------------------------------------" << '\n';
  std::vector<char> balas; // Declara o vetor de balas
  RandomBalas();
  RandomItem(player,enemy);
  TelaBalas();
  ItensUse(player,enemy); //usar pra qaubdo for vez do player
return 0;
}

//------------------------------------------------------------------



