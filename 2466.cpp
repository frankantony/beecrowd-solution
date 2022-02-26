#include <cstdio>

using namespace std;

int main() {
	int N;
	scanf("%d",&N);
	int vet[N];
	for (int i = 0;i < N;i++)
		scanf("%d",&vet[i]);
	for(int i = N-1;i >= 0;i--) {
		for (int j = 0; j < i; j++) {
			vet[j] = (vet[j] * vet[j+1]);
		}
	}
	if (vet[0] == -1)
		printf("branca\n");
	else
		printf("preta\n");
    return 0;
}
