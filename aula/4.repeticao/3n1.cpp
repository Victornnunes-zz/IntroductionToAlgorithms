#include<iostream>
using namespace std;
int main(){


	int i;
	int j;

	cin >> i >> j;

	int maior;
	int menor;

	if (i > j){
		maior = i;
		menor = j;
	} else {
		maior = j;
		menor = i;
	}

	while(maior > 1){

		if (maior % 2 == 0){
			maior = maior / 2;
		} else if (maior % 2 != 0){
			maior = (3 * maior) + 1;
		}

		cout << maior << endl;

	}

	return 0;
} 