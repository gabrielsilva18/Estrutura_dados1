#include <iostream>
using namespace std;

typedef struct aluno {
    int mat;
    string nome;
} Aluno;

Aluno lista[30];
int tamanho = 0;

void incluirDesordenado(Aluno aluno) {
    if (tamanho < 30) {
        lista[tamanho] = aluno;
        tamanho++;
        cout << "Aluno incluido com sucesso!" << endl;
    } else {
        cout << "A lista esta cheia. Nao e possivel adicionar mais alunos." << endl;
    }
}

// Retorna a posicao do elemento procurado
int procura(int mat) {
    for (int i = 0; i < 30; i++) { // Usando < em vez de <= para percorrer o vetor corretamente
        if (lista[i].mat == mat) {
            return i; // Retorna a posicao quando encontrar o elemento
        }
    }
    return -1; // Retorna -1 se o elemento nao for encontrado
}

// Recebe a posicao e imprime o elemento na tela
void mostrar(int pos) {
    cout << "Matricula: " << lista[pos].mat << endl;
    cout << "Nome: " << lista[pos].nome << endl;
}

// Mostra TODOS os elementos da lista
void mostra() {
    for (int i = 0; i < tamanho; i++) { // Usando tamanho para limitar a exibicao aos elementos da lista
        cout << "Matricula: " << lista[i].mat << endl;
        cout << "Nome: " << lista[i].nome << endl;
    }
}

// Estrategia 1: colocar o ultimo elemento da lista na posicao do elemento removido
void remover00(int mat) {
    int posicao = procura(mat); // Encontre a posicao do aluno com a matricula especificada

    if (posicao != -1) { // Se o aluno com a matricula especificada foi encontrado
        lista[posicao] = lista[tamanho - 1]; // Substitua o elemento na posicao pela ultima posicao da lista
        tamanho--; // Diminua o tamanho da lista em um
        cout << "Aluno removido com sucesso!" << endl;
    } else {
        cout << "Aluno com matricula " << mat << " nao encontrado na lista." << endl;
    }
}
//estratégia 2: mover TODOS os elementos que estão APÓS  o elemento que deve ser removido UMA POSIÇÃO A FRENTE.
void remover01(int mat){
    int posicao = procura(mat); // Encontre a posicao do aluno com a matricula especificada
	
	 if (posicao != -1) { // Se o aluno com a matricula especificada foi encontrado
       for (int i = posicao; i < tamanho - 1; i++) {
            lista[i] = lista[i + 1]; // Move todos os elementos após a posição um passo para frente, numa lista "frente" significa mais perto da posição 0
        }
    tamanho--;
        cout << "Aluno removido com sucesso!" << endl;
    } else {
        cout << "Aluno com matricula " << mat << " nao encontrado na lista." << endl;
    }
}
