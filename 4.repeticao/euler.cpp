#include <iostream>
using namespace std;
int main(){

	int precisao;

	cin >> precisao;

	float somatorioFatorial = 0;
	float somatorio = 0;

	int i = 0;
	while (i < precisao){

		int j = i;
		while(j > 0){
			somatorioFatorial *= j;
			j--;
		}

		somatorio += (1 / somatorioFatorial);

		i++;
	}

	cout << somatorio << endl;

	return 0;
}