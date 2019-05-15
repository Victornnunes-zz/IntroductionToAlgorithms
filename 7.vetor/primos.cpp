#include <iostream>
using namespace std;

void primo(int *vetor){

    int divisores = 0;

    for (int i = 0; i < 9; i++){
        for (int j = vetor[i]; j > 0; j--){
            if (vetor[i] % j == 0){
                divisores++;
            }
        }
        
        if (divisores == 2){
            cout << vetor[i] << " " << i << endl;
        }
        divisores = 0;
    }
}

void preencheVetor(int *vetor){

    for (int i = 0; i < 9; i++){
        cin >> vetor[i];
    }
}

int main(){

    int vetor[9];

    preencheVetor(vetor);

    primo(vetor);

    return 0;
}