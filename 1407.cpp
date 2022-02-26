#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	
	int N, C, K;
	while(true) {
		scanf("%d%d%d",&N,&C, &K);
		if (N == 0 && C == 0 && K == 0)
			break;
		int vet[K], valor;
		for (int i = 0;i < K;i++) 
			vet[i] = 0;
		for (int i = 0;i < N;i++) {
			for (int j = 0;j < C;j++) {
				scanf("%d", &valor);
				if (!vet[valor-1])
					vet[valor-1] = 1;
				else
					vet[valor-1]++;
			}
		}
		int menor = vet[0];
		for (int i = 0;i < K;i++)
			if (menor > vet[i])
				menor = vet[i];
		int resultado[K], p = 0;
		for (int i = 0;i < K;i++) 
			if (vet[i] == menor)
				resultado[p++] = i+1;
		sort(resultado, resultado + p);
		printf("%d", resultado[0]);
		for (int i = 1;i < p;i++)
			printf(" %d", resultado[i]);
		printf("\n");
	}
    return 0;
}
