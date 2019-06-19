#include <iostream>
#include <string>
using namespace std;

struct criancas {
    string nome;
    string presente;
    int boas;
    int trav;
};

void presentes(criancas pedidos[], int quantidadeCriancas, int presenteadas){
    for (int i = 0; i < quantidadeCriancas; i++){
        cin >> pedidos[i].nome >> pedidos[i].presente >> pedidos[i].boas >> pedidos[i].trav;
    }

    for (int j = 0; j < quantidadeCriancas; j++){
        if (pedidos[j].boas <= pedidos[j].trav){
            cout << pedidos[j].nome << " ";
        } else {
            presenteadas++;
        }
    }

    if (presenteadas == quantidadeCriancas){
        cout << "Ninguem" << endl;
    }
}

int main(){

    int quantidadeCriancas;
    cin >> quantidadeCriancas;

    criancas pedidos[quantidadeCriancas];

    int presenteadas = 0;

    presentes(pedidos, quantidadeCriancas, presenteadas);

    return 0;
}