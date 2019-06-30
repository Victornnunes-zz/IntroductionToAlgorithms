#include <iostream>
using namespace std;

int main(){

    int **ponteiroMatriz;

    int tamanho;
    cin >> tamanho;

    ponteiroMatriz = (int **) malloc(tamanho * sizeof(sizeof(int *)));

    int i = tamanho;
    for (int j = 0; j < tamanho; j++){
        ponteiroMatriz[j] = (int *) malloc(i * sizeof(int));
        i--;
    }

    int final = tamanho;
    float media[tamanho];
    float aux = 0;

    for (int k = 0; k < tamanho; k++){
        int l = 0;
        int quantidade = 0;
        while (l < final){
            cin >> ponteiroMatriz[k][l];
            aux += ponteiroMatriz[k][l];
            quantidade++;
            l++;
        }
        media[k] = aux / quantidade;
        aux = 0;
        final -= 1;
    }

    for (int m = 0; m < tamanho; m++){
        cout << media[m] << endl;
    }

    return 0;
}