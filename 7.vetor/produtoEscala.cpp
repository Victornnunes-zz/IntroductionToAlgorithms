#include <iostream>
using namespace std;
float produto(float *vetorA, float *vetorB, float quantidade){
    float somatorio = 0;

    for (int i = 0; i < quantidade; i++){
        somatorio = somatorio + vetorA[i] * vetorB[i];
    }

    return somatorio;
}

void preenche(float *vetorA, float *vetorB, int quantidade){

    for (int i = 0; i < quantidade; i++){
        cin >> vetorA[i];
    }

    for (int i = 0; i < quantidade; i++){
        cin >> vetorB[i];
    }

    cout << produto(vetorA, vetorB, quantidade) << endl;

}

int main(){

    int quantidade;
    float vetorA[quantidade];
    float vetorB[quantidade];

    cin >> quantidade;

    preenche(vetorA, vetorB, quantidade);

    return 0;
}