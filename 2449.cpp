#include <cstdio>
#include<cstdlib>

using namespace std;

int main() {
	int N,M;
	scanf("%d%d",&N,&M);
	int vet[N], aux[N];
	for (int i = 0;i < N;i++) {
		scanf("%d",&vet[i]);
		aux[i] = vet[i];
	}
	int soma1 = 0, soma2 = 0, diferenca;
	
	for (int i = 0; i < N-1; i++) {
		diferenca = M - vet[i];
		soma1 += abs(diferenca);
		vet[i] = vet[i] + diferenca;
		vet[i+1] = vet[i+1] + diferenca;
	}

	for (int i = N-1; i >= 1; i--) {
		diferenca = M - aux[i];
		soma2 += abs(diferenca);
		aux[i] = aux[i] + diferenca;
		aux[i-1] = aux[i-1] + diferenca;
	}
	
	if (aux[N-1] == M && vet[N-1] == M) {
		if (soma1 <= soma2)
			printf("%d\n", soma1);
		else
			printf("%d\n", soma2);
	}
	else if(aux[N-1] == M)
		printf("%d\n", soma2);
	else if(vet[N-1] == M)
		printf("%d\n", soma1);
	
    return 0;
}
