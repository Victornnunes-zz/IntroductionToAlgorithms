#include <iostream>
using namespace std;

int ricci(int ri0, int ri1, int quantidade){
	if (quantidade == 0){
		return 0;
	} else {
		int rif = ri0 + ri1;
		cout << rif << " ";
		ri0 = ri1;
		ri1 = rif;
		return ricci(ri0, ri1, quantidade - 1);
	}
}

int main(){

	int ri0;
	int ri1;
	int quantidade;

	cin >> ri0 >> ri1 >> quantidade;

	if(quantidade == 1){
		cout << ri0 << " ";
	} else if (quantidade == 2){
		cout << ri0 << " " << ri1 << " ";
	} else {
		cout << ri0 << " " << ri1 << " ";
		ricci(ri0, ri1, quantidade - 2);
	}
	

	return 0;
}