#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm> // para std::shuffle
#include <random> // para std::default_random_engine

int main() {
    // Inicializa a semente do gerador de números aleatórios
    std::srand(std::time(0));

    // Gera valores aleatórios para true_count e false_count
    int true_count = std::rand() % 6 + 1; // de 1 a 6
    int false_count = std::rand() % 6 + 1; // de 1 a 6

    std::cout << "Verdadeiros: " << true_count << std::endl;
    std::cout << "Falsos: " << false_count << std::endl;

    // Vetor para armazenar os valores booleanos
    std::vector<bool> valores_bool;

    // Preenche o vetor com valores true
    for (int i = 0; i < true_count; ++i) {
        valores_bool.push_back(true);
    }

    // Preenche o vetor com valores false
    for (int i = 0; i < false_count; ++i) {
        valores_bool.push_back(false);
    }

    // Embaralha os valores booleanos usando std::shuffle
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(valores_bool.begin(), valores_bool.end(), g);

    // Exibe os valores booleanos embaralhados
    std::cout << "Valores booleanos embaralhados: ";
    for (bool val : valores_bool) {
        std::cout << std::boolalpha << val << " ";
    }
    std::cout << std::endl;

    return 0;
}

