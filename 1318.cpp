#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	int N,M;
	while (1) {
		scanf("%d",&M);
		scanf("%d",&N);
		if (N == 0 && M == 0) break;
		int vet[N+1], cont = 0, soma = 0;
		vet[N] = -1;
		for (int i = 0; i < N;i++)
			scanf("%d",&vet[i]);
		sort(vet,vet+N);
		for (int i = 0;i <= N;i++) {
			if (vet[i] != vet[i+1]) {
				if (cont != 0)
					soma++;
				cont = 0;
			} else 
				cont++;
		}
		printf("%d\n",soma);
	}

    return 0;
}


