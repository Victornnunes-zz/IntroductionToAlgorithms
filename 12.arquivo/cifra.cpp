#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ifstream entrada("padrao.txt");
    string dados;

    if (entrada) {
        ofstream arquivo("cifrado.txt");
        int tamanho = 255;
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

  return 0;
}