#include <iostream>
using namespace std;

void encontraElemento(char *vetor, int quantidade){
    char elementoBuscado;

    cin >> elementoBuscado;
    
    bool encontrado = false;
    for (int i = 0; i < quantidade; i++){
        if(vetor[i] == elementoBuscado){
            cout << i << " ";
            encontrado = true;
        }
    }

    if(!encontrado) cout << -1 << endl;
}

void preencheVetor(char *vetor, int quantidade){
    for (int i = 0; i < quantidade; i++){
        cin >> vetor[i];
    }
}

int main(){

    int quantidade;

    cin >> quantidade;

    char vetor[quantidade];

    preencheVetor(vetor, quantidade);

    encontraElemento(vetor, quantidade);

    return 0;
}