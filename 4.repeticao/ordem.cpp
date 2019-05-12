#include <iostream>
using namespace std;
int main(){

	int numero;

	cin >> numero;

	int anterior = numero;

	int ordenado = 1;

	int i = 0;
	while (i < 4){
		cin >> numero;

		if (numero < anterior){
			ordenado = 0;
		}

		anterior = numero;

		i++;
	}

	cout << ordenado << endl;


	return 0;
}