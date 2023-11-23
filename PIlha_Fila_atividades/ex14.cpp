#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<char> Fila;

    for(int i = 0; i <= 3; i++){
        Fila.push('A' + i); //um loop para somar o index ao caractere 'A' para assim a fila receber outras letras da tabela Ascii
        
    }
     while (!Fila.empty())
        {
          cout << Fila.front() << endl; //Desenpilhando uma pilha, para assim mostar todos os elementos da mesma
          Fila.pop();
        }

    queue<char>().swap(Fila);
}

/*Saída: 
A
B
C
D
*/
