#include <iostream>
using namespace std;

int fatorial(int i){
    int fatorial = 1;
    for (int j = 1; j <= i; j++){
        fatorial *= j;
    }
    
    return fatorial;
}

void obterVetor(float vetor[], int N){
    for (int i = 0; i < N; i++){
        vetor[i] = (2 * fatorial(i) + i) / (i * i + 1.75);
    }
}

int main(){

    int N;
    int M;

    cin >> N >> M;

    float *vetor;
    vetor = new float[N];

    obterVetor(vetor, N);

    for (int i = M; i < N; i++){
        cout << vetor[i] << endl;
    }

    delete[] vetor;

    return 0;
    
}