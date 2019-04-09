#include <iostream>
using namespace std;
int main(){

    int numero;

    cin >> numero;

    if(numero % 2 == 0){
        numero = numero*5;
    } else {
        numero = numero*8;
    }

    cout << numero;

    return 0;
}