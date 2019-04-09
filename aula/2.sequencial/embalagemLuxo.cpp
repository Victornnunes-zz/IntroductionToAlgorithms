#include <iostream>
#include <cmath>
using namespace std;
int main(){

	int produzidos;

	cin >> produzidos;

	int luxo = ceil(produzidos / 3);
	int comum = produzidos - luxo;

	cout << comum << endl << luxo << endl;

	return 0;
}