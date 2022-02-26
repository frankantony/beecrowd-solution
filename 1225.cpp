#include <iostream>

using namespace std;

int calculaCoral (int N, int* vet, int soma) {
	if (soma % N != 0) return -1;
	int equalizador = soma/N, resultado = 0;
	for (int i = 0;i < N;i++)
		if (vet[i] > equalizador)
			resultado += (vet[i] - equalizador);
	return resultado + 1;
}

int main () {
	int N;
	while(cin >> N) {
		int vet[N], soma = 0;
		for (int i = 0; i < N; i++) {
			cin >> vet[i];
			soma += vet[i];
		}
		cout << calculaCoral(N, vet, soma) << "\n";
	}
	return 0;
}
