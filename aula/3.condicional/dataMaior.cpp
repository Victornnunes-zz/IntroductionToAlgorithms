#include <iostream>
using namespace std;
int main(){


	int diaPrimeiro;
	int mesPrimeiro;
	int anoPrimeiro;
	int diaSegundo;
	int mesSegundo;
	int anoSegundo;

	cin >> diaPrimeiro >> mesPrimeiro >> anoPrimeiro >> diaSegundo >> mesSegundo >> anoSegundo;

	if (anoPrimeiro > anoSegundo){
		cout << diaPrimeiro << " " << mesPrimeiro << " " << anoPrimeiro << endl;
	} else if (anoPrimeiro < anoSegundo){
		cout << diaSegundo << " " << mesSegundo << " " << anoSegundo << endl;
	} else if (anoPrimeiro == anoSegundo){
		if (mesPrimeiro > mesSegundo){
			cout << diaPrimeiro << " " << mesPrimeiro << " " << anoPrimeiro << endl;
		} else if (mesPrimeiro < mesSegundo){
			cout << diaSegundo << " " << mesSegundo << " " << anoSegundo << endl;	
		} else if (mesPrimeiro == mesSegundo){
			if (diaPrimeiro > diaSegundo){
				cout << diaPrimeiro << " " << mesPrimeiro << " " << anoPrimeiro << endl;
			} else if (diaPrimeiro < diaSegundo){
				cout << diaSegundo << " " << mesSegundo << " " << anoSegundo << endl;
			} else if (diaPrimeiro == diaSegundo){
				cout << diaPrimeiro << " " << mesPrimeiro << " " << anoPrimeiro << endl;
			}
		}
	}

	return 0;
}