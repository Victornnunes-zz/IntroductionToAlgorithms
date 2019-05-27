#include <iostream>
#include <string>
using namespace std;

void exibeListaOnibus(string onibus[], int recusados){
    for (int i = 0; i < 8; i++){
        cout << onibus[i] << endl;
    }

    cout << recusados << endl;
}

void reservaOnibus(string onibus[]){
    string nome;
    int numeroOnibus = -2;
    int recusados = 0;
    while (numeroOnibus != -1){
        cin >> nome >> numeroOnibus;
        if(numeroOnibus != -1){
            if (onibus[numeroOnibus] == "disponivel"){
                onibus[numeroOnibus] = nome;
            } else {
                recusados++;
            }
        }
    }

    exibeListaOnibus(onibus, recusados);
}

int main(){

    string onibus[8];

    for (int i = 0; i < 8; i++){
        onibus[i] = "disponivel";
    }

    reservaOnibus(onibus);
 
    return 0;
}