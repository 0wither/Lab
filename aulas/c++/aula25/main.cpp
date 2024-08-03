#include <iostream>
using namespace std;

int main () {
    int *p;
    int vetor[10];

    p = &vetor[0]; // p = vetor;
    *p = 10; // vai receber '10' no elemento da segunda posição
    cout << vetor[0] << '\n';

    p += 1; // adicione 1 para ir para a próxima posição
    *p = 20; // vai receber '20' no elemento da segunda posição
    cout << vetor[1] << '\n';

    return 0;
}

