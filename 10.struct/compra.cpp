#include <iostream>
#include <string>
#include <array>
using namespace std;

struct cliente{
    int codigo;
    string nome;
};

struct conta{
    int contaCodigo;
    int cliente;
};

struct compra{
    int codigoCompra;
    int contaCodigo;
    int valor;
};

void insereCliente(cliente dados[], bool vetorExiste[]){
    
}

int main(){

    cliente dados[100];
    conta dadosConta[100];
    compra dadosCompra[100];

    std::array<bool,100> vetorExiste;
    vetorExiste.fill(false);

    int entrada = 100;

    while (entrada != 0){
        cin >> entrada;

        if (entrada == 1) {
            insereCliente(dados, vetorExiste);
        }

    }

    return 0;
}