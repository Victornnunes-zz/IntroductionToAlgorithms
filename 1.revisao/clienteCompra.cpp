#include <iostream>
#include <string>
using namespace std;

struct cliente {
    string nome;
    int conta;
};

struct compra {
    int codigoCompra;
    int valor;

};

struct conta {
    int codigo;
    int codigoCliente;
    struct compra contaCompra;
};

int main(){

    cliente dados[100];
    bool clientesCadastrados[100];
     

    return 0;
}