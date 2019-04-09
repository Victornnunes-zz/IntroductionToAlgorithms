#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;
int main(){

	float raio;

	cin >> raio;

	float diametro = 2 * raio;

	cout << diametro << endl;

	float area = 4 * PI * pow(raio, 2);

	cout << area << endl;

	float volume = (4 * PI * pow(raio, 3)) / 3;

	cout << volume << endl;

	return 0;
}