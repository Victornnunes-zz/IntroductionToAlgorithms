#include <iostream>
using namespace std;
int main(){

	int numero;

	cin >> numero;

	int fib0 = 0;
	int fib1 = 1;
	int fib;

	if(numero == 0){
		cout << fib0 << " ";
	} else if(numero == 1){
		cout << fib1 << " ";
	} else if(numero > 1){
		cout << fib0 << " " << fib1 << " ";
		int i = 2;
		while(i < numero){
			fib = fib0 + fib1;
			fib0 = fib1;
			fib1 = fib;
			cout << fib << " ";
			i++;
		} 
	}

	return 0;
}