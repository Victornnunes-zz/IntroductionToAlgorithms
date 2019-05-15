#include <iostream>
using namespace std;

void repetido(int *vetor, int quantidade){
    int repetidos = 0;

    for (int i = 0; i < quantidade - 1; i++){
        if(vetor[i] == vetor[i + 1]){
            repetidos++;
        }
    }

    int vetorSemRepetidos[quantidade - repetidos];
    

}

int main(){

    int quantidade;

    cin >> quantidade;

    int vetor[quantidade];
    
    for (int i = 0; i < quantidade; i++){
        cin >> vetor[i];
    }

    repetido(vetor, quantidade);

    return 0;

}