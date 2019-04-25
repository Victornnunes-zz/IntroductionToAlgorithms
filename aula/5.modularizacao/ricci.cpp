#include <iostream>
using namespace std;

void ricci(int rib0, int rib1, int quantidade){

	int rib;

	if (quantidade == 0){
		cout << rib0 << " ";
	} else if (quantidade == 1){
		cout << rib0 << " ";
		cout << rib1 << " ";
	} else {
		cout << rib0 << " ";
		cout << rib1 << " ";

		int i = 2;
		while(i < quantidade){
			rib = rib0 + rib1;
			cout << rib << " ";
			rib0 = rib1;
			rib1 = rib;

			i++;
		}
	}

}


int main(){

	int rib0;
	int rib1;
	int quantidade;

	cin >> rib0 >> rib1 >> quantidade;

	ricci(rib0, rib1, quantidade);

	return 0;
}