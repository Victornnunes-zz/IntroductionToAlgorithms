#include <iostream>
#include <string>
using namespace std;

void confereListas(string primeiraLista[], int quantidadePrimeiraLista, string segundaLista[], int quantidadeSegundaLista){
    int itens = 0;
    for (int i = 0; i < quantidadePrimeiraLista; i++){
        for (int j = 0; j < quantidadeSegundaLista; j++){
            if (primeiraLista[i] == segundaLista[j]){
                cout << primeiraLista[i] << endl;
                itens++;
            }
        }
    }
    if (itens == 0){
        cout << "NADA" << endl;
    }
}

void preencheSegundaLista(string segundaLista[], int quantidadeSegundaLista){
    string itemSegundaLista;
    for (int i = 0; i < quantidadeSegundaLista; i++){
        cin >> itemSegundaLista;
        segundaLista[i] = itemSegundaLista;
    }
}

void preenchePrimeiraLista(string primeiraLista[], int quantidadePrimeiraLista){
    string item;
    for (int i = 0; i < quantidadePrimeiraLista; i++){
        cin >> item;
        primeiraLista[i] = item;
    }
}

int main(){

    int quantidadePrimeiraLista;

    cin >> quantidadePrimeiraLista;

    string primeiraLista[quantidadePrimeiraLista];

    preenchePrimeiraLista(primeiraLista, quantidadePrimeiraLista);

    int quantidadeSegundaLista;

    cin >> quantidadeSegundaLista;

    string segundaLista[quantidadeSegundaLista];

    preencheSegundaLista(segundaLista, quantidadeSegundaLista);

    confereListas(primeiraLista, quantidadePrimeiraLista, segundaLista, quantidadeSegundaLista);

    return 0;
}