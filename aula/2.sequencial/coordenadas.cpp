#include <iostream>
using namespace std;
int main(){

	float largura, altura, x, y;

	cin >> largura >> altura >> x >> y;

	float coordX = ((x - (largura / 2)) / (largura / 2));
	float coordY = -((y - (altura / 2)) / (altura / 2));

	cout << coordX << endl << coordY << endl;

	return 0;
}