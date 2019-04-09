#include <iostream>
using namespace std;
int main(){

	float numero1;
	float numero2;
	float numero3;
	float numero4;

	cin >> numero1 >> numero2 >> numero3 >> numero4;

	float maior = numero1;
	float segundo;


	if (numero2 > maior && numero)

	if (numero2 > maior){
		segundo = maior;
		maior = numero2;
	} else if (numero2 > segundo){
		segundo = numero2;
	}

	if (numero3 > maior){
		segundo = maior;
		maior = numero3;
	} else if (numero3 > segundo){
		segundo = numero3;
	}

	if (numero4 > maior){
		segundo = maior;
		maior = numero4;
	} else if (numero4 > segundo){
		segundo = numero4;
	}


	cout << maior << endl;
	cout << segundo << endl;

	return 0;
}