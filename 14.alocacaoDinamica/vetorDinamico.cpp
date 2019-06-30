#include <iostream>
using namespace std;

void preencheVetor(int vetor[], int quantidade, int entrada){
    vetor[quantidade - 1] = entrada;
}

void realoca(int vetor[], int &tamanho){
    int auxTamanho = tamanho;
    int aux[tamanho];
    for (int i = 0; i < tamanho; i++){
        aux[i] = vetor[i];
    }
    delete[] vetor;

    tamanho = tamanho + 5;
    vetor = new int[tamanho];

    for (int j = 0; j < auxTamanho; j++){
        vetor[j] = aux[j];
    }

}

int main(){

    int tamanho = 5;
    int *vetor;
    vetor = new int[tamanho];

    int entrada = 1;
    int quantidade = 0;

    int realoc = 0;

    while (entrada > 0){
        cin >> entrada;
        if (entrada > 0){
            if (quantidade < tamanho){
                quantidade++;
                preencheVetor(vetor, quantidade, entrada);
            } else {
                realoca(vetor, tamanho);
                realoc++;
                quantidade++;
                preencheVetor(vetor, quantidade, entrada);
            }
        }
    }

    for (int j = 0; j < tamanho; j++){
        cout << vetor[j] << " ";
    }
    cout << endl;
    delete[] vetor;

    cout << tamanho << endl;

    cout << realoc << endl;



    return 0;
}