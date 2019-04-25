#include <iostream>
using namespace std;
void somatorio(int fatorial, int combinacaoDivisor){
	int somatorio = fatorial / combinacaoDivisor;
	cout << somatorio << endl;
}


void combinacao(int fatorial, int fatorialKN){
	int fatorialK = 1;
	int combinacaoDivisor = fatorialK * fatorialKN;

	somatorio(fatorial, combinacaoDivisor);
}

void fatorial(int numero){
	int i = numero;
	int fatorial = 1;
	while (i > 0){
		fatorial *= i;
		i--;
	}
	int fatorialKN = fatorial / numero;

	combinacao(fatorial, fatorialKN);
}

int main(){

	int numero;
	
	cin >> numero;

	fatorial(numero);

	return 0;
}