#include <cstdio>

using namespace std;

int main() {
	int N;
	scanf("%d",&N);
	int vet[N];
	for (int i = 0;i < N;i++) 
		scanf("%d",&vet[i]);
	int maior = vet[0], i;
	for (i = 1;i < N;i++) {
		if (maior < vet[i]) {
			printf("N\n");
			break;
		}
	}
	if (i == N)
		printf("S\n");
    return 0;
}
