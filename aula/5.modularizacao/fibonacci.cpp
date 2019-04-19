#include <iostream>
using namespace std;

void fibonacci(int numero){
	int fib0 = 0;
	int fib1 = 1;
	int fib;

	if (numero == 0){
		cout << fib0 << " ";
	} else if (numero == 1){
		cout << fib0 << " ";
		cout << fib1 << " ";
	} else {
		cout << fib0 << " ";
		cout << fib1 << " ";

		int i = 2;
		while (i < numero){
			fib = fib1 + fib0;
			fib0 = fib1;
			fib1 = fib;
			cout << fib << " ";

			i++;
		}
	}
}

int main(){

	int numero;

	cin >> numero;

	fibonacci(numero);

	return 0;
}