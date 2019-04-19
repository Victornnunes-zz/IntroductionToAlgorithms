#include <iostream>
using namespace std;

int reverso(int &numero){
	int restoDivisao;
	int inverso = 0;

	while(numero != 0){
		restoDivisao = numero%10;
		inverso	= (inverso * 10) + restoDivisao;
		numero = numero / 10;
	}

	return inverso;
}


int main(){

	int numero;

	cin >> numero;

	cout << reverso(numero) << endl;


	return 0;
}