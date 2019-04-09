#include <iostream>
#include <string>
using namespace std;
int main(){

	int numero;

	cin >> numero;

	int tamanho = std::to_string(numero).length();

	if (tamanho < 5){
		if(tamanho == 1){
			cout << 0 << "..."  << 0 << "..." << 0 << "..." << 0 << "..." << numero % 10 << endl;
		} else if (tamanho == 2){
			cout << 0 << "..."  << 0 << "..." << 0 << "..." << (numero / 10) % 10 << "..." << numero % 10 << endl;
		} else if (tamanho == 3){
			cout << 0 << "..."  << 0 << "..." << (numero / 100) % 10 << "..." << (numero / 10) % 10 << "..." << numero % 10 << endl;
		} else if (tamanho == 4){
			cout << 0 << "..."  << (numero / 1000) % 10 << "..." << (numero / 100) % 10 << "..." << (numero / 10) % 10 << "..." << numero % 10 << endl;
		}

	} else if (tamanho == 5){

		cout << (numero / 10000) % 10 << "..."  << (numero / 1000) % 10 << "..." << (numero / 100) % 10 << "..." << (numero / 10) % 10 << "..." << numero % 10 << endl;

	} else {
		cout << "invalido" << endl;
	}

	return 0;
}