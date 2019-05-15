#include <iostream>
using namespace std;

void divisao(int maiorNumero, int *vetor){
     
    for (int i = 0; i < 15; i++){
        vetor[i] = vetor[i] / maiorNumero;
        cout << vetor[i] << " "; 
    }
}

void maior(int *vetor){
    int maiorNumero = 0;
    
    for (int i = 0; i < 15; i++){
        if (vetor[i] > maiorNumero){
            maiorNumero = vetor[i];
        }
    }
    
    divisao(maiorNumero, vetor);
}

void preenche(int *vetor){
    for (int i = 0; i < 15; i++){
        cin >> vetor[i];
    }
}

int main(){

    int vetor[15];

    preenche(vetor);
    maior(vetor);

    return 0;
}