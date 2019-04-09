#include <iostream>
#include <cmath>
using namespace std;
int main(){

	float alturaDegrau, alturaNec;

	cin >> alturaDegrau >> alturaNec;

	alturaNec = alturaNec * 100;

	float numeroDegraus = ceil(alturaNec / alturaDegrau);

	cout << numeroDegraus;

	return 0;
}