#include <iostream>
using namespace std;
int main(){

	float salario;

	cin >> salario;

	float aumento;

	if (salario <= 300){
		aumento = salario * 0.15;
		salario = salario + aumento;
	} else if (salario > 300 && salario <= 600){
		aumento = salario * 0.10;
		salario = salario + aumento;
	} else if (salario > 600 && salario <= 900){
		aumento = salario * 0.05;
		salario = salario + aumento;
	} else {
		aumento = 0;
		salario = salario + aumento;
	}

	cout << aumento << endl;
	cout << salario << endl;

	return 0;
}