#include <iostream>
using namespace std;
int main(){

    int quantidade;

    cin >> quantidade;

    int matriz[quantidade][quantidade];

    int numero;
    int menor = 99999;

    for (int i = 0; i < quantidade; i++){
        for (int j = 0; j < quantidade; j++){
            cin >> numero;
            if(numero < menor) {
                menor = numero;
            }
        }
    }

    cout << menor;

    return 0;
}