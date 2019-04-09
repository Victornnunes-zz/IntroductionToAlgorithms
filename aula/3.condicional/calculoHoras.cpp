#include <iostream>
using namespace std;
int main(){

	int horaInicial;
	int minutoInicial;
	int horaFinal;
	int minutoFinal;

	cin >> horaInicial >> minutoInicial >> horaFinal >> minutoFinal;

	int horaInicialMin = horaInicial * 60;
	int horaFinalMin = horaFinal * 60;
	int somaMinInicial = minutoInicial + horaInicialMin;
	int somaMinFinal = minutoFinal + horaFinalMin;
	int diferenca = somaMinFinal - somaMinInicial;
	int horasDia = 24 * 60;

	int horasGastas;
	int minutosGastos;

	if (horaFinal > horaInicial){
		if (diferenca >= 60){
			horasGastas = diferenca / 60;
			minutosGastos = diferenca % 60;
		} else {
			horasGastas = 0;
			minutosGastos = diferenca % 60;
		}
	} else if (horaInicial > horaFinal){
		int diferencaDia = horasDia - somaMinInicial;
		int somaInicialFinal = diferencaDia + somaMinFinal;
		horasGastas = somaInicialFinal / 60;
		minutosGastos = somaInicialFinal % 60;
		
	} else if (horaInicial == horaFinal){
		horasGastas = horaFinal - horaInicial;
		minutosGastos = minutoFinal - minutoInicial;
	}

	cout << horasGastas << endl;
	cout << minutosGastos << endl;

	return 0;
}