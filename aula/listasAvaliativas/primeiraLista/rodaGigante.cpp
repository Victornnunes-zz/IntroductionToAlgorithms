#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	
	int raio;
	int quantidade;
	const float PI = 3.14159265358;

	cin >> raio >> quantidade;

	int Divisoes = 360 / quantidade;
	float arco = 2 * PI;
	float angulo = (Divisoes * PI) / 180; 

	int i = 0;
	while (i < quantidade){
		cout << setprecision(2) << fixed;
		cout << cos(arco) * raio << " ";
		cout << sin(arco) * raio << endl;;

		arco = arco + angulo;
		i++;		
	}

	return 0;
}