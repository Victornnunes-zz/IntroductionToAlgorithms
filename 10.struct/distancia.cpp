#include <iostream>
#include <cmath>
using namespace std;

struct ponto{
    int x;
    int y;
};

void distanciaPontos(ponto dados[]){
    int vetor[4];
    int menor;
    for (int i = 1; i < 5; i++){
        vetor[i - 1] = sqrt(pow((dados[i].x - dados[0].x), 2) + pow((dados[i].y - dados[0].y), 2)); 
    }
    menor = vetor[0];
    int indice = 0;
    for (int i = 0; i < 4; i++){
        if (vetor[i] < menor){
            indice = i;
        }
    }
    cout << dados[indice].x << " " << dados[indice].y;
}

void preenchePontos(ponto dados[]){
    for (int i = 0; i < 5; i++){
        cin >> dados[i].x >> dados[i].y;
    }
}

int main(){

    ponto dados[5];

    preenchePontos(dados);

    distanciaPontos(dados);

    return 0;
}