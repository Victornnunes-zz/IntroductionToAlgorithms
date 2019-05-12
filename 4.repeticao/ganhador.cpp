#include <iostream>
using namespace std;
int main(){

	int quantidade;

	cin >> quantidade;

	int ingresso;
	int i = 1;
	bool igual = false;
	int premiado;

	while (i <= quantidade){
		cin >> ingresso;

		if(ingresso == i && !igual){
			igual = true;
			premiado = i;
		}

		i++;
	}

	if (igual){
		cout << premiado << endl;
	} else if (!igual){
		cout << 0 << endl;
	}

	return 0;
}