/*#include <stdio.h> 
#include "../ed/pilha.h" // pilha de int 
int main(void) { 
Pilha P = pilha (3); 
empilha (1, P); 
empilha (2, P); 
printf("%d\n", desempilha (P)); 
printf("%d\n", desempilha (P)); 
printf("%d\n", desempilha (P)); 
return 0; 
} 

O que acontece ao rodar esse código? 
R -> Ao desempilhar a pilha retira-se o elemento do topo da mesma, e ao fazer isso 3 vezes numa pilha com 3 elementos
a pilha passará a se tornar vazia, ou seja ao rodar o código veriamos a pilha agora sem nenhum elemento!
*/