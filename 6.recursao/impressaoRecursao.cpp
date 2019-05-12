#include <iostream>
using namespace std;

void impressao(int i, int numero){
	if (i <= numero){
		cout <<  i << " ";
		return impressao(i + 1, numero);
	}
}


int main(){
	int numero;

	cin >> numero;

	int i = 0;

	impressao(i, numero);

	return 0;
}