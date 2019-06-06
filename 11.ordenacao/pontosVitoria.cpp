#include <iostream>
using namespace std;

int main(){

    int players;
    cin >> players;
    
    int rounds;
    cin >> rounds;

    int array[players][2] = {0};

    int aux;
    for (int i = 0; i < rounds; i++){
        for (int j = 0; j < players; j++){
            cin >> aux;
            array[0][j] += aux;
            array[1][j] = j + 1;
        }
    }

    for (int i = 0; i < rounds; i++){
        for (int j = 0; j < players; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    

    return 0;
}