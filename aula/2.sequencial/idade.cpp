#include <iostream>
using namespace std;
int main(){

	int idade;

	cin >> idade;

	int meses = idade * 12;

	cout << meses << endl;

	int semanas = idade * 12 * 4;

	cout << semanas << endl;

	int dias = idade * 12 * 30;

	cout << dias << endl;

	return 0;
}