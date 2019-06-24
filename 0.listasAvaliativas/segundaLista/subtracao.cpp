#include <iostream>
#include <cmath>
using namespace std;

int subtracao(int termos[], int primeiro[], int tamanhoPrimeiroTermo, int segundo[], int tamanhoSegundoTermo){
    int emprestimos = 0;
    int i = tamanhoSegundoTermo - 1;
    int j = tamanhoPrimeiroTermo - 1;
    while (i >= 0){
        if (primeiro[j] < segundo[i]){
            int k = j - 1;
            if (primeiro[k] != 0){
                primeiro[k] -= 1;
                primeiro[j] += 10; 
                emprestimos++;
            } else {
                while(primeiro[k] == 0){
                    if (primeiro[k] == 0){
                        k--;
                    }
                }
                if (primeiro[k] != 0){
                    primeiro[k+1] -= 1;
                    primeiro[j] += 10; 
                    emprestimos++;
                }
            }
        }
        j--;
        i--;
    }

    return emprestimos;
}

void preencheVetorSub(int termos[], int primeiro[], int tamanhoPrimeiroTermo, int segundo[], int tamanhoSegundoTermo){
    int aux = termos[0];
    int i = tamanhoPrimeiroTermo - 1;
    int resto = 10;
    float divisao = 1;
    while (i >= 0){
        float resultado = (aux % resto) / divisao;
        primeiro[i] = resultado;
        resto *= 10;
        divisao *= 10;
        i--;
    }

    aux = termos[1];
    int j = tamanhoSegundoTermo - 1;
    resto = 10;
    divisao = 1;
    while (j >= 0){
        float resultado = (aux % resto) / divisao;
        segundo[j] = resultado;
        resto *= 10;
        divisao *= 10;
        j--;
    }
}

void encontraTamanhos(int termos[], int tamanhos[], int tamanhoPrimeiroTermo, int tamanhoSegundoTermo){
    for(int j = 0; j < 2; j++){
        tamanhos[j] = 0;
        int aux = termos[j];
        
        if (aux == 0){
            tamanhos[j] = 1;
        } else {
            while (aux != 0){
                tamanhos[j] += 1;
                aux /= 10;
            }
        }
    }
}

void preencheVetorElementos(int termos[]){
    for (int i = 0; i < 2; i++){
        cin >> termos[i];
    }
}

int main(){

    int termos[2];
    int tamanhos[2];
    int tamanhoPrimeiroTermo = 0;
    int tamanhoSegundoTermo = 0;

    preencheVetorElementos(termos);
    encontraTamanhos(termos, tamanhos, tamanhoPrimeiroTermo, tamanhoSegundoTermo);
    
    tamanhoPrimeiroTermo = tamanhos[0];
    tamanhoSegundoTermo = tamanhos[1];
    int primeiro[tamanhoPrimeiroTermo];
    int segundo[tamanhoSegundoTermo];

    preencheVetorSub(termos, primeiro, tamanhoPrimeiroTermo, segundo, tamanhoSegundoTermo);

    cout << subtracao(termos, primeiro, tamanhoPrimeiroTermo, segundo, tamanhoSegundoTermo) << endl;

    return 0;
}