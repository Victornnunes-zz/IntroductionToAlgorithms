#include <iostream>
#include <string>
using namespace std;

void maiorMenorPalindromo(string palavra){
	string maior;
	string menor;

	int TamanhoMaior;
	int TamanhoMenor = 999;

	int tamanho = palavra.length();

	if (tamanho < TamanhoMenor){
		menor = palavra;
	} else {
		maior = palavra;
	}

	cout << menor << endl;
	cout << maior << endl;

}

void palindromo(string palavra){
	bool isPalindromo = true;
	int posicaoInversa;

	int i = palavra.length() - 1;
	while (i > 0){
		posicaoInversa = palavra.length() - i - 1;

		if (palavra.substr(i, 1) != palavra.substr(posicaoInversa, 1)){
			isPalindromo = false;
		}

		i--;
	}

	if(isPalindromo){
		maiorMenorPalindromo(palavra);
	} else {
		cout << palavra << endl;
	}

}

int main(){

	int quantidade;
	string palavra;

	cin >> quantidade;
	
	int i = 0;
	while (i < quantidade){
		cin >> palavra;

		palindromo(palavra);

		i++;
	}

	return 0;
}