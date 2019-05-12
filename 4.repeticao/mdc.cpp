#include <iostream>
using namespace std;
int main(){

	int numero1;
	int numero2;

	cin >> numero1 >> numero2;

	int maior = 0;
	int menor = 0;
	int aux;

	if (numero1 > numero2){
		maior = numero1;
		menor = numero2;
	} else {
		maior = numero2;
		menor = numero1;
	}

	while (menor > 0){
		aux = menor;
		menor = maior % menor;
		maior = aux;
	}

	cout << maior << endl;


	return 0;
}