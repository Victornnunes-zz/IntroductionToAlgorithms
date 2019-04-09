#include <iostream>
using namespace std;
int main(){

    float numero;

    cin >> numero;

    if(numero >= 0){
        numero = numero*2;
    } else {
        numero = numero*3;
    }

    cout << numero;

    return 0;
}