#include <iostream>
using namespace std;
int main(){

    float vet[3];
    float media = 0;

    for (int i = 0; i < 3; i++){
        cin >> vet[i];
        media += vet[i];
    }
    media = media/3;
    
    float mediaAproveitamento = (vet[0] + (vet[1]*2) +(vet[2]*3) + media)/7;

    if (media < 4) cout << "E";
    if (media >= 4 && media < 6) cout << "D";
    if (media >= 6 && media < 7.5) cout << "C";
    if (media >= 7.5 && media < 9) cout << "B";
    if (media >= 9) cout << "A";

    return 0;
}