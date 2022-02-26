#include<cstdio>

using namespace std;

int main() {
	int N, M;
	scanf("%d",&N);
	int vet[N];
	for (int i = 0;i < N;i++)
		scanf("%d",&vet[i]);
	scanf("%d",&M);
	int remove;
	for (int i = 0;i < M;i++) {
		scanf("%d",&remove);
		for (int j = 0;j < N;j++) {
			if (remove == vet[j]) {
				vet[j] = 0;
				break;
			}
		}
	}
	int primeira_vez = 1;
	for (int i = 0;i < N;i++) {
		if (vet[i] != 0) {
			if (primeira_vez) {
				printf("%d",vet[i]);
				primeira_vez = 0;
			}
			else
				printf(" %d",vet[i]);
		}
	}
	printf("\n");
    return 0;
}

