#include <iostream>
using namespace std;

int C(int N, int K){
	int coeficiente = 0;
	if(K == 0){
		return 1;
	} else if (K == N){
		return 1;
	} else {
		return C(N-1, K-1)+C(N-1, K);
	}
}

int main(){
	int N;
	int K;

	cin >> N >> K;

	cout << C(N, K);


	return 0;
}