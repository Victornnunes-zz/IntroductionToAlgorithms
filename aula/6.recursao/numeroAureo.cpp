#include <iostream>
using namespace std;

double aureo(int quantidade){
	if (quantidade == 1){
		return 1;
	} else {
		return 1 + (1 / (aureo(quantidade - 1)));
	}
}


int main(){

	int quantidade;

	cin >> quantidade;

	cout << aureo(quantidade);

	return 0;
}