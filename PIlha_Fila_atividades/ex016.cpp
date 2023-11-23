#include <iostream>
#include <vector>
using namespace std;

int soma_recursiva(vector<int> lista, int index) {
    //quando atingimos o final da lista
    if (index == lista.size()) {
        return 0;
    } else {
        // Chamada recursiva: soma o elemento atual com a soma do restante
        return lista[index] + soma_recursiva(lista, index++);//index++ serve para os proximos elementos da lista;
    }
}

int main() {
    // Exemplo de uso
    vector<int> minha_lista = {1, 2, 3, 4, 5};
    int resultado = soma_recursiva(minha_lista, 0);
    cout << "A soma dos elementos da lista e: " << resultado << endl;

    return 0;
}
