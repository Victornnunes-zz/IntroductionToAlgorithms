#include <iostream>
using namespace std;

void ordenaVetorDireitoInsertion(int vetor[], int metade, int quantidade){
    int pivo;
    int j;
    for (int i = metade + 1; i < quantidade; i++){
        pivo = vetor[i];
        j = i - 1;
        while ((j >= 0) && (pivo > vetor[j])){
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = pivo;
    }
}

void ordenaVetorEsquerdoBubble(int vetor[], int metade){
    int aux;
    for (int i = 0; i < metade - 1; i++){
        for (int j = 0; j < metade - 1 - i; j++){
            if (vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
}

void preencheVetor(int vetor[], int quantidade){
    for (int i = 0; i < quantidade; i++){
        cin >> vetor[i];
    }
}

int main(){

    int quantidade;
    cin >> quantidade;

    int metade;
    if(quantidade % 2 == 0){
        metade = (quantidade/2) - 1;
    } else {
        metade = (quantidade / 2) + 1;
    }

    int vetor[quantidade];

    preencheVetor(vetor, quantidade);
    ordenaVetorEsquerdoBubble(vetor, metade);
    ordenaVetorDireitoInsertion(vetor, metade, quantidade);

    for (int i = 0; i < quantidade; i++){
        cout << vetor[i] << " ";
    }

    return 0;
}