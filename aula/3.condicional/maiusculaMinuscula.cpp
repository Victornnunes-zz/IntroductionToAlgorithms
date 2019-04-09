#include <iostream>
using namespace std;
int main(){

	char letra;

	cin >> letra;

	if (letra >= 65 && letra <= 90){
		cout << "MAIUSCULA" << endl;
	} else if (letra >= 97 && letra <= 122){
		cout << "MINUSCULA" << endl;
	}

	return 0;
}