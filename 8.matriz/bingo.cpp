#include <iostream>
using namespace std;
int main (){
	
	int matriz[5][5];
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			cin >> matriz[i][j];
		}
	}
	int EdiagonalSecundaria = 0;
	int EdiagonalPrincipal = 0;
	int Elinha = 0;
	int Ecoluna = 0;
	bool somaColuna = false;
	bool somaLinha = false;
	bool somaDiagonaP = false;
	bool somaDiagonaS = false;
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			if(i + j == 4){
				EdiagonalSecundaria += matriz[i][j];
			}
			if(i==j){
				EdiagonalPrincipal += matriz[i][j];
			}
			if (EdiagonalPrincipal == 5){
				somaDiagonaP = true;
			}
			if(EdiagonalSecundaria == 5){
				somaDiagonaS = true;
			}
		}
	}
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			Ecoluna += matriz[j][i];
			if(Ecoluna == 5){
				somaColuna = true;
			}
		}
		Ecoluna = 0;
	}
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			Elinha += matriz[i][j];
			if(Elinha == 5){
				somaLinha = true;
			}
		}
		Elinha = 0;
	}
	if(somaLinha == true){
		cout << "1";
	}
	if(somaColuna == true){
		cout << "2";
	}
	if(EdiagonalPrincipal == 5){
		cout << "3";
	}
	if(EdiagonalSecundaria == 5){
		cout << "4";
	}
	if(somaLinha == false and somaColuna == false and EdiagonalPrincipal == false and EdiagonalSecundaria == false){
		cout << "-1";
	}
	
	return 0;
}
