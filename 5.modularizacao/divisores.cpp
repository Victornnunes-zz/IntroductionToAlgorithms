#include <iostream>
using namespace std;

void divisores(int numero, int &segundoMenor, int &segundoMaior){
	int i = 1;
	int maior = 0;
	int menor;
	while (i <= numero){
		if (numero % i == 0){
			cout << i << endl;

			menor = 1;

			if (i >= maior){
				segundoMaior = maior;
				maior = i;
			}
			if (menor == i){
				i++;
			} else {
				if(i < segundoMenor){
					segundoMenor = i;
				}
			}
		}
		i++;
	}
}


int main(){

	int numero;
	int segundoMaior = 0;
	int segundoMenor;

	cin >> numero;

	divisores(numero, segundoMenor, segundoMaior);

	cout << segundoMenor << " ";
	cout << segundoMaior << endl;

	return 0;
}