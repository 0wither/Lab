#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> chatHistory; // Vetor para armazenar o histórico do chat

    cout << "Bem-vindo ao Chat de Terminal!\n";

    while (true) {
        string userInput;
        cout << "> ";
        getline(cin, userInput); // Obter entrada do usuário

        // Verificar se o usuário deseja sair do chat
        if (userInput == "/sair") {
            cout << "Saindo do chat...\n";
            break;
        }

        // Adicionar mensagem ao histórico do chat
        chatHistory.push_back(userInput);
    }

    // Exibir o histórico do chat ao sair
    cout << "Histórico do Chat:\n";
    for (const string& message : chatHistory) {
        cout << message << "\n";
    }

    return 0;
}

