#include <iostream>
using namespace std;
int main(){

	int numero1, numero2;

	cin >> numero1 >> numero2;

	int menor, maior;

	if (numero1 > numero2){
		menor = numero2;
		maior = numero1;
	} else {
		menor = numero1;
		maior = numero2;
	}

	int aux;
	while (menor > 0){
		aux = menor; 
		menor = maior%aux;
		maior = aux;
	}

	cout << maior;

	return 0;
}