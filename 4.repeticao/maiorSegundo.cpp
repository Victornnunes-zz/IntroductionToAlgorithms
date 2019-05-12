#include <iostream>
using namespace std;
int main(){

	int maior = 0;
	int segundo = 0;
	int media = 0;

	int numero;

	int i = 0;
	while (i < 7){
		cin >> numero;
		media += numero;

		if(numero > maior){
			segundo = maior;
			maior = numero;
		} else if (numero > segundo){
			segundo = numero;
		}
		i++;
	}

	media = (media - maior - segundo) / 5;

	cout << maior << endl;
	cout << segundo << endl;
	cout << media << endl;

	return 0;
}