#include <iostream>
#include <string>
using namespace std;
int main(){

    string nome, sexo, estadoCivil;

    cin >> nome >> sexo >> estadoCivil;

    int tempoCasamento;

    cout << nome << endl << sexo << endl << estadoCivil << endl;

    if (sexo == "Feminino" && estadoCivil == "Casada"){
       
        cin >> tempoCasamento;
        cout << tempoCasamento;
    }

    return 0;
}