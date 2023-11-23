#include <iostream>
#include <vector>
using namespace std;

void substituicao_recursiva(int x,int Y,vector<int>& lista, int index) { //passo a lista como referencia para ela ser modificada diretamente
    //quando atingimos o final da lista
    if (index == lista.size()) {
        return;
    } else if(lista[index] == x) {
        lista[index] = Y;
}
  substituicao_recursiva(x, Y, lista, index + 1);
}

int main() {
    // Exemplo de uso
    vector<int> minha_lista = {1, 2, 1, 4, 1};

    // Chamando a função para substituir os elementos
    substituicao_recursiva(1, 2, minha_lista, 0);

    // Imprimindo a lista após a substituição
    cout << "A lista com o elemento substituído é: ";
    for (int i = 0; i < minha_lista.size(); ++i) {
        cout << minha_lista[i] << " ";
    }
    cout << endl;

    return 0;
}