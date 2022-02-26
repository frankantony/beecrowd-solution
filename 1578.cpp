#include <cstdio>

using namespace std;

int cont (unsigned long long N) {
	int cont =  0;
	if (N == 0) return 1;
	while (N != 0) {
		cont++;
		N /= 10;
	}
	return cont;
}

int main() {
	int N, testes, valor;
	scanf("%d",&testes);
	int contador = 1;
	while(contador <= testes) {
		scanf("%d",&N);
		unsigned long long mat[N][N];
		int vet[N];
		int conta[N][N];
		for (int i = 0;i < N;i++) {
			for (int j = 0;j < N;j++) {
				scanf("%llu",&mat[i][j]);
				mat[i][j] *= mat[i][j];
			}
		}

		int maior;
		for (int i = 0;i < N;i++) {
			maior = 0;
			for (int j = 0;j < N;j++) {
				conta[j][i] = cont (mat[j][i]);
				if (maior < conta[j][i])
					maior = conta[j][i];
			}
			vet[i] = maior;
		}
		printf("Quadrado da matriz #%d:\n", contador+3);
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				int c = conta[i][j];
				for (int k = 0; k < vet[j]-c; k++)
					printf(" ");
				if(j != 0)
					printf(" ");
				printf("%llu", mat[i][j]);
			}
			printf("\n");
		}
		if (contador != testes)
			printf("\n");
		contador++;
	}
    return 0;
}

