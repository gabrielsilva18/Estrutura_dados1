#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

int main() {
   string frase;
   cout << "Digite uma frase: ";
   getline(cin, frase);//armazena a frase(resposta) digitada na variável frase

   stack<char> pilha; //cria uma Pilha para receber valores char
   stringstream resultado;//é usada para realizar operações em strings de forma semelhante ao fluxo de entrada/saída, mas em memória.

    for (char caractere : frase) { //Loop que percorre cada caractere na frase.
        if (caractere != ' ') {
            // Se não for um espaço, empilhe o caractere na pilha
            pilha.push(caractere);
        } else {
            // Se for um espaço, desempilhe os caracteres e adicione ao resultado
            while (!pilha.empty()) {//a condição do while com o .empty é: 'enquanto a pilha não estiver vazia
                resultado << pilha.top(); //RESULTADO  recebe o topo da pilha, que a cada .pop, passa a ser outro caractere
                pilha.pop();
            }
            resultado << ' '; // Adicione o espaço ao resultado
        }
    }

    // Certifique-se de processar o que resta na pilha, ou seja, ver se a pilha ainda contem algum elemento 
    while (!pilha.empty()) {
        resultado << pilha.top();
        pilha.pop();
    }

   cout << "Frase invertida: " << resultado.str() <<endl;

    return 0;
}
