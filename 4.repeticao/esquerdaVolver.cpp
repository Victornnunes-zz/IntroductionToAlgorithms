#include <iostream>
using namespace std;
int main(){

	int quantidade;
	char direcao;

	int posicao = 360;

	cin >> quantidade;

	int i = 0;
	while (i < quantidade){
		cin >> direcao;

		if(direcao == 'D'){
			posicao += 90;
		} else if (direcao == 'E'){
			posicao -= 90;
		}

		i++;
	}

	if (posicao % 360 == 90){
		cout << "L" << endl;
	} else if (posicao % 360 == 180){
		cout << "S" << endl;
	} else if (posicao % 360 == 270){
		cout << "O" << endl;
	} else if (posicao % 360 == 0){
		cout << "N" << endl;
	}




	return 0;
}