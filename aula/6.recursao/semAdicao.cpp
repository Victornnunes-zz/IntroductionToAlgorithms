#include <iostream>
using namespace std;

int soma(int &n, int resultado);

int sucessor (int &n, int resultado){
    n++;
    return soma(n, resultado);
}

int antecessor (int &n, int resultado){
    n--;
    return soma(n, resultado);
}

int soma (int &n, int resultado){
    if (n == resultado){
        return n;
    } else if (resultado < 0){
        return antecessor(n, resultado);
    } else {
        return sucessor(n, resultado);
    }
}


int main(){
    int numero1, numero2;
    cin >> numero1 >> numero2;

    int resultado = numero1 + numero2;

    int n = 0;

    soma(n, resultado);

    cout << n << endl;

    return 0;
}
