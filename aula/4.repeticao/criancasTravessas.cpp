#include <iostream>
using namespace std;
int main (){

	int quartos;

	cin >> quartos;

	//Para acharmos o numero de portas, precisamos achar a quantidade de divisores de um numero, se for impar, a porta ficara aberta

	int i = 1;
	while (i <= quartos){
		int contador = 0;

		int j = i;
		while (j >= 1){
			if (i % j == 0){
				contador++;
			}
			j--;
		}

		if (contador % 2 != 0){
			cout << i << " ";
		}
		i++;
	}

	return 0;
}