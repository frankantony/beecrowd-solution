#include<cstdio>

using namespace std;

void shift (int *vet, int N) {
	int valor = vet[N-1];
	for (int i = N-1; i > 0; i--)
		vet[i] = vet[i-1];
	vet[0] = valor;
}

int main() {
	int N, etapas;
	scanf("%d%d",&N,&etapas);
	int S[N], trabalhadores[N];
	for (int i = 0;i < N;i++) {
		scanf("%d",&S[i]);
		trabalhadores[i] = S[i];
	}
	
	for (int i = 1;i < etapas;i++) {
		shift(S,N);
		for (int j = 0;j < N;j++)	
			trabalhadores[j] = trabalhadores[j] + S[j];
	}
	printf("%d", trabalhadores[0]);
	for (int i = 1;i < N;i++)
		printf(" %d", trabalhadores[i]);
	printf("\n");
    return 0;
}

