#include <iostream>
using namespace std;



int main(){

    int tamanho;
    cin >> tamanho;

    int matriz[tamanho][tamanho];
    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){
            if (i % 2 == 0){
                int pivo;
                int k;

                for (int l = 1; l < tamanho; l++){
                    pivo = matriz[i][l];
                    k = l - 1;

                    while ((k >= 0) && (pivo < matriz[i][k])){
                        matriz[i][k + 1] = matriz[i][k];
                        k--;
                    }
                    matriz[i][k + 1] = pivo;
                }
            } else {
                int pivo;
                int k;

                for (int l = 1; l < tamanho; l++){
                    pivo = matriz[i][l];
                    k = l - 1;

                    while ((k >= 0) && (pivo > matriz[i][k])){
                        matriz[i][k + 1] = matriz[i][k];
                        k--;
                    }
                    matriz[i][k + 1] = pivo;
                }
            }
        }
    }

    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}