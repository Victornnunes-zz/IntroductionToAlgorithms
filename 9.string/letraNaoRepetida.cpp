#include <iostream>
#include <string>
using namespace std;

void confere(string palavra){
    
    int tamanho = palavra.length();
    bool vetor[tamanho];

    for (int i = 0; i < tamanho - 1; i++){
        for (int j = tamanho; j > 0; j--){
            if (palavra[i] == palavra[j]){
                vetor[i] = true;
            } else {
                vetor[i] = false;
            }
        }
    }

    int k = 0;
    bool achou = false;
    while(achou == false){
        if (vetor[k] == false){
            cout << palavra[k];
            achou = true;
        } else {
            k++;
        }
    }
}

int main(){

    string palavra;

    cin >> palavra;

    confere(palavra);

    return 0;
}