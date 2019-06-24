#include <iostream>
using namespace std;

void limite(int quantidade, float valores[], float valoresAbsolutos[], float diferenca){
    for (int i = 0; i < quantidade; i++){
        if (valoresAbsolutos[i] <= diferenca){
            cout << valores[i] << " ";
        }
    }
}

void vetorAbsoluto(int quantidade, float valores[], float valoresAbsolutos[], float media){
    for (int i = 0; i < quantidade; i++){
        media += valores[i];
    }
    media /= quantidade;
    cout << media << endl;

    for (int i = 0; i < quantidade; i++){
        if (media > valores[i]){
            valoresAbsolutos[i] = media - valores[i];
        } else {
            valoresAbsolutos[i] = valores[i] - media;
        }
    }

    for (int j = 0; j < quantidade; j++){
        cout << valoresAbsolutos[j] << " ";
    }
    cout << endl;
}

void preencheVetor(int quantidade, float valores[]){
    for (int i = 0; i < quantidade; i++){
        cin >> valores[i];
    }
}

int main(){

    int quantidade;
    cin >> quantidade;

    float valores[quantidade];

    preencheVetor(quantidade, valores);
    
    float diferenca;
    cin >> diferenca;

    float media = 0;
    float valoresAbsolutos[quantidade];
    vetorAbsoluto(quantidade, valores, valoresAbsolutos, media);

    limite(quantidade, valores, valoresAbsolutos, diferenca);

    return 0;
}