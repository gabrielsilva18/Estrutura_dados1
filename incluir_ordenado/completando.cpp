#include <iostream>
using namespace std;

const int MAX_ALUNOS = 30;

struct Aluno {
    int mat;
    string nome;
};

Aluno lista[MAX_ALUNOS];
int tamanho = 0;  // Vari�vel para controlar o tamanho atual da lista

// Fun��o para incluir um aluno desordenado na lista
void incluirDesordenado(Aluno e) {
    if (tamanho < MAX_ALUNOS) {
        lista[tamanho] = e;
        tamanho++;
        cout << "Aluno inclu�do com sucesso!" << endl;
    } else {
        cout << "A lista est� cheia. N�o � poss�vel incluir mais alunos." << endl;
    }
}

void incluirOrdenadomatricula(Aluno e){
	
		int aux = 0;
		if (tamanho == 0){
			lista[tamanho] = e;
			tamanho++;
		}
		else{
		
		  while ((aux < tamanho) && (lista[aux].mat < e.mat)) { 			
				aux++; //auxiliar e incrementado até achar a pos em que o novo aluno e ficará		
			}			
			// Deslocando os alunos para abrir espaço para o novo aluno
			for (int i = tamanho; i > aux; i--) {
				lista[i] = lista[i - 1]; //exemplo: o elmento na pos 30 receb o da pos 29.
			}
			lista[aux] = e; // Insira o novo aluno na posição correta
			tamanho++; // Aumente o tamanho da lista
		}	
		
		
}
	
	


// Fun��o para procurar um aluno pelo n�mero de matr�cula e retornar sua posi��o
int procura(int mat) {
    for (int i = 0; i < tamanho; i++) {
        if (lista[i].mat == mat) {
            return i;  // Retorna a posi��o do aluno
        }
    }
    return -1;  // Retorna -1 se o aluno n�o for encontrado
}

// Fun��o para mostrar os dados de um aluno na tela
void mostrar(int pos) {
    if (pos >= 0 && pos < tamanho) {
        cout << "Matr�cula: " << lista[pos].mat << ", Nome: " << lista[pos].nome << endl;
    } else {
        cout << "Posi��o inv�lida." << endl;
    }
}

// Fun��o para mostrar todos os alunos da lista
void mostra() {
    cout << "Lista de Alunos:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "Matr�cula: " << lista[i].mat << ", Nome: " << lista[i].nome << endl;
    }
}

// Estrat�gia 1: Remover um aluno substituindo-o pelo �ltimo aluno da lista
void remover00(int mat) {
    int pos = procura(mat);
    if (pos != -1) {
        lista[pos] = lista[tamanho - 1];  // Substitui o aluno pelo �ltimo da lista
        tamanho--;
        cout << "Aluno removido com sucesso!" << endl;
    } else {
        cout << "Aluno n�o encontrado." << endl;
    }
}

void remover01(int mat){
	int pos = procura(mat);
	if (pos==-1){
		cout<< "Aluno nao encontrado!!"<<endl;
	}
	else{
		int i=0;
		while (i<(tamanho-1)){
			lista[i]=lista[i+1];
			i++;			
		}
		tamanho--;
		
	}
	
	
}

int main() {
	Aluno novo;
	novo.mat=10;
	novo.nome="maria";
	incluirOrdenadomatricula(novo);
	
    Aluno novo2;
	novo2.mat=8;
	novo2.nome="katia";
	incluirOrdenadomatricula(novo2);
	
    Aluno novo3;
	novo3.mat=9;
	novo3.nome="ana";
	incluirOrdenadomatricula(novo3);
	mostra();
	
  }

    

