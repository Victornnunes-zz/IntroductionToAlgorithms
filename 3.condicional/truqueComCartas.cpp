#include <iostream>
#include <cmath>
using namespace std;
int main(){

	int quantidade;
	int posicao;
	int corte;

	cin >> quantidade >> posicao;

	if (quantidade % 2 == 0){
		if (posicao <= ((quantidade - 1) / 2)){
			corte = 2 * posicao + 1;
		} else if (posicao > ((quantidade - 1) / 2)){
			corte = (2 * posicao) % quantidade;
		}
	} else if (quantidade % 2 != 0){
		if (posicao <= ((quantidade - 1) / 2)){
			corte = 2 * posicao + 1;
		} else if (posicao > ((quantidade - 1) / 2)){
			corte = ((2 * posicao) + 1) % quantidade;
		}
	}

	cout << corte;

	return 0;
}