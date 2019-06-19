#include <iostream>
using namespace std;

int macho(int numero);

int femea(int numero){
	if (numero > 0){
		return (numero - macho(femea(numero - 1)));
	} else {
		return 1;
	}
}

int macho(int numero){
	if (numero > 0){
		return (numero - femea(macho(numero - 1)));
	} else {
		return 0;
	}
}

int main(){
	
	int femea1;
	int femea2;
	int femea3;
	int macho1;
	int macho2;
	int macho3;

	cin >> femea1 >> femea2 >> femea3 >> macho1 >> macho2 >> macho3;

	cout << femea(femea1) << " ";
	cout << femea(femea2) << " ";
	cout << femea(femea3) << " ";
	cout << macho(macho1) << " ";
	cout << macho(macho2) << " ";
	cout << macho(macho3) << endl;
	
	return 0;
}