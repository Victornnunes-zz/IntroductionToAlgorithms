#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct contatos{
    string nome;
    int telefone;
    string email;
    bool ativo;
};

int main(){

    int quantidade = 1;
    int i = 0;
    contatos *ptrContatos = new contatos[quantidade];
    int opcao = 0;

    while (opcao != 5){

        cin >> opcao;

        if (opcao != 5){
            if (opcao == 1){
                ifstream lista("agenda");
                string buscaContatoNome;

                cin >> buscaContatoNome;
                
                bool encontrado = false;
                for (int i = 0; i < quantidade; i++){
                    if (ptrContatos[i].nome == buscaContatoNome && ptrContatos[i].ativo == true){
                        cout << ptrContatos[i].telefone << endl;
                        cout << ptrContatos[i].email << endl;
                        encontrado = true;
                    }

                    if (encontrado == false){
                        cout << "Contato inexistente." << endl;
                    }
                }
                lista.close();

            } else if (opcao == 2){
                ofstream lista("agenda", ios::app);
                string nomeContato;
                int telefoneContato;
                string emailContato;

                getline(cin, nomeContato);
                cin.ignore();
                cin >> telefoneContato >> emailContato;

                ptrContatos[i].nome = nomeContato;
                ptrContatos[i].telefone = telefoneContato;
                ptrContatos[i].email = emailContato;
                ptrContatos[i].ativo = true;

                lista << ptrContatos[i].nome << ptrContatos[i].telefone << ptrContatos[i].telefone;

                lista.close();
                i++;
                quantidade++;

            } else if (opcao == 3){
                ofstream lista("agenda");
                string buscaContatoNomeEdicao;

                cin >> buscaContatoNomeEdicao;

                string nomeContato;
                int telefoneContato;
                string emailContato;

                getline(cin, nomeContato);
                cin.ignore();
                cin >> telefoneContato >> emailContato;

                bool achou = false;
                for (int i = 0; i < quantidade; i++){
                    if (ptrContatos[i].nome == buscaContatoNomeEdicao && ptrContatos[i].ativo == true){
                        ptrContatos[i].nome = nomeContato;
                        ptrContatos[i].telefone = telefoneContato;
                        ptrContatos[i].email = emailContato;

                        lista << ptrContatos[i].nome << ptrContatos[i].telefone << ptrContatos[i].telefone;
                        achou = true;
                    }

                    if (achou == false){
                        cout << "Contato inexistente." << endl;
                    }
                }
                lista.close();

            } else if (opcao == 4){
                ifstream lista("agenda");
                string buscaContatoNomeDeleta;

                cin >> buscaContatoNomeDeleta;

                bool achou = false;
                for (int i = 0; i < quantidade; i++){
                    if (ptrContatos[i].nome == buscaContatoNomeDeleta){
                        ptrContatos[i].ativo = false;
                        achou = true;
                    }

                    if (achou == false){
                        cout << "Contato inexistente." << endl;
                    }
                }
                lista.close();
            }
        }
    }

    return 0;
}