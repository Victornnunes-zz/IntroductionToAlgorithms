#include <iostream>
using namespace std;
int main(){

    int tamanhoMaximo;

    cin >> tamanhoMaximo;

    int linha = 1;

    for(int i = 1; i <= tamanhoMaximo; i++){
        if (i == linha){
            for (int j = 1; j <= linha; j++){
                cout << j;
            }
            for (int k = linha-1; k >= 1; k--){
                cout << k;
            }
            cout << endl;
        }
        linha ++;
    }
}