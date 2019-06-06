#include <iostream>
using namespace std;

void exibeVetor(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        cout << vetor[i] << endl;
    }
}

void selectionSort(int vetor[], int tamanho){
    int menor;
    int aux;
    for (int i = 0; i < tamanho-1; i++) {
   	    menor = i;
   	    for (int j = i + 1; j < tamanho; j++) {
   		    if (vetor[j] < vetor[menor]){
   			    menor = j;
   		    }
   	    }
   	    aux = vetor[i];
   	    vetor[i] = vetor[menor];
   	    vetor[menor] = aux;
    }
}

void preencheVetor(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        cin >> vetor[i];
    }
}

int main(){

    int tamanho;
    cin >> tamanho;

    int vetor[tamanho];

    preencheVetor(vetor, tamanho);

    selectionSort(vetor, tamanho);

    exibeVetor(vetor, tamanho);

    return 0;
}