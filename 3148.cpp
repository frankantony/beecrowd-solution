#include<cstdio>
#include<algorithm>

/*
max_{exp \in \{1,...N\}} \{exp * \sum_{j = exp-1}^{N-1} vet[j] \}.
*/

using namespace std;

int main() {
	int N, testes;
	scanf("%d",&testes);
	while(testes--) {
		scanf("%d",&N);
		int vet[N];
		for (int i = 0;i < N;i++)
			scanf("%d",&vet[i]);
		sort(vet, vet+N);
		long long max = 0;
		long long soma;
		for(int exp = 1; exp <= N; exp++) {
			soma = 0;
			for (int j = exp-1;j < N;j++) {
				soma += exp*vet[j];
			}
			if (max <= soma)
				max = soma;
			else
				break;
		}
		printf("%llu\n", max);
	}
    return 0;
}
