#include <iostream>
using namespace std;
int main(){

    int vet[3];

    int menor;
    int segundoMenor;
    int maior;

    for(int i = 0; i < 3; i++){
        cin >> vet[i];
        if(vet[i] < menor){
            menor = vet[i];
        } else if (vet[i] > menor && vet[i] < segundoMenor){
            segundoMenor = vet[i];
        } else {
            maior = vet[i];
        }
    }

    cout << maior << endl << segundoMenor << endl << menor;

    

    return 0;
}