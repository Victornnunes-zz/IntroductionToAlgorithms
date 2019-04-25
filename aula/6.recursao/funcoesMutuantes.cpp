#include <iostream>
using namespace std;

int HX(int);

int FX(int numero){
	if (numero == 0){
		return 1;
	} else if (numero % 2 == 0 && numero > 0){
		return 2*HX(numero) + FX(numero-1);
	} else {
		return 2*HX(numero) - FX(numero-1);
	}
}

int HX(int numero){
	if (numero == 0){
		return 0;
	} else {
		return HX(numero-1) + FX(numero-1);
	}
}

int main(){
	int numero;

	cin >> numero;

	cout << FX(numero);

	return 0;
}