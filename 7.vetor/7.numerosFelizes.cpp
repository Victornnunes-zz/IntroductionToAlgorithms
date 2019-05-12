#include <iostream>
#include <string>
using namespace std;

void feliz(int numero){
	int aux = 0;
	int numeroFeliz = 0;
	string numeroString = to_string(numero);

	while (numeroFeliz != numero){
		numeroFeliz = 0;
		for (int i = 0; i < numeroString.length(); ++i){
			aux = (int)numeroString[i] - 48;
			numeroFeliz = (aux * aux) + numeroFeliz;
		}

		cout << numeroFeliz << " ";
		
		numeroString = to_string(numeroFeliz);

		if (numeroFeliz == 1){
			cout << endl;
			cout << "sim";
			return;
		}
	}

	cout << endl;
	cout << "nao";
	return;
}


int main(){
	int numero;

	cin >> numero;

	feliz(numero);

	return 0;
}