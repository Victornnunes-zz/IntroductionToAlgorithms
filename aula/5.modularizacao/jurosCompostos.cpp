#include <iostream>
#include <cmath>
using namespace std;
float calculaJuros(float &valorInicial, float &taxaJuros, int &meses){
	float juros;

	juros = valorInicial * (pow((1 + taxaJuros), meses));

	return juros;
}

int main(){

	float valorInicial;
	float taxaJuros;
	int meses;

	cin >> valorInicial >> taxaJuros >> meses;

	taxaJuros = (taxaJuros / 100);

	cout << calculaJuros(valorInicial, taxaJuros, meses) << endl;



	return 0;
}