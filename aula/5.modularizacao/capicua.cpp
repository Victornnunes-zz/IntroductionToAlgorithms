#include <iostream>
using namespace std;

bool capicua(int &numero){
	bool igual = false;
	int anterior = numero;
	int restoDivisao;
	int inverso = 0;

	while(numero != 0){
		restoDivisao = numero%10;
		inverso	= (inverso * 10) + restoDivisao;
		numero = numero / 10;
	}

	if (anterior == inverso){
		igual = true;
	}
	return igual;
}


int main(){
	int numero;

	cin >> numero;

	if(capicua(numero)){
		cout << "sim" << endl;
	} else {
		cout << "nao" << endl;
	}

	return 0;
}