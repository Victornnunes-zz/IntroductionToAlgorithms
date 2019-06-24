#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string arquivo;
    cin >> arquivo;

    ifstream arquivoLeitura(arquivo.c_str());
    char letra[1];
    ofstream arquivoEscrita("cifrado.txt");

    while (arquivoLeitura.good()){
        letra[0] = arquivoLeitura.get();
        if (letra[0] >= 'A' and letra[0] <= 'Z'){
            if (letra[0] != 'X' and letra[0] != 'Y' and letra[0] != 'Z'){
                letra[0] += 3;
            } else if (letra[0] == 'X'){
                letra[0] = 'A';
            } else if (letra[0] == 'Y'){
                letra[0] = 'B';
            } else{
                letra[0] = 'C';
            }
        }
        if (letra[0] != -1){
            arquivoEscrita << letra[0];
        }
    }
    return 0;
}