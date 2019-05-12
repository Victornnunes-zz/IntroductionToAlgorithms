#include <iostream>
#include <cmath>
using namespace std;

int somatorio(int numero){
	int valor = numero;
	int digitos = 0;

	if (numero == 0){
		digitos = 1;
	} else {
		while (valor != 0){
			digitos = digitos + 1;
			valor = valor/10;
		}
	}

	int somatorio = 0;
	int i = 1;
	while (i <= digitos){
		somatorio = somatorio + (numero % pow(10, i));
		i++;
	}

}

int main(){
	
	int numero;

	cin >> numero;

	cout << somatorio(numero) << endl;

	return 0;
}