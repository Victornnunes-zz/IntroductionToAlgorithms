#include <iostream>
using namespace std;

int multiplicacao(int primeiroNumero, int segundoNumero){
	if(segundoNumero == 0){
		return 0;
	} else {
		return primeiroNumero + multiplicacao(primeiroNumero, segundoNumero - 1);
	}
}

int main(){

	int primeiroNumero;
	int segundoNumero;

	cin >> primeiroNumero >> segundoNumero;

	cout << multiplicacao(primeiroNumero, segundoNumero);

	return 0;
}