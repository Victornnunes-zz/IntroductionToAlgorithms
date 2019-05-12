#include <iostream>
using namespace std;
int main(){

	float horasExtras;
	float horasFaltas;

	cin >> horasExtras >> horasFaltas;
	horasExtras = horasExtras * 60;
	horasFaltas = horasFaltas * 60;

	float horas = horasExtras - ((2 / 3) * horasFaltas);

	if (horas <= 600){
		cout << 100 << endl;
	} else if (horas > 600 && horas <= 1200){
		cout << 200 << endl;
	} else if (horas > 1200 && horas <= 1800){
		cout << 300 << endl;
	} else if (horas > 1800 && horas <= 2400){
		cout << 400 << endl;
	} else if (horas > 2400){
		cout << 500 << endl;
	}

	return 0;
}