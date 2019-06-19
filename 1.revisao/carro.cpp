#include <iostream>
using namespace std;

struct posicao {
    float pos;
};
struct velocidade {
    float vel;
};
struct carro {
    struct posicao coordenadas;
    struct velocidade dados;
};
void posicaoCarro(carro informacoes[], float tempo){
    for (int i = 0; i < 2; i++){
        informacoes[i].coordenadas.pos = ((informacoes[i].dados.vel * tempo) + (informacoes[i].coordenadas.pos));
    }
    for (int j = 0; j < 2; j++){
        cout <<  informacoes[j].coordenadas.pos << " ";
    }
}
void preencheDados(carro informacoes[], float &tempo){
    for (int i = 0; i < 2; i++){
        cin >> informacoes[i].coordenadas.pos;
    }
    for (int j = 0; j < 2; j++){
        cin >> informacoes[j].dados.vel;
    }
    cin >> tempo;
}

int main(){
    carro informacoes[2];
    float tempo;
    preencheDados(informacoes, tempo);
    posicaoCarro(informacoes, tempo);
    return 0;
}