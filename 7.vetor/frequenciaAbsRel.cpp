#include <iostream>
using namespace std;

void frequencias(int *vetor){

    int vetorNotas[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float vetorFrequencias[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < 80; i++){
        for (int j = 0; j < 11; j++){
            if (vetor[i] == vetorNotas[j]){
                vetorFrequencias[j]++;
            }
        }
    }

    for (int k = 0; k < 11; k++){
        cout << vetorNotas[k] << " " << vetorFrequencias[k] << " " << vetorFrequencias[k] / 80 << endl;
    }
}

int main(){

    int vetor[80];

    for (int i = 0; i < 80; i++){
        cin >> vetor[i];
    }

    frequencias(vetor);

    return 0;
}