#include <iostream>
using namespace std;
int main(){

	float numero1;
	float numero2;
	float numero3;

	cin >> numero1 >> numero2 >> numero3;

	float maior = numero1;

	if (numero2 > maior){
		maior = numero2;
	} else if (numero3 > maior){
		maior = numero3;
	}

	cout << maior << endl;
	
	return 0;
}