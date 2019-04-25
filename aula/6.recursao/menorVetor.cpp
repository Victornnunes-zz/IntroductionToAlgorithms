#include <iostream>
using namespace std;

int menorVetor (int vetor[], int tamanho, int &menor, int &j){
    if (j == tamanho) {
        return menor;
    } else if (vetor[j] < menor){
        menor = vetor[j];
        j++;
        return menorVetor(vetor, tamanho, menor, j);
    } else {
        j++;
        return menorVetor(vetor, tamanho, menor, j);
    }
}

int main(){

    int tamanho;

    cin >> tamanho;

    int vetor[tamanho];

    int i = 0;
    while(i < tamanho){
        cin >> vetor[i];

        i++;
    }

    int menor = vetor[0];
    int j = 0;

    menorVetor(vetor, tamanho, menor, j);

    cout << menor << endl;

    return 0;
}
