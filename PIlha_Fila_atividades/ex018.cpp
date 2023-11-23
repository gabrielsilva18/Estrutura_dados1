#include <iostream>
#include <vector>
using namespace std;

void listas_iguais_recursiva(const vector<int>& lista_A, const vector<int>& lista_B, int index, bool& resultado) {
    // Quando atingimos o final da lista
    if (index == lista_A.size()) {
        return;
    } else if (lista_A[index] != lista_B[index]) {
        resultado = false;
        return;  // Se encontramos elementos diferentes, podemos encerrar a comparação
    }

    // Chamada recursiva com o próximo índice
    listas_iguais_recursiva(lista_A, lista_B, index + 1, resultado);
}

int main() {
    // Exemplo de uso
    vector<int> lista_A = {1, 2, 3, 4, 5};
    vector<int> lista_B = {1, 2, 3, 4, 5};

    bool resultado = true;  // Inicializando resultado como true

    // Chamando a função para verificar se as listas são iguais
    listas_iguais_recursiva(lista_A, lista_B, 0, resultado);

    // Imprimindo o resultado
    if (resultado) {
        cout << "As listas são iguais." << endl;
    } else {
        cout << "As listas são diferentes." << endl;
    }

    return 0;
}
