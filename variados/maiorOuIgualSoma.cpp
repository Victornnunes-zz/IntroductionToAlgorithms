#include <iostream>
using namespace std;
int main(){

    int a, b, c;

    cin >> a >> b;

    if (a == b){
        c = a + b;
    } else {
        c = a * b;
    }
    
    cout << c << endl;

    return 0;
}