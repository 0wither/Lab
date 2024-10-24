//                    sobre: 
// esse meu progama e um joguinho bem simples que estou fazendo,
// pretendo colocar uma interface grafica aqui com carros de verdade.
//                   objetivos:
// O objetivo do jogo e você tentar criar uma empressa de carros,
// onde você pode comprar motores,rodas,carças que podem ser bonitas
// ou feias,quanto mais caro você pagar,mais seu carro fica mais facil
// para vender depois,você pode pagar para comprar maquinas que fabricam
// carros automaticamente. 
// você também pode colocar nomes nos carros que você fabrica,
// cor,pneu,se seu carro foi aprovado para ser esportivo,






#include <iostream>
#include <vector>

int part_terminus = 0;
// = 0 terminal principal
// = 1 criação de um novo vehiclo
// = 2 loja de motores ê etc...
// = 3 comprar vehiclo 
// = 4 sua conta do banco
std::string cmd; //todos commandos que usuario digitar


// --declarando variavel--
void terminus();
void newcar();


struct carro{
	std::string nome;
	int velocidade;
	std::string cor;
	std::string peneu;
	std::string motor;
	bool sportivo;
};


class loja {
	public:
	std::vector<std::string> motores;
	int price;
	
	// inser = inserir
	void inserir(int INprice,std::string InserMotor) { 
		motores.push_back(InserMotor);
	}
};

class player {

	std::string money;
};

std::vector<carro> carros;


loja lojinha;



void terminus() {

do {
//terminal
	std::cout << "> ";
	std::cin >> cmd;
	std::cout << part_terminus << '\n';
	//commands
//---------------------PART 0
 if (part_terminus == 0) { //main part 
		if (cmd == "ls") {
        	std::cout << "commandos disponiveis: \n";
        	std::cout << "ls (lista todos commandos disponiveis)" << "\n";
        	std::cout << "vh+ (criar modelo)";
			std::cout << "buy car (comprar carro)" << '\n';
		} else if (cmd == "vh+") {
			std::cout << "Voce esta criano um novo vehiclo ! \n";
			part_terminus = 1;
		} else if (cmd == "buy car") { 
			std::cout << "carros disponiveis" << '\n';
		}
		
		else {
			std::cout << "erro\n"; //caso contrario se usuario digitar algo errado:/
	}
  }

//-------------------------PART 1
if (part_terminus == 1) {
	 if (cmd == "ls") {
	  	std::cout << "listas de comandos vh: " << '\n';
	  	std::cout << "lj (acesso a loja)" << '\n';
	  	std::cout << "mts (listar motores disponiveis com uma lista)" << '\n';
	    std::cout << "p" << '\n';
	  } else if (cmd == "lj") {
		part_terminus = 2;
	  } else if (cmd == "null") { 
		std::cout << "NULL" << '\n';
      }
} 
//-------------------------PART 2

if (part_terminus == 2) {
	if (cmd == "ls") { 
		std::cout << "lista commandos da loja:" << '\n';
		std::cout << "motores:" << '\n';  	
	 } else {
		std::cout << "error\n" << '\n';
	 } 
    } 
 } while (part_terminus != 99);
}
// create new car
void newcar() {
 part_terminus = 1;

//carros.push_back({});
//std::cout << carros[0].nome << '\n';

}



int main() {
	//carros.push_back({"toyota",200,"vermelo"});
	lojinha.inserir(790,"v1");
	lojinha.inserir(1300,"v2");

	std::cout << part_terminus << '\n';

	std::cout << lojinha.motores[0] << '\n';
	std::cout << lojinha.motores[1] << '\n';

	terminus();
	return 0;
}



