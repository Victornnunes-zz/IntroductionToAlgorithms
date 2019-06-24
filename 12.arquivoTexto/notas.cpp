#include <fstream>
#include <iostream>
using namespace std;

struct notas{
    int matricula;
    int nota;
};

void preencheNovoArquivo (notas alunos[], ofstream &segundoArquivo, int quantidade){
    for (int i = 0; i < quantidade; i++){
        segundoArquivo << alunos[i].matricula << " " << alunos[i].nota << endl;
    }
}

void novasNotas (notas alunos[], int quantidade, int maior){
    float novaNota = 0;
    for (int i = 0; i < quantidade; i++){
        if (alunos[i].nota > maior){
            maior = alunos[i].nota;
        }
    }
    for (int i = 0; i < quantidade; i++){
        novaNota = alunos[i].nota;
        novaNota /= maior;
        novaNota *= 100;
        alunos[i].nota = novaNota;
    }
}

void preencheAlunos (notas alunos[], ifstream &arquivo, int numeroMatricula, int notaAluno){
    int i = 0;
    while (arquivo >> numeroMatricula >> notaAluno){
        alunos[i].matricula = numeroMatricula;
        alunos[i].nota = notaAluno;
        i++;
    }
}

int main (){

    ifstream contaNotas("notas.txt");
    int quantidade = 0;
    int numeroMatricula, notaAluno;
    while (contaNotas >> numeroMatricula >> notaAluno){
        quantidade++;
    }
    contaNotas.close();

    notas alunos[quantidade];
    int maior = 0;

    ifstream arquivo("notas.txt");
    preencheAlunos(alunos, arquivo, numeroMatricula, notaAluno);

    novasNotas(alunos, quantidade, maior);

    ofstream segundoArquivo("notas.txt");
    preencheNovoArquivo(alunos, segundoArquivo, quantidade);
    return 0;
}
