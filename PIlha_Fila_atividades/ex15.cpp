#include <iostream>
#include <queue>
#include <stack>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string frase;
    string outraFrase;
    int contador = 0;

    cout << "Digite uma frase: ";
    getline(cin, frase);

    cout << "Digite outra frase: ";
    getline(cin, outraFrase);

    queue<char> filaOriginal;
    stack<char> pilhaInversa;

    for (char caractere : frase) {
        if (toupper(caractere)) {
            filaOriginal.push(toupper(caractere));
        }
    }

    for (char caractere : outraFrase) {
        if (toupper(caractere)) {
            pilhaInversa.push(toupper(caractere));
        }
    }

    while (!filaOriginal.empty() && !pilhaInversa.empty()) {
        if (filaOriginal.front() == pilhaInversa.top()) {
            contador++;
        }
        filaOriginal.pop();
        pilhaInversa.pop();
    }

    if (contador == frase.length()) {
        cout << "As palavras são palíndromas" << endl;
    } else {
        cout << "As palavras NÃO são palíndromas" << endl;
    }

    return 0;
}
