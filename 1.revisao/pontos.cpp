#include <iostream>
using namespace std;

struct pontos {
    int x;
    int y;
};

void maisProximo(pontos posicao[]){
    int menorX = 999;
    int menorY = 999;
    for (int i = 1; i < 5; i++){
        if (posicao[i].x > posicao[1].x && posicao[i].x < menorX){
            menorX = i;
            for (int j = 2; j < 5; j++){
                if (posicao[j].x == menorX){
                    if (posicao[i].y > posicao[1].y && posicao[i].y < menorY){
                        menorY = i;
                    }
                }
            }
        }
    }
    cout << posicao[menorX].x << " " << posicao[menorY].y;
}

void preenchePontos(pontos posicao[]){
    for (int i = 0; i < 5; i++){
        cin >> posicao[i].x >> posicao[i].y;
    }
}

int main(){

    pontos posicao[5];

    preenchePontos(posicao);
    maisProximo(posicao);

    return 0;
}