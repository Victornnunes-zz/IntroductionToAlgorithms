#include <iostream>
#include <fstream>
using namespace std;

struct cartas{
    char valor;
    char naipe;
    char cor;
};

struct mesa{
    char valor;
    char naipe;
    char cor;
};

void preencheJogo(cartas jogo[], mesa mesa[]){
    ifstream arquivo("entrada.txt");
    string dados;
    if (arquivo){
        while (arquivo >> dados){
            cout << dados << endl;
        }
        arquivo.close();
    }
}

int main(){

    cartas jogo[4];
    mesa mesa[1];

    preencheJogo(jogo, mesa);

    return 0;
}