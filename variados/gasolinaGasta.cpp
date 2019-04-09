#include <iostream>
using namespace std;
int main(){

    int tempoGasto, velocidadeMedia;

    cout << "Insira o tempo gasto" << endl;
    cin >> tempoGasto;

    cout << "Insita a velocidade media" << endl;
    cin >> velocidadeMedia;

    int distancia = tempoGasto*velocidadeMedia;

    int gasolinaGasta = distancia/12;

    cout << "A velocidade media foi de: " << velocidadeMedia << " Km/h" << endl;
    cout << "O tempo gasto na viagem foi de: " << tempoGasto << " Tempo" << endl;
    cout << "A distancia percorrida foi de: " << distancia << " Km" << endl;
    cout << "A quantidade de gasolina gasta foi de: " << gasolinaGasta << " Gasolinas" << endl;

    return 0;
}