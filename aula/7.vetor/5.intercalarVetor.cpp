#include <iostream>
using namespace std;

void intercala(char *vetorM, char *vetorN, int tamanhoM, int tamanhoN, char *vetorResultante){
	int tamanhoTotal = tamanhoM + tamanhoN;
	int contM = 0;
	int contN = 0;

	for (int i = 0; i < tamanhoTotal; i++){
		if (vetorM[contM] <= vetorN[contN] || contN >= tamanhoN){
			vetorResultante[i] = vetorM[contM];
			contM++;
		} else if (vetorM[contM] > vetorN[contN] || contM >= tamanhoM) {
			vetorResultante[i] = vetorN[contN];
			contN++;
		}
	}
}

int main(){
	int tamanhoM;
	int tamanhoN;

	cin >> tamanhoM >> tamanhoN;
	
	char vetorM[tamanhoM];
	char vetorN[tamanhoN];

	for (int i = 0; i < tamanhoM; i++){
		cin >> vetorM[i];
	}

	for (int i = 0; i < tamanhoN; i++){
		cin >> vetorN[i];
	}

	int tamanhoTotal = tamanhoM + tamanhoN;
	char vetorResultante[tamanhoTotal];

	intercala(vetorM, vetorN, tamanhoM, tamanhoN, vetorResultante);
	for (int i = 0; i < tamanhoTotal; i++){
		cout << vetorResultante[i] << " ";
	}

	return 0;
}