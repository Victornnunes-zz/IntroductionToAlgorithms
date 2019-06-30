#include <iostream>
#include <fstream>

using namespace std;

struct aluno {
    int matricula;
    float nota;
};

int main(){

    ifstream arquivo("alunos.bin", ios::binary);
    arquivo.seekg(0,arquivo.end);
    arquivo.seekg(0,arquivo.end);
    int tamanho =  (arquivo.tellg()/sizeof(aluno));
    arquivo.seekg(0,arquivo.beg);
	
	aluno *vetor = new aluno[tamanho];

    int matriculaBuscada;
    cin >> matriculaBuscada;

	if(arquivo){
		for (int i = 0; i < tamanho; i++){
			aluno tmp;
			arquivo.read((char*) (&tmp), sizeof(aluno));
			vetor[i] = tmp;
            if (tmp.matricula == matriculaBuscada){
                cout << tmp.nota;
            }
		}
	}
	arquivo.close();

    return 0;
}