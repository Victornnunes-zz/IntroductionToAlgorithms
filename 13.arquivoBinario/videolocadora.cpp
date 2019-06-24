#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct filmes{
    string titulo;
    int identificador;
    string disponibilidade;
};

int main(){

    int quantidade = 1;
    int i = 0;
    filmes *ptrFilmes = new filmes[quantidade];
    int opcao = 0;

    while (opcao != 5){

        cin >> opcao;

        if (opcao != 5){
            if (opcao == 1){
                ifstream acervo("videolocadora");
                string buscaFilme;

                cin >> buscaFilme;
                
                bool encontrado = false;
                for (int i = 0; i < quantidade; i++){
                    if (ptrFilmes[i].titulo == buscaFilme && ptrFilmes[i].disponibilidade == "disponivel"){
                        cout << ptrFilmes[i].identificador << endl;
                        encontrado = true;
                    } else {
                        cout << "Todos alugados." << endl;
                        encontrado = true;
                    }

                    if (encontrado == false){
                        cout << "Filme inexistente." << endl;
                    }
                }
                acervo.close();

            } else if (opcao == 2){
                ifstream acervo("videolocadora");
                int identificadorDevolucao;
                cin >> identificadorDevolucao;

                bool achou = false;
                for (int i = 0; i < quantidade; i++){
                    if (ptrFilmes[i].identificador == identificadorDevolucao && ptrFilmes[i].disponibilidade == "alugado"){
                        ptrFilmes[i].disponibilidade = "disponivel";
                        achou = true;
                    } else if (ptrFilmes[i].identificador == identificadorDevolucao && ptrFilmes[i].disponibilidade == "disponivel"){
                        cout << "Nao estava alugado." << endl;
                    }
                }

                if (achou == false){
                    cout << "Filme inexistente." << endl;
                }
                acervo.close();

            } else if (opcao == 3){
                ofstream acervo("videolocadora", ios::app);
                string tituloFilme;
                int identificadorFilme;
                string disponibilidadeFilme;

                getline(cin, tituloFilme);
                cin.ignore();
                cin >> identificadorFilme >> disponibilidadeFilme;

                ptrFilmes[i].titulo = tituloFilme;
                ptrFilmes[i].identificador = identificadorFilme;
                ptrFilmes[i].disponibilidade = disponibilidadeFilme;

                acervo << ptrFilmes[i].titulo << ptrFilmes[i].identificador << ptrFilmes[i].disponibilidade;

                acervo.close();
                i++;
                quantidade++;

            } else if (opcao == 4){
                ifstream acervo("videolocadora");

                int identificadorBuscado;
                cin >> identificadorBuscado;

                for (int i = 0; i < quantidade; i++){
                    if (ptrFilmes[i].identificador == identificadorBuscado){
                        ptrFilmes[i].disponibilidade = "removido";
                    }
                }
                acervo.close();
            }
        }
    }

    return 0;
}