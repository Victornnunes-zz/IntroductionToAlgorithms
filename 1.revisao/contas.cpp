#include <iostream>
#include <string>
using namespace std;

struct usuario {
    int conta;
    string nome;
};

struct transacao {
    int conta;
    string descricao;
    float valor;
};

void extrato (usuario dados[], int quantidadeDados, transacao operacao[], int quantidadeOperacoes){
    int pesquisa = 0;
    int contas[20] = {0};
    int contasExtratos = 0;
    int i = 0;
    while (contasExtratos != -1){
        cin >> contasExtratos;
        if (contasExtratos != -1){
            contas[i] = contasExtratos;
            pesquisa++;
            i++;
        }
    }

    int j = 0;
    while (j <= pesquisa){
        for (int k = 0; k <= quantidadeDados; k++){
            if (contas[j] == dados[k].conta){
                cout << dados[k].nome << endl;
                for (int l = 0; l <= quantidadeOperacoes; l++){
                    if (dados[k].conta == operacao[l].conta){
                        cout << operacao[l].descricao << " " << operacao[l].valor << endl;
                    }
                }
            }
        }
        j++;
    }  
}

void preencheOperacoes (transacao operacao[], bool feita[]){
    int numeroConta = 0;
    string descOp;
    float valorOp;
    int i = 0;
    while (numeroConta != -1){
        cin >> numeroConta;
        if (numeroConta != -1){
            cin >> descOp >> valorOp;
            operacao[i].conta = numeroConta;
            operacao[i].descricao = descOp;
            operacao[i].valor = valorOp;
            feita[i] = true;
            i++;
        }
    }
}

void preencheUsuarios (usuario dados[], bool utilizado[]){
    int numeroConta = 0;
    string nomeCliente;
    int i = 0;
    while (numeroConta != -1){
        cin >> numeroConta;
        if (numeroConta != -1){
            cin >> nomeCliente;
            dados[i].conta = numeroConta;
            dados[i].nome = nomeCliente;
            utilizado[i] = true;
            i++;
        }
    }
}

int main(){

    usuario dados[20];
    bool utilizado[20] = {false};
    
    preencheUsuarios(dados, utilizado);
    int quantidadeDados = 0;
    int contI = 0;
    while (utilizado[contI] == true){
        quantidadeDados++;
        contI++;
    }

    transacao operacao[100];
    bool feita[100] = {false};

    preencheOperacoes(operacao, feita);
    int quantidadeOperacoes = 0;
    int contJ = 0;
    while (feita[contJ] == true){
        quantidadeOperacoes++;
        contJ++;
    }

    extrato(dados, quantidadeDados, operacao, quantidadeOperacoes);

}