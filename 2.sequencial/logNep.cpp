#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	float n;

	cin >> n;

	float h = 2 * log((n + sqrt(pow(n, 2) + 4))/2);

	cout << h;

	return 0;
}