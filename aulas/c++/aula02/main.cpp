#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {

int vida=0;//10,25
char letra='B';//apenas uma letra 'B'
double decimal1=2.4; //2.499999999 
float decimal2=2.5;//2.5
bool vivo=true;
string nome="Nicolas"; //nome 

//atribuindo
cout << "adicione um valor a int: "; cin >> vida;
cout << "Atribua uma letra: "; cin >> letra;
cout << "Adicione um valor a double:"; cin >> decimal1;
cout << "Adicone um valor a float: "; cin >> decimal2;
cout << "adicine uma valor a string: "; cin >> nome;


cout << "----------------------------------------" << "\n";
cout << "resultado:" << "\n";

//printando
cout << "Vida:" << vida << "\n";
cout << "letra:" << letra << "\n";
cout << "double:" << decimal1 << "\n";
cout << "float:" << decimal2 << "\n";
cout << "boolean:" << vivo<< "\n";
cout << "string:" << nome << "\n";
return 0;
}
