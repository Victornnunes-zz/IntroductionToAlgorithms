int buscaBinaria(int vetor[], int tamanho, int chave){
	int inicio = 0;
	int final = tamanho - 1;
	int meio;
	while (inicio <= final){
		meio = (inicio + final) / 2;
		if (vetor[meio] == busca){
			return meio;
		} else {
			if (busca > vetor[meio]){
				inicio = meio + 1;
			} else {
				final = meio - 1;
			}
		}
	}
	return -1;
}

int main() {
	int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int tamanho = 10;
	int chave;
	cin >> chave;
	int busca = buscaBinaria(vetor, tamanho, chave);
	if (busca == -1){
		cout << "Não encontrado" << endl;
	} else {
		cout << busca << endl;
	}
	return 0;
}