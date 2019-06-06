#include <iostream>
using namespace std;

void selectionSort(int vetor[], int tamanho){
    int maior;
    int aux;
   for (int i = tamanho - 1; i > 0; i--){
       maior = i;
       for (int j = i - 1; j >= 0; j--){
           if (vetor[j] > vetor[maior]){
               maior = j;
           }
       }
       aux = vetor[i];
       vetor[i] = vetor[maior];
       vetor[maior] = aux;

       for (int k = 0; k < tamanho; k++){
           cout << vetor[k] << " ";
       }
       cout << endl;
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
    
    return 0;
}