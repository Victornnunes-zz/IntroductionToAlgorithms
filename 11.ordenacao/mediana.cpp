#include <iostream>
using namespace std;

float mediana(float vetor[], int tamanho){
    float valorMediana;

    if (tamanho % 2 == 0){
        valorMediana = (vetor[tamanho/2 - 1] + vetor[tamanho/2]) / 2;
    } else {
        valorMediana = (vetor[tamanho/2]);
    }

    return valorMediana;
}

void insertionSort(float vetor[], int tamanho){
    float pivo;
    int j;
    for (int i = 1; i < tamanho; i++){
        pivo = vetor[i];
        j = i - 1;
        
        while ((j >= 0) && (pivo < vetor[j])){
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = pivo;
    }
}

int main(){

    int tamanho = 0;
    
    float vetor[20] = {0};

    int posicao = 0;
    float aux = 0;
    while (aux != -1){
        cin >> aux;
        if (aux != -1){
            vetor[posicao] = aux;
            tamanho++;
            posicao++;
        }
    }

    insertionSort(vetor, tamanho);

    cout << mediana(vetor, tamanho);

    return 0;
}