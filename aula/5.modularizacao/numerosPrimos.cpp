#include <iostream>
using namespace std;

int primos(int numero1, int numero2){

	int limiteSuperior;
	int limiteInferior;

	if (numero1 > numero2){
		limiteSuperior = numero1;
		limiteInferior = numero2;
	} else {
		limiteSuperior = numero2;
		limiteInferior = numero1;
	}

	int primo = 0;

	int i = limiteInferior;
	while (i <= limiteSuperior){
		int j = 1;
		while (j < i){

			
		}
		i++;
	}

	return primo;
}

int main(){

	int numero1;
	int numero2;

	cin >> numero1 >> numero2;

	cout << primos(numero1, numero2) << endl;

	return 0;
}