#include <cstdio>
 
using namespace std;

int maior (int *vet, int n) {
	int melhor_soma = 0, soma_corrente = 0;

	for (int i = 0; i < n; i++) {
		if (0 < soma_corrente + vet[i])
			soma_corrente = soma_corrente + vet[i];
		else
			soma_corrente = 0;
		if (soma_corrente > melhor_soma)
			melhor_soma = soma_corrente; 
	}
	return melhor_soma;
}

int maior2 (int *vet, int n) {
	int soma[n];
	soma[0] = vet[0];
	for (int i = 1;i < n;i++) {
		soma[i] = vet[i];
		if (soma[i-1] >= 0)
			soma[i] = soma[i-1] + soma[i];
		else
			soma[i-1] = 0;
	}
	
	int max = soma[0];
	for (int i = 1;i < n;i++)
		if (max < soma[i])
			max = soma[i];
	return max;
}

int main() {
	int N, custo;
	while(scanf("%d",&N) != EOF) {
		scanf("%d", &custo);
		int vet[N];
		for (int i = 0;i < N;i++) {
			scanf("%d",&vet[i]);
			vet[i] = vet[i] - custo;
		}
		printf("%d\n", maior (vet,N));
	}
	return 0;
}
