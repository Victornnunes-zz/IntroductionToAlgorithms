#include <iostream>
using namespace std;

int main(){
    int codigo;
    cin >> codigo;
    
   int tamanho = 1;
   int numero = 0;
   while (numero < codigo){
       int i = 0;
       while (i < tamanho){
           numero++;
           i++;
        }
        
        if (numero < codigo){
            tamanho++;
        }
   }

    int tropa[tamanho][tamanho];

    int aux = 0;
    for (int i = 0; i < tamanho; i++){
        int j = 0;
        while (j <= i){
            aux = aux + 1;
            tropa[i][j] = aux;
            j++;
        }
        int k = j;
        while (k < tamanho){
            tropa[i][k] = 0;
            k++;
        }
    }

    int posicao = 0;
    for (int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            if (tropa[i][j] == codigo){
                posicao = i;
            }
        }
    }

    for (int i = 0; i < tamanho; i++){
        if (i < tamanho - 1){
            cout << tropa[posicao][i] << "--";
        } else {
            cout << tropa[posicao][i];
        }
        
    }

    return 0;
}