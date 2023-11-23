#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída em C
#include <string.h>


int main() {
    char frase[20]; // Declaração de uma variável do tipo 'char'
    int contador_caracteres = 0;

    printf("Digite o valor:\n"); 
    scanf("%s", frase); // Lê uma string digitada pelo usuário e armazena na variável 'frase'

    // Calcula o número de caracteres usando strlen
    contador_caracteres = strlen(frase);

    printf("Número de caracteres: %d\n", contador_caracteres); // adicionando o formato %d para imprimir um inteiro

    return 0; // Indicando que o programa foi executado com sucesso
}
