#include <iostream>
using namespace std;
int main(){

	int numeroTriangulo;

	cin >> numeroTriangulo;

	int i = 1;
	int soma = 0;

	while (i <= numeroTriangulo){
		soma += i;
		i++;
	}

	cout << soma << endl;

	return 0;
}