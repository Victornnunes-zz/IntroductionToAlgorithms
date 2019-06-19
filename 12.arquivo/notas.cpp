#include <iostream>
#include <fstream>
using namespace std;

void escreve(){
    ifstream entrada("notas.txt");
    string dados;

    if (entrada) {
        ofstream arquivo("cifrado.txt");
        int tamanho = entrada.size();
        while ( entrada >> dados ){
            for(int i = 0; i < tamanho; i++){
                if (dados[i] == 'A' || dados[i] == 'Z'){
                    int ascii;
                    ascii = dados[i] + 3;
                    arquivo << ascii;
                } else if (dados[i] == ' '){
                    arquivo << ' ';
                }
            }
        }
        entrada.close();
        arquivo.close();
    }
}

void normaliza(){
    ifstream entrada("notas.txt");
    string dados;

    if (entrada) {
        ofstream arquivo("cifrado.txt");
        int tamanho = entrada.size();
        while ( entrada >> dados ){
            for(int i = 0; i < tamanho; i++){
                if (dados[i] == 'A' || dados[i] == 'Z'){
                    int ascii;
                    ascii = dados[i] + 3;
                    arquivo << ascii;
                } else if (dados[i] == ' '){
                    arquivo << ' ';
                }
            }
        }
        entrada.close();
        arquivo.close();
    }
}

void leitura(){
    ifstream entrada("notas.txt");
    string dados;

    if (entrada) {
        ofstream arquivo("cifrado.txt");
        int tamanho = entrada.size();
        while ( entrada >> dados ){
            for(int i = 0; i < tamanho; i++){
                if (dados[i] == 'A' || dados[i] == 'Z'){
                    int ascii;
                    ascii = dados[i] + 3;
                    arquivo << ascii;
                } else if (dados[i] == ' '){
                    arquivo << ' ';
                }
            }
        }
        entrada.close();
        arquivo.close();
    }
}

int main(){

    leitura();
    normaliza();
    escreve();

  return 0;
}