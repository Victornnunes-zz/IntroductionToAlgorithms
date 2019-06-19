#include <iostream>
#include <string>
using namespace std;

struct viloes{
    string nomeVilao;
    string alvo;
};

struct planos{
    string nomePlano;
    string vilao;
    int prejuizo;
};

void ataque(string alvoProcurado, viloes dados[], int quantidadeViloes, planos informacoes[], int quantidadePlanos){
    for (int i = 0; i < quantidadePlanos; i++){
        if (alvoProcurado == dados[i].alvo){
           for (int j = 0; j < quantidadeViloes; j++){
               if (dados[i].nomeVilao == informacoes[j].vilao){
                   
               }
           } 
        }
    }
}

void preenchePlanos(int quantidadePlanos, planos informacoes[]){
    for (int i = 0; i < quantidadePlanos; i++){
        cin >> informacoes[i].nomePlano >> informacoes[i].prejuizo;
    }
}

void preencheViloes(int quantidadeViloes, viloes dados[]){
    for (int i = 0; i < quantidadeViloes; i++){
        cin >> dados[i].nomeVilao >> dados[i].alvo;
    }
}

int main(){

    int quantidadeViloes;
    cin >> quantidadeViloes;

    viloes dados[quantidadeViloes];

    preencheViloes(quantidadeViloes, dados);

    int quantidadePlanos;
    cin >> quantidadePlanos;

    planos informacoes[quantidadePlanos];

    preenchePlanos(quantidadePlanos, informacoes);

    string alvoProcurado;
    cin >> alvoProcurado;

    ataque(alvoProcurado, dados, quantidadeViloes, informacoes, quantidadePlanos);

    return 0;
}