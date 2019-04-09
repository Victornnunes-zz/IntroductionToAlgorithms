#include <iostream>
using namespace std;
int main(){

	float x1;
	float y1;
	float x2;
	float y2;
	char tipo;
	float coordenada;
	float descubra;

	cin >> x1 >> y1 >> x2 >> y2 >> tipo >> coordenada;

	if (tipo == 'x'){
		if (x1 == x2 || y1 == y2){
			cout << "nenhuma" << endl;
		} else {
			descubra = ((y2 - y1) * (coordenada - x1) + (y1 * (x2 - x1))) / (x2 - x1);
			cout << descubra << endl;
		}
	} else if (tipo == 'y'){
		if (x1 == x2 || y1 == y2){
			cout << "nenhuma" << endl;
		} else {
			descubra = (((x2 - x1) * (coordenada - y1)) + ((y2 - y1) * x1)) / (y2 - y1);
			cout << descubra << endl;
		}
	}

	return 0;
}