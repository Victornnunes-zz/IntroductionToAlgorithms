#include <iostream>
#include <string>
using namespace std;

struct ponto {
    string nome;
    int entrada[7];
    int saida[7];
};

void exibeAptos (ponto gnomos[], int horasTrabalhadas[], int quantidadeGnomos){
    for (int i = 0; i < quantidadeGnomos; i++){
        if (horasTrabalhadas[i] < 70){
            cout << gnomos[i].nome << " " << horasTrabalhadas[i];
            cout << endl;
        }
    }
}

void preenchePontos (ponto gnomos[], int horasTrabalhadas[], int quantidadeGnomos){
    for (int i = 0; i < quantidadeGnomos; i++){
        cin >> gnomos[i].nome;
        for (int j = 0; j < 7; j++){
            cin >> gnomos[i].entrada[j];
            cin >> gnomos[i].saida[j];
            horasTrabalhadas[i] += (gnomos[i].saida[j]) - (gnomos[i].entrada[j]);
        }
    }
}

int main(){

    int quantidadeGnomos;
    cin >> quantidadeGnomos;

    ponto gnomos[quantidadeGnomos];

    int horasTrabalhadas[quantidadeGnomos] = {0};

    preenchePontos(gnomos, horasTrabalhadas, quantidadeGnomos);

    exibeAptos(gnomos, horasTrabalhadas, quantidadeGnomos);

    return 0;
}