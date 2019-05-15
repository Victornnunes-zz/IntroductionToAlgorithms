#include <iostream>
using namespace std;

void medias(float *vetor){

    int menor = vetor[0];
    int maior = 0;
    float media = 0;
    int dias = 0;

    for (int i = 0; i < 7; i++){
        if (vetor[i] < menor) {
            menor = vetor[i];
        }

        if (vetor[i] > maior){
            maior = vetor[i];
        }

        media += vetor[i];
    }

    media = media / 7;

    int j = 0;
    while (j < 7){
        if (vetor[j] < media){
            dias++;
        }

        j++;
    }

    cout << menor << endl;
    cout << maior << endl;
    cout << media << endl;
    cout << dias << endl;

}

void preencheVetor(float *vetor){

    for (int i = 0; i < 7; i++){
        cin >> vetor[i];
    }

}

int main(){

    float vetor[7];

    preencheVetor(vetor);

    medias(vetor);

    return 0;
}