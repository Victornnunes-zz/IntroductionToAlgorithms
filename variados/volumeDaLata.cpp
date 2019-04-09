#include <iostream>
#include<cmath>
using namespace std;
int main(){

    float volume, raio, altura;

    cin >> raio >> altura;

    volume = 3.14159*pow(raio,2)*altura;

    cout << volume << endl;

    return 0;
}