#include <iostream>
using namespace std;
int main (){


	float razao;
	int quantidade;

	cin >> razao >> quantidade;

	float somatorio = 1;

	int i = 0;
	while (i < quantidade){
		cout << somatorio << endl;
		somatorio *= razao;
		i++;
	}

	return 0;
}