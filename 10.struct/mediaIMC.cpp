#include <iostream>
#include <string>
using namespace std;

struct pessoa{
	string nome;
	float altura;
	float peso;
	char sexo;
};

void calculaIMC(char tipo, pessoa dados[], int quantidade){
    int contador = 0;
    int media = 0;
	for (int i = 0; i < quantidade; i++){
        if (dados[i].sexo == tipo){
            media = media + (dados[i].peso / (dados[i].altura * dados[i].altura));
            contador++;
        }
    }
    media = media / contador;
    int imc = 0;
    for (int i = 0; i < quantidade; i++){
        if (dados[i].sexo == tipo){
            imc = dados[i].peso / (dados[i].altura * dados[i].altura);
            if (imc > media){
                cout << dados[i].nome << endl;
            }
        }
    }
}

void preencherDados(pessoa dados[], int quantidade){
	for (int i = 0; i < quantidade; i++){
		cin >> dados[i].nome >> dados[i].altura >> dados[i].peso >> dados[i].sexo;
	}
}

int main(){
	
	int quantidade;
	
	cin >> quantidade;
	
	pessoa dados[quantidade];
	
	preencherDados(dados, quantidade);
	
	char tipo;
	
	cin >> tipo;
	
	calculaIMC(tipo, dados, quantidade);
	
	return 0;
}
