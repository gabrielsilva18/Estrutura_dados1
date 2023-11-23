#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool estaBalanceada(const string & expressao) {
    stack<char> pilha;

    for (char caractere : expressao) {//percorrendo cada caractere da expressão
        if (caractere == '(' || caractere == '[' || caractere == '{') {
            // Se encontrar um caractere de abertura, empilha na pilha
            pilha.push(caractere);
        } else if (caractere == ')' || caractere == ']' || caractere == '}') {
            // Se encontrar um caractere de fechamento, verifica se a pilha não está vazia
            if (pilha.empty()) {
                return false; // Não há correspondência para este caractere de fechamento
            }

            // Verifica se o caractere de fechamento corresponde ao último caractere de abertura
            char topo = pilha.top();
            pilha.pop();

            if ((caractere == ')' && topo != '(') ||
                (caractere == ']' && topo != '[') ||
                (caractere == '}' && topo != '{')) {
                return false; // Os caracteres de abertura e fechamento não correspondem
            }
        }
    }

    // A expressão está balanceada se a pilha estiver vazia no final
    return pilha.empty();
}

int main() {
    string expressao1 = "[{ () ()}{}]"; // quando encontra um caractere de fechamento ele compara com o topo da pilha
    string expressao2 = "{[([{}])]}";
    string expressao3 = "{[(}])";
    string expressao4 = "{[) () (1)";

    cout << expressao1 << " está balanceada? " << (estaBalanceada(expressao1) ? "Sim" : "Não") << endl;
    cout << expressao2 << " está balanceada? " << (estaBalanceada(expressao2) ? "Sim" : "Não") << endl;
    cout << expressao3 << " está balanceada? " << (estaBalanceada(expressao3) ? "Sim" : "Não") << endl;
    cout << expressao4 << " está balanceada? " << (estaBalanceada(expressao4) ? "Sim" : "Não") << endl;

    return 0;
}
