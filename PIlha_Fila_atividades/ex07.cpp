#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int main() {
    char sequencia[100];
    stack<int> Pilha_A;
    stack<int> Pilha_B;

    cout << "Digite uma lista de números separados por um espaço: ";
    cin.getline(sequencia, sizeof(sequencia));

    stringstream numeros(sequencia);

    int numero;
    while (numeros >> numero) {
        Pilha_A.push(numero);
    }

    // Organizar a pilha A usando a pilha B
    while (!Pilha_A.empty()) {
        int temp = Pilha_A.top();
        Pilha_A.pop();

        while (!Pilha_B.empty() && Pilha_B.top() > temp) {
            Pilha_A.push(Pilha_B.top());
            Pilha_B.pop();
        }

        Pilha_B.push(temp);
    }

    // Descarregar e exibir os itens da Pilha_B
    cout << "Pilha A ordenada:" << endl;
    while (!Pilha_B.empty()) {
        cout << Pilha_B.top() << " ";
        Pilha_B.pop();
    }

    cout << endl;

    return 0;
}
