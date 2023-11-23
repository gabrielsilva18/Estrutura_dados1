#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <iostream>
using namespace std;

typedef struct lista{
        char letra;
        struct lista *prox;
}Lista;


Lista *novo= NULL;
Lista *inicio = NULL;
Lista *fim;
Lista *atual;
Lista *anterior;


void inserirLetra(char letra);
void furaFila(char letra, int pos);
void mostrar();

main(){
	int cont;
	char l;
   	do {
      	printf("\n\n1 - Inserir Letra ");
      	printf("\n2 - Furar a fila ");
      	printf("\n3 - Mostrar letras ");
      	printf("\n5 - Sair ");
      	printf("\nDigite a Opcao Desejada: ");
      	scanf("%d",&cont);

        switch(cont) {
         	case 1:
			 	printf("Digite uma letra: ");			 	
			 	cin>>l;
			 	inserirLetra(l); 	
				break;
         	case 2:
         		int pos;
			 	printf("Digite uma letra: ");
			 	cin>>l;
			 	
			 	printf("Digite a posicao: ");
				scanf("%d", &pos);
				
				
				break;
         	case 3:mostrar(); break;
         	case 5:break;
         	default: printf("Opcao invalida! tente de novo! ");
        }
        
        
      }while (cont != 5);		
		
}

void inserirLetra(char letra){
	novo = new Lista();
	novo->letra=letra;
	novo->prox=0;

}

void furaFila(char letra, int pos){
	
    novo = new Lista(); // Cria um novo nó
    novo->letra = letra; // Define a letra do novo nó

    if (pos == 0 || inicio == NULL) { // Caso especial: inserção no início ou lista vazia
        novo->prox = inicio; // O próximo do novo nó aponta para o que era o primeiro nó (pode ser NULL se a lista estava vazia).
        inicio = novo; // O novo nó agora é o primeiro nó da lista.
    } else {
        atual = inicio;
        anterior = NULL;
        int i = 0;

        // Percorre a lista até a posição desejada ou até o final
        while (i < pos && atual != NULL) { //se o atual for nulo, significa que a pos inserida é inválida
            anterior = atual; // Essa configuração nos permitirá inserir um novo nó entre anterior e atual, mantendo a ordem da lista
            atual = atual->prox; //entre anterior e atual cria-se um espaço vazio, NULL 
            i++; //o anterior->prox é o atual, o atual->prox é o posterior. e entre eles esta a posição desejada
        }

        // Insere o novo elemento na posição correta
        if (anterior != NULL) { //essa verificação pega o elemento anterior a esse espaço vazio criado
            anterior->prox = novo; //apontamos como proximo desse anterior o novo elemento, ou seja, jogamos o elemento para a posição anteriormente nula
        } else {
            inicio = novo; // Se anterior for NULL, significa que inserimos no início
        }
        novo->prox = atual;
    }
	
}

void mostrar(){
	atual = inicio;
	
	while(atual != NULL){
		printf("%c", atual->letra);
        atual = atual->prox;
	}
	

	
}
