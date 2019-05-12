#include <iostream>
using namespace std;
int main(){

	float salario;

	cin >> salario;

	float dolar = salario / 2.13;

	float euro = salario / 2.84;

	float libra = salario / 3.34;

    std::cout << dolar << endl;
	std::cout << euro << endl;
	std::cout << libra << endl;
	
	return 0;
}