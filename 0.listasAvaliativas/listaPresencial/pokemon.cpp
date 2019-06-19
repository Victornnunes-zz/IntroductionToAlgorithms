#include <iostream>
using namespace std;

int main(){

    int tamanhoMatriz;
    cin >> tamanhoMatriz;
    int matriz[tamanhoMatriz][tamanhoMatriz];

    int distancia;
    cin >> distancia;

    int meio = tamanhoMatriz/2;

    for (int i = 0; i < tamanhoMatriz; i++){
        for (int j = 0; j < tamanhoMatriz; j++){
            cin >> matriz[i][j];
        }
    }

    int soma = 0;

    int lateralEsquerda = matriz[meio][meio] - distancia;
    int lateralDireita = matriz[meio][meio] + distancia;
    for (int i = distancia - 1; i < tamanhoMatriz; i++){
        soma += matriz[i][lateralEsquerda] + matriz[i][lateralDireita];
    }
    for (int i = meio )

    return 0;
}