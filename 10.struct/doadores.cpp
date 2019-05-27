#include <iostream>
#include <string>
using namespace std;

struct doadores{
		string nome;
		string tipo;
};

void possiveis(string receptor, doadores pessoa[], int quantidadeDoadores){
		if (receptor == "A"){
			for (int i = 0; i < quantidadeDoadores; i++){
				if (pessoa[i].tipo == "A"){
					cout << pessoa[i].nome << endl;
				}
			}
			
			for (int i = 0; i < quantidadeDoadores; i++){
				if (pessoa[i].tipo == "O"){
					cout << pessoa[i].nome << endl;
				}
			}
		} else if (receptor == "B"){
			for (int i = 0; i < quantidadeDoadores; i++){
				if (pessoa[i].tipo == "B"){
					cout << pessoa[i].nome << endl;
				}
			}
			
			for (int i = 0; i < quantidadeDoadores; i++){
				if (pessoa[i].tipo == "O"){
					cout << pessoa[i].nome << endl;
				}
			}
		} else if(receptor == "AB"){
			for (int i = 0; i < quantidadeDoadores; i++){
				if (pessoa[i].tipo == "AB"){
					cout << pessoa[i].nome << endl;
				}
			}
			
			for (int i = 0; i < quantidadeDoadores; i++){
				if (pessoa[i].tipo == "A"){
					cout << pessoa[i].nome << endl;
				}
			}
			
			for (int i = 0; i < quantidadeDoadores; i++){
				if (pessoa[i].tipo == "B"){
					cout << pessoa[i].nome << endl;
				}
			}
			
			for (int i = 0; i < quantidadeDoadores; i++){
				if (pessoa[i].tipo == "O"){
					cout << pessoa[i].nome << endl;
				}
			}
		} else if (receptor == "O"){
			for (int i = 0; i < quantidadeDoadores; i++){
				if (pessoa[i].tipo == "O"){
					cout << pessoa[i].nome << endl;
				}
			}
		}
}

void preencheDoadores(doadores pessoa[], int quantidadeDoadores){
	for (int i = 0; i < quantidadeDoadores; i++){
		cin >> pessoa[i].nome >> pessoa[i].tipo; 
	}
}

int main(){
	
	int quantidadeDoadores;
	
	string receptor;
	
	cin >> quantidadeDoadores;
	
	doadores pessoa[quantidadeDoadores];
	
	preencheDoadores(pessoa, quantidadeDoadores);
	
	cin >> receptor;
	
	possiveis(receptor, pessoa, quantidadeDoadores);
	
	return 0;
}
