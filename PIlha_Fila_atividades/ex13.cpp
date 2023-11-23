#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<int> Fila;

    // enfileira (1, F);
    Fila.push(1);

    // enfileira (2, F);
    Fila.push(2);

    // enfileira (3, F);
    Fila.push(3);

    // enfileira (desenfileira (F), F);
    Fila.push(Fila.front());//acrescento o elemento F no final
    Fila.pop(); //tiro o elemento F do início

    // enfileira (desenfileira (F), F);
    Fila.push(Fila.front());
    Fila.pop();

    // printf("%d\n", desenfileira (F));
    printf("%d\n", Fila.front());
    Fila.pop();

    return 0;
}

/*Resultado = 3*/
/*O código vai adicionando o primeiro elemento(primeiro que entrou) a ultima posição e vai apagando esse elemento da posição anterior*/