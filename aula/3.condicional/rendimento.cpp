#include <iostream>
using namespace std;
int main(){
	
	int tipoInvestimento;
	float valorInvestimento;

	cin >> tipoInvestimento >> valorInvestimento;

	float rendimento;

	if (tipoInvestimento == 1){
		rendimento = valorInvestimento + (valorInvestimento * 0.005);
	} else if (tipoInvestimento == 2){
		rendimento = valorInvestimento + ((valorInvestimento * 0.03) - 30.00);
	}

	cout << rendimento << endl;

	return 0;
}