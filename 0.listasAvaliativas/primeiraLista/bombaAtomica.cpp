#include <iostream>
#include <cmath>
using namespace std;

int main(){

	int x1b;
	int y1b;
	int x2b;
	int y2b;
	int x3b;
	int y3b;
	int xm;
	int ym;

	cin >> x1b >> y1b >> x2b >> y2b >> x3b >> y3b >> xm >> ym;

	if ((pow(pow(x1b - xm, 2) + pow(y1b - ym, 2), 0.5)) <= 10){
		cout << "sucesso" << endl;
	} else if ((pow(pow(x2b - xm, 2) + pow(y2b - ym, 2), 0.5)) <= 10){
		cout << "sucesso" << endl;
	} else if ((pow(pow(x3b - xm, 2) + pow(y3b - ym, 2), 0.5)) <= 10){
		cout << "sucesso" << endl;
	} else {
		cout << "falha" << endl;
	}

	return 0;
}

