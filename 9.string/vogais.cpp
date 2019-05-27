#include <iostream>
#include <string>
using namespace std;

int vogais(string palavra){

    int tamanho = palavra.length();

    int vogais = 0;

    for (int i = 0; i < tamanho; i++){
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'a'){
            vogais++;
        }
    }

    return vogais;
}

int main(){

    string palavra;

    cin >> palavra;

    cout << vogais(palavra) << endl;

    return 0;
}