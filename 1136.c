#include <stdio.h>

int modulo (int x) {
	if (x < 0) return -x;
	return x;
}

int verifica (int *vet, int B, int N) {
	int i,j, d_modular, cont = 0;
	int aux[N+1];
	for (i = 0;i <= N;i++)
		aux[i] = 0;
	for (i = 0;i < B;i++){
		for (j = 0;j < B;j++){
			d_modular = modulo (vet[i]-vet[j]);
			if (d_modular <= N)
				aux[d_modular] = 1;
		}
	}
	
	for (i = 0; i <= N;i++)
		if (aux[i] == 0)
			return 0;

	return 1;
}

int main() {
	int N,B,i;
	while (1) {
		scanf("%d%d",&N,&B);
		if (N == 0 && B == 0) break;
		int vet[B];
		for (i = 0;i < B;i++)
			scanf("%d",&vet[i]);
		int v = verifica(vet,B,N);
		if (v == 1)
			printf("Y\n");
		else
			printf("N\n");
	}
    return 0;
}
