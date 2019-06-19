#include <iostream>
#include <string>
using namespace std;

struct conteudo {
    string nome;
    int quantidadePorcao;
};

struct cestas {
    string nome;
    string cestaPedido;
};

void quantidade (conteudo informacoes[], int quantidadeCestasDisponivel, cestas pedidos[], int quantidadePedidos){
    int quantidadeRoubo = 0;
    if (quantidadeCestasDisponivel > quantidadePedidos){
        for (int i = 0; i < quantidadePedidos; i++){
            if (pedidos[i].cestaPedido == )
        }
    }
}

void preenchePedidos(cestas pedidos[], int quantidadePedidos){
    for (int i = 0; i < quantidadePedidos; i++){
        cin >> pedidos[i].nome >> pedidos[i].cestaPedido;
    }
}

void preencheCestas(conteudo informacoes[], int quantidadeCestasDisponivel){
    for (int i = 0; i < quantidadeCestasDisponivel; i++){
        cin >> informacoes[i].nome >> informacoes[i].quantidadePorcao;
    }
}

int main(){

    int quantidadeCestasDisponivel;
    cin >> quantidadeCestasDisponivel;

    conteudo informacoes[quantidadeCestasDisponivel];

    preencheCestas(informacoes, quantidadeCestasDisponivel);

    int quantidadePedidos;
    cin >> quantidadePedidos;

    cestas pedidos[quantidadePedidos];

    preenchePedidos(pedidos, quantidadePedidos);

    quantidade(informacoes, quantidadeCestasDisponivel, pedidos, quantidadePedidos);

    return 0;
}