#include <iostream>
using namespace std;
int main(){
    
    float grausCelsius;

    cin >> grausCelsius;

    float transforma = ((9*grausCelsius) + 160)/5;

    cout << transforma << endl;

    return 0;
}