#include <iostream>
using namespace std;
int main(){

	int diaAtual;
	int horaAtual;
	int minutoAtual;
	int duracao;

	cin >> diaAtual >> horaAtual >> minutoAtual >> duracao;

	int dia;
	int hora;
	int minuto;

	if (minutoAtual + duracao >= 60){
		hora = horaAtual + ((minutoAtual + duracao) / 60);
		minuto = (minutoAtual + duracao) % 60;

		if (hora >= 24){
			dia = (hora / 24) + diaAtual;
			hora = hora % 24;
		}


	} else {
		minuto = minutoAtual + duracao;
	}

	cout << dia << endl;
	cout << hora << endl;
	cout << minuto << endl;

	return 0;
}