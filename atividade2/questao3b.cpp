#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct no {//criando um struct do tipo NO
    int item;
    struct no* prox; // criando um ponteiro que apontará para o próximo objeto da classse NO;
} No;

int main() {
    // Criando o primeiro nó (n1)
    No* n1 = (No*)malloc(sizeof(No));
    n1->item = 1; // -> acessa o atributo item do objeto n1 e atribui a ele o valor de 1
    n1->prox = NULL; // so não fiz o n1 apontar para n2 aqui pois o objeto n2 é criando so mais a frente do código

    // Criando o segundo nó (n2)
    No* n2 = (No*)malloc(sizeof(No));
    n2->item = 4;
    n2->prox = NULL;

    // Fazendo n1 apontar para n2
    n1->prox = n2;

    // Imprimindo os elementos da lista encadeada
    No* p = n1;  // Começando do primeiro nó (n1). criei um ponteiro p e atribuí a ele o endereço de memória de n1
    while (p != NULL) {
        cout << p->item << endl;
        p = p->prox;
    }

    // Lembre-se de liberar a memória alocada
    free(n1);
    free(n2);
//liberando a memória alocada para os nós n1 e n2 quando não precisar mais deles, garantindo que não ocorram vazamentos de memória.
    return 0;
}
