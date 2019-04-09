#include <iostream>
using namespace std;
int main(){

    int a, b, c;

    cin >> a >> b >> c;

    if ((a + b) < c) cout << 1 << endl;
    if ((a + b) >= c) cout << 0 << endl;

    return 0;
}