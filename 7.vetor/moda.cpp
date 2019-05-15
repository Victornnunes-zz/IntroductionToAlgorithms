#include <iostream>
using namespace std;

int moda(int *vetor){
    int repete = 0;
    
    for (int i = 0; i < 6; i ++){
        for(int j = 1; j < 7; j++){
            if (vetor[i - 1] == vetor[j])
        }
    }
}

void preencheVetor(int *vetor){
    for (int i = 0; i < 7; i++){
        cin >> vetor[i];
    }
}

int main(){

    int vetor[7];

    preencheVetor(vetor);
    cout << moda(vetor);

    return 0;
}