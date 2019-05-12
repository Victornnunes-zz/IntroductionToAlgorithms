#include<iostream>
#include<cstring>

using namespace std;

void maiorMenorPalindromo(char *palavra){
	char maior[200] = "";
	char menor[200];

	int TamanhoPalavra = strlen(palavra);

	if (TamanhoPalavra > strlen(maior)){
		cout << palavra << endl;
	} else if (TamanhoPalavra < strlen(menor)){
		cout << palavra << endl;
	}

}

bool palindromo(char *palavra) {
	bool ePalindromo = false;	
	int i = 0;
    int j = strlen(palavra);
    while (i >= j){
    	if(palavra[i] != palavra[j]){
    		cout << palavra << endl;
        	ePalindromo = false;
    	} else {
    		ePalindromo = true;
    	}
    }
    return ePalindromo;
    cout << ePalindromo << endl;
 }

int main() {
    char palavra[200];
    int quantidade;
    cin >> quantidade;

    int i = 0;
    while (i < quantidade){
        cin >> palavra;

        palindromo(palavra);

        if(palindromo(palavra)){
        	maiorMenorPalindromo(palavra);
        }
        i++;
    }

    return 0;
} 