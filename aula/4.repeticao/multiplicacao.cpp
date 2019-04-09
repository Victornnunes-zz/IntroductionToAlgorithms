#include <iostream>
using namespace std;
int main(){

	int numero1;
	int numero2;

	cin >> numero1 >> numero2;

	int multiplicacao = numero1;

	int i = 1;
	while (i <= numero2){
		cout << multiplicacao << endl;
		multiplicacao += numero1;

		i++;
	}

	return 0;
}