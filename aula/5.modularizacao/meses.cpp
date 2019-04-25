#include <iostream>
using namespace std;

char const*stringMes (int mes ){

	if (mes == 1){
		return "janeiro";
	} else if (mes == 2){
		return "fevereiro";
	} else if (mes == 3){
		return "marco";
	} else if (mes == 4){
		return "abril";
	} else if (mes == 5){
		return "maio";
	} else if (mes == 6){
		return "junho";
	} else if (mes == 7){
		return "julho";
	} else if (mes == 8){
		return "agosto";
	} else if (mes == 9){
		return "setembro";
	} else if (mes == 10){
		return "outubro";
	} else if (mes == 11){
		return "novembro";
	} else if (mes == 12){
		return "dezembro";
	} else {
		return "erro";
	}
}

int main(){

	int mes;

	cin >> mes;

	cout << stringMes(mes) << endl;

	return  0;
}