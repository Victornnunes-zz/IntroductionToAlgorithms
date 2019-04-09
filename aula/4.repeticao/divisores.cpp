#include <iostream>
using namespace std;
int main(){

	int numero;

	cin >> numero;

	int i = 1;

	int somatorio = 0;

	while(i <= numero){
		if (numero % i == 0 && i != numero){
			somatorio += i;
			cout << i << "+";
		}

		if (i == numero){
			somatorio += i;
			cout << i << "=";
		}
		
		i++;
	}

	cout << somatorio;

	return 0;
}