#include<cstdio>
#include<algorithm>

using namespace std;

bool compara (int a, int b) {
	if (a != b)
		return a > b;
}

int main() {
	int N,M,valor;
	while (1) {
		scanf("%d",&M);
		scanf("%d",&N);
		int vet[10000],copia[10000];
		for (int i = 0; i < 10000;i++)
			vet[i] = 0;
		if (N == 0 && M == 0) break;
		for (int i = 0; i < N*M; i++){
			scanf("%d",&valor);
			vet[valor] += 1;
		}
		for (int i = 0; i < 10000; i++){
			copia[i] = vet[i];
		}
		sort(vet, vet+10000, compara);
		int c = vet[0], i = 1;
		while (vet[i] == c) {
			i++;
		}
		int primeiro = 1;
		for (int j = 0; j < 10000;j++)
			if (copia[j] == vet[i]) 
				printf("%d ",j);
		printf("\n");
	}

    return 0;
}


