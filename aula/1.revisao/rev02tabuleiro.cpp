#include <iostream>
using namespace std;
int main(){

	int dimensao;

	cin >> dimensao;

	for(int i = 0; i < dimensao; i++){
		if(i % 2 == 0){
			for (int j = 0; j < dimensao; j++){
				if(j%2 == 0){
					cout << ".";
				} else {
					cout << "#";
				}
			}
		} else {
			for (int j = 0; j < dimensao; j++){
				if(j%2 == 0){
					cout << "#";
				} else {
					cout << ".";
				}
			}
		}
		cout << endl;
	}

	return 0;

}