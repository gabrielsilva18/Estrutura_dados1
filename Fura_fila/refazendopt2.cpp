#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <iostream>
using namespace std;

typedef struct lista{
        char letra;
        struct lista *prox;
}Lista;

Lista novo;
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
	
	novo.letra = letra;
	novo.prox = 0;

}

void furaFila(char letra, int pos){

	Lista novo_no;
    novo_no.letra = letra;

    if(pos == 0 || inicio == NULL){//lista esta vazia inserção no incio
    novo_no.prox = inicio;
    inicio = &novo_no;
    }

    anterior = NULL;
    atual = inicio;
    int i = 0;

    while (i < pos && atual != NULL)
    {
       anterior = atual;
       atual = atual->prox;
       i++;
    }

    anterior->prox = &novo_no;
    novo_no.prox = atual;
}




void mostrar(){
	atual = inicio;
	
	while(atual != NULL){
		printf("%c", atual->letra);
        atual = atual->prox;
	}
	
}

/*Funcionamento do metodo furafila:exemplo:
Início (inicio) -> [Nó 1] -> [Nó 2] -> [Nó 3] -> [Nó 4] -> [Nó 5] -> NULL

Aqui estão as etapas à medida que o loop avança:

Iteração 1:

-i = 0, atual = inicio (começamos no início).
Nenhuma ação é executada, continuamos para a próxima iteração.


Iteração 2:

-i = 1, atual agora aponta para [Nó 1] (próximo nó na lista).
anterior = inicio, pois é a primeira iteração, e ainda não temos um nó anterior.
Nenhuma ação é executada, continuamos para a próxima iteração.


Iteração 3:

-i = 2, atual agora aponta para [Nó 2] (próximo nó na lista).
anterior agora aponta para [Nó 1], que é o nó anterior.
Agora, estamos na posição em que queremos inserir o novo nó. O novo nó [Novo Nó] é inserido entre [Nó 1] e [Nó 2].
A lista após esta iteração será:

Início (inicio) -> [Nó 1] -> [Novo Nó] -> [Nó 2] -> [Nó 3] -> [Nó 4] -> [Nó 5] -> NULL

*/


/*MINHA DUVIDA: 
o que eu nao estou entendo e que parece que e criada uma nova posiçao para o novo no. ele estava entre 1 e 2 , mas nao tinha nenhuma posição vazia ali, como ele foi inserido?

RESPOSTA:
ChatGPT
Entendo a sua confusão. O que acontece na verdade é que os ponteiros de lista simplesmente apontam para o próximo nó na lista. 
Não é necessário criar explicitamente posições vazias para inserir um novo nó. 
Quando você insere um novo nó entre dois nós existentes, você está, na verdade, redirecionando os ponteiros para que apontem para o novo nó.

Aqui está o que aconteceu na inserção do [Novo Nó] entre [Nó 1] e [Nó 2]:

O ponteiro anterior que estava apontando para [Nó 1] passa a apontar para [Novo Nó].
O ponteiro proximo do [Novo Nó] passa a apontar para [Nó 2].
Basicamente, o [Novo Nó] foi inserido "entre" [Nó 1] e [Nó 2] ao redirecionar os ponteiros proximo do [Nó 1] para o [Novo Nó] e o ponteiro proximo do [Novo Nó] para o [Nó 2].
Assim, a lista simplesmente encadeia os nós em ordem, e o [Novo Nó] foi inserido nessa sequência, mantendo a continuidade dos nós na lista.

Não é necessário criar posições vazias explicitamente, pois a estrutura da lista é dinâmica, e a inserção de um novo nó entre dois nós é feita por meio da reconfiguração dos ponteiros. 
Espero que isso esclareça o processo.*/