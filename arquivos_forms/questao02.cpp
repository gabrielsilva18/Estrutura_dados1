#include <iostream>
#include <string.h>

using namespace std;

typedef struct no {
    int cod;
    char nome[20];
}No;

No vetor[10];

int main(){
    int pos = 0;
    No primeiro = {1, 'ana maria'};
    No segundo = {2, 'carla gomes'};
    

}
//Preencha a função que inclui elementos na última posição OCUPADA do “vetor”.
void incluir(No novo){
    
    for(int i = 0; i < 10; i++){

        if(vetor[i].cod == 0){
            vetor[i] = novo;
        }  
        else{
        cout << "A lista está cheia!, Não e possível adicionar mais elementos" << endl;
    }
    };
  
}

int procura(int mat){
     

    for(int i = 0; i < 10; i++){
        if(vetor[i].cod == mat){
           return i;
        }
    }

    return -1;
}

void mostra(){
    

    for(int i = 0; i < 10; i++){

        if(vetor[i].cod != 0){
            cout << vetor[i].cod << vetor[i].nome << endl;
        }
    }
}

int remove(int posicao){
    
   int tamanho = 10;

    for(int i = 0; i < tamanho; i ++){
        if(i == posicao){
            vetor[i] = vetor[10];
            tamanho = tamanho - 1;

            return 1;
        }
    }

    return -1;
}