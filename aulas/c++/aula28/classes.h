#ifndef CLASSES_H_INLUDED
#define CLASSES_h_INCLUED
#include <string>
#include <iostream>
class Veiculo {
public:

 int tipo;
 Veiculo(int tp); 
 void imprimir();

private:

int VelMax;
std::string nome;
int vel;
bool ligado;

};

Veiculo::Veiculo(int tp) { 
 tipo = tp;
if (tipo == 1) {
    nome = "carro";
    VelMax = 500;
}else if (tipo == 2) {
    nome = "moto";
    VelMax = 300;
} else if (tipo == 3) {
    nome = "navio";
    VelMax = 100;
} else if(tipo == 4) {
    nome = "aviao";
    VelMax = 700;
} else if(tipo == 5) {
    nome = "jato";
    VelMax = 900; 

}}

void Veiculo::imprimir() {
    std::cout << "velocidade Maxima: " << this -> VelMax << '\n';
}

#endif