#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	
	int N, K, cont;
	while(1) {
		scanf("%d%d",&N,&K);
		if (N == 0 && K == 0) break;
		int vetor[N+1];
		for (int i = 0; i < N;i++)
			scanf("%d",&vetor[i]);
		sort(vetor,vetor + N);
		vetor[N] = -1;
		int cont = 1, ocorrencia = 0;
		
		for (int i = 0;i < N; i++) {
			if (vetor[i] != vetor[i+1]) {
				if (cont >= K)
					ocorrencia++;
				cont = 1;
			}
			else 
				cont++;
		}
		printf("%d\n",ocorrencia);
	}
    return 0;
}
