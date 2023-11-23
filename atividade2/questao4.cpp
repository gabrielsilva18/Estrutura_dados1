#include <iostream>
#include <string>
using namespace std;

typedef struct pessoa {
    string nome;
    int cpf;
    struct pessoa *prox;
} Pessoa; //Pessoa será apelido para struct pessoa,

int main() {
    // Criando o primeiro nó (n1)
    Pessoa *Fabio = new Pessoa(); //cria-se um ponteiro para armazenar o end do novo objeto pessoa, criado
    Fabio->nome = "Fabio"; //strings são definidas por aspas duplas.
    Fabio->cpf = 111;
    Fabio->prox = NULL;

    // Criando o segundo nó (n2)
    Pessoa *Katia = new Pessoa();
    Katia->nome = "Katia";
    Katia->cpf = 222;
    Katia->prox = NULL;

    // Criando o terceiro nó (n3)
    Pessoa *Jonatas = new Pessoa();
    Jonatas->nome = "Jonatas";
    Jonatas->cpf = 444;
    Jonatas->prox = NULL;

    // Fazendo n1 apontar para n2, n2 apontar para n3 e n3 apontar para n1
    Fabio->prox = Katia;
    Katia->prox = Jonatas;
    Jonatas->prox = Fabio;

    // Imprimindo os elementos da lista encadeada
    Pessoa* p = Jonatas;  // Começando do segundo nó (n2)
    while (p != NULL) {
      cout << "Nome: " << p->nome << ", CPF: " << p->cpf << endl;
        p = p->prox;
        if (p == Jonatas) {
            break; // Evitar loop infinito
        }
    }

    // Liberando a memória alocada para os nós
    delete Fabio;
    delete Katia;
    delete Jonatas;

    return 0;
}