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
void furaFila(int pos, char letra);
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
	novo = new Lista(); //é apenas um objeto de lista(um elemento), o objetivo é ligar este elemento a outros elementos(objetos diferentes) e formar uma lista encadeada
 	novo->letra=letra;
	novo->prox = 0;

}

void furaFila(int pos, char letra){
	inserirLetra(letra);
    novo->prox = NULL; 

	if (inicio == NULL || pos == 0) {
        // Se a lista está vazia ou a posição é 0, o novo elemento da lista se torna o primeiro
		//a linha abaixo serve para  para garantir que o novo elemento seja inserido corretamente no início da lista, independentemente de a lista já conter elementos ou estar vazia.
        novo->prox = inicio; // O próximo do novo elemento aponta para o que era o primeiro elemento (pode ser NULL se a lista estava vazia).
        inicio = novo; // O novo elemento agora é o primeiro elemento da lista

} else {
    Lista *atual = inicio; //criação do ponteiro atual para percorrer o elemento atual da lista, começando pelo início
    Lista *anterior = NULL; //criação do ponteiro que percorrerá os elementos anteriores aos atuais, e como não existe nenhum elemento antes do elemento inicial, ele começa em null
    int i = 0;

//percorre a lista
while (i < pos && atual != NULL) {
            anterior = atual; //atualizando o anterior 
            atual = atual->prox;//atualizando o atual para o proximo elemento
            i++;
        }

		 // Insere o novo elemento na posição correta
        if (anterior != NULL) { //por que se o anterior for nulo, estamos no inicio da lista
            anterior->prox = novo;//como se fosse atual = novo
        } else {
			 novo->prox = inicio;
            inicio = novo; // Se anterior for NULL, significa que inserimos no início ai fazemos a mesma coisa do primeiro if
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
//o que é um nó?
//resposta - nó se refere a um elemento de uma lista encadeada