#include <iostream>

using namespace std;

void shift (int N, int* vet, int inicio, int fim) {
	int valor = vet[fim];
	for (int i = fim; i >= inicio + 1;i--) {
		vet[i] = vet[i-1];
	}
	vet[inicio] = valor;
}

int pegaIndice(int *vet, int N, int valor){
	for (int i = 0;i < N;i++)
		if (vet[i] == valor)
			return i;
}

int main () {
	int N,valor;
	
	while(cin >> N) {
		int vet1[N], vet3[N], soma = 0;
		for (int i = 0; i < N; i++) {
			cin >> valor;
			vet1[i] = valor;
		}
		for (int i = 0; i < N; i++) {
			cin >> vet3[i];
		}
		
		for (int i = 0; i < N; i++) {
			int valor = pegaIndice (vet1, N, vet3[i]) - i;
			int inicio = i, fim = pegaIndice (vet1, N, vet3[i]);
			soma += valor;
			shift(N, vet1, inicio, fim);
		}
		cout << soma << "\n";
	}
	return 0;
}
