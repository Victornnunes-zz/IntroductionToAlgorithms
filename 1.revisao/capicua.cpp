#include <iostream>
using namespace std;

void inverter(int numero){
    int aux = numero;
    int i = 0;
    int inverso;
    while (aux > 0){
        aux = numero%(pow(10, i+1));
        inverso = aux
    }
}

int main() {

    int numero;
    cin >> numero;

    inverter(numero);

    return 0;
}