#include <iostream>
#include <vector>

using namespace std;

// Função recursiva para busca binária
bool binarySearch(int x, const vector<int>& v, int p, int u) {
    // Caso base: se p é maior que u, o intervalo não contém elementos
    if (p > u) {
        return false;
    }

    // Calcula o índice do elemento do meio
    int meio = (p + u) / 2;

    // Se o elemento do meio é igual a x, encontramos o número
    if (v[meio] == x) {
        return true;
    }

    // Se x é menor que o elemento do meio, busca na metade esquerda
    if (x < v[meio]) {
        return binarySearch(x, v, p, meio - 1);
    }

    // Se x é maior que o elemento do meio, busca na metade direita
    return binarySearch(x, v, meio + 1, u);
}

int main() {
    // Exemplo de uso
    vector<int> vetor = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int numeroProcurado = 7;

    // Chama a função de busca binária
    bool encontrado = binarySearch(numeroProcurado, vetor, 0, vetor.size() - 1);

    // Exibe o resultado
    if (encontrado) {
        cout << "O número " << numeroProcurado << " foi encontrado no vetor." << endl;
    } else {
        cout << "O número " << numeroProcurado << " não foi encontrado no vetor." << endl;
    }

    return 0;
}
