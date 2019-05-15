#include <iostream>
using namespace std;

void multiplos(int *vetor){

    int primeiro = vetor[0];
    int multiplos = 0;

    for (int i = 15; i > 0; i--){
        if (vetor[i] % primeiro == 0){
            cout << vetor[i] << " ";
            multiplos++;
        }
    }

    if(!multiplos){
        cout << -1 << endl;
    }

}

int main(){

    int vetor[15];

    for(int i = 0; i < 15; i++){
        cin >> vetor[i];
    }

    multiplos(vetor);

    return 0;
}