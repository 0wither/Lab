#include <iostream>
#include <vector>
#include <algorithm> // Para a função shuffle
#include <cstdlib>   // Para a função rand()
#include <ctime>     // Para a função time()

using namespace std;

class Revolver {
private:
    vector<bool> balas; // Vetor para armazenar as balas (true = bala real, false = bala falsa)
    int tamTambor;      // Tamanho do tambor (número máximo de balas que o tambor pode conter)
    int numBalas;       // Número atual de balas no tambor

public:
    Revolver(int tamanho) : tamTambor(tamanho), numBalas(0) {
        balas.resize(tamTambor, false); // Inicializa o vetor de balas com balas falsas
    }

    // Adiciona uma bala ao tambor
    void adicionarBala(bool real) {
        if (numBalas < tamTambor) {
            balas[numBalas] = real;
            numBalas++;
        }
    }

    // Gira o tambor para embaralhar as balas
    void girarTambor() {
        random_shuffle(balas.begin(), balas.end());
    }

    // Dispara o revólver e retorna true se a bala for real, false caso contrário
    bool atirar() {
        if (numBalas > 0) {
            bool bala = balas.back(); // Pega a última bala do tambor
            balas.pop_back();         // Remove a bala do tambor
            numBalas--;
            return bala;
        } else {
            cout << "O tambor está vazio!" << endl;
            return false; // Retorna false se não houver balas no tambor
        }
    }

    // Retorna o número total de balas no tambor
    int numeroDeBalas() const {
        return numBalas;
    }
};

int main() {
    srand(time(0)); // Inicializa a semente do gerador de números aleatórios

    Revolver revolver(6); // Criando um tambor com capacidade para 6 balas
    revolver.adicionarBala(true); // Adicionando uma bala real ao tambor
    revolver.adicionarBala(false); // Adicionando uma bala falsa ao tambor

    revolver.girarTambor(); // Embaralhando as balas no tambor

    // Exemplo de como atirar e verificar se a bala é real
    if (revolver.atirar()) {
        cout << "Você foi atingido por uma bala real!" << endl;
    } else {
        cout << "Ufa, a bala era falsa!" << endl;
    }

    return 0;
}

