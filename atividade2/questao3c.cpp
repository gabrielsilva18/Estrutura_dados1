#include <iostream>
using namespace std;

typedef struct no {
    int item;
    struct no* prox;
} No;

int main() {
    // Criando o primeiro nó (n1)
    No *n1 = new No();
    n1->item = 10;
    n1->prox = NULL;

    // Criando o segundo nó (n2)
    No *n2 = new No();
    n2->item = 3;
    n2->prox = NULL;

    // Criando o terceiro nó (n3)
    No *n3 = new No();
    n3->item = 4;
    n3->prox = NULL;

    // Fazendo n1 apontar para n2, n2 apontar para n3 e n3 apontar para n1
    n1->prox = n2;
    n2->prox = n3;
    n3->prox = n1;

    // Imprimindo os elementos da lista encadeada
    No* p = n2;  // Começando do segundo nó (n2)
    while (p != NULL) {
        cout << p->item << endl;
        p = p->prox;
        if (p == n2) {
            break; // Evitar loop infinito
        }
    }

    // Liberando a memória alocada para os nós
    delete n1;
    delete n2;
    delete n3;

    return 0;
}