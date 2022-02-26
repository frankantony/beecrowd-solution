#include <cstdio>

using namespace std;

int main() {
	int N,I,F;
	scanf("%d%d%d", &N,&I,&F);
	int vet[N];
	for (int i = 0;i < N;i++)
		scanf("%d",&vet[i]);
	int cont = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i+1; j < N; j++) {
			int soma = vet[i] + vet[j];
			if (soma >= I && soma <= F) 
				cont++;
		}
	}

	printf("%d\n", cont);
    return 0;
}
