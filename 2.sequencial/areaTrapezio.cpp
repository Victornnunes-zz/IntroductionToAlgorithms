#include <iostream>
using namespace std;
int main(){

	float bMaior, bMenor, altura;

	cin >> bMaior >> bMenor >> altura;

	float area = (((bMaior + bMenor) * altura) / 2);

	cout << area;

	return 0;
}