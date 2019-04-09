#include <iostream>
using namespace std;
int main(){

	int numero;

	cin >> numero;

	int fib1 = 0;
	int fib2 = 1;

	if (numero == 1){
		cout << fib1 << endl;
	} else if (numero == 2){
		cout << fib1 << endl;
		cout << fib2 << endl;
	} else {
		cout << fib1 << endl;
		cout << fib2 << endl;

		int fib;

		int i = 2;
		while (i < numero){
			fib = fib2 + fib1;
			fib1 = fib2;
			fib2 = fib;
			cout << fib << endl;
			i++;
		}
	}


	return 0;
}