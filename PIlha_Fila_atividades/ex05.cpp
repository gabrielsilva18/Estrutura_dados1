/*#include <iostream>
using namespace std;

struct Node {
    double data;
    Node* next;
};

struct Pilha {
    Node* top;
    int size;
};

Pilha criaPilha(int capacidade) {
    Pilha novaPilha;
    novaPilha.top = nullptr;
    novaPilha.size = 0;
    return novaPilha;
}

void empilha(double valor, Pilha* p) {
    Node* novoNode = new Node;
    novoNode->data = valor;
    novoNode->next = p->top;
    p->top = novoNode;
    p->size++;
}

double desempilha(Pilha* p) {
    if (p->size == 0) {
        exit(EXIT_FAILURE); // Trata o caso de tentar desempilhar de uma pilha vazia
    }

    Node* topoAntigo = p->top;
    double valorTopo = topoAntigo->data;

    p->top = topoAntigo->next;
    delete topoAntigo;
    p->size--;

    return valorTopo;
}

double topo(Pilha p) {
    if (p.size == 0) {
        exit(EXIT_FAILURE); // Trata o caso de tentar acessar o topo de uma pilha vazia
    }
    return p.top->data;
}

bool vaziap(Pilha p) {
    return p.size == 0;
}

int main() {
    Pilha P = criaPilha(100);

    empilha(8, &P);

    while (topo(P) > 0) {
        empilha(topo(P) / 2, &P);
    }

    while (!vaziap(P)) {
        cout << desempilha(&P) << endl;
    }

    return 0;
}
*/


/*COMO RESULTADO: o número 8 foi dividido por 2 sucessivamente, onde cada resultado dessas divisões era armazenado
no topo da pilha, isso até o resultado dessas divisões fossem maiores que 0*/