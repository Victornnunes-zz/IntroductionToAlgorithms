#include <iostream>
using namespace std;
int main(){

	int numero;

	cin >> numero;

	int i = numero - 1;

	int somatorio = numero;

	while(i != 0){
		somatorio *= i;

		i--;
	}

	cout << somatorio << endl;

	return 0;
}