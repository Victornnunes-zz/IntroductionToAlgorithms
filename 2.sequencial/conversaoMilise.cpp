#include <iostream>
using namespace std;
int main(){

	int milisseg;

	cin >> milisseg;

	int hora = milisseg / 3600000;
	int minuto = (milisseg % 3600000) / 60000;
	float segundo = (((milisseg % 3600000) / 60000.0) - minuto) * 60;
	
	cout << hora << " : " << minuto << " : " << segundo;
	return 0;
}