#include <iostream>
#include <cmath>
using namespace std;

int somaDigitos(int numero, int &soma){

	while (numero != 0){
		soma = soma + numero % 10;
		numero = numero / 10;
	}

	return soma;
}

int main(){
	bool valido = false;
	int soma = 0;
	int numero;

	cin >> numero;

	somaDigitos(numero, soma);

	if (numero % soma == 0) valido = true;

	cout << valido << endl;  

	return 0;
}