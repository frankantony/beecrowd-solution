#include <cstdio>
#include<algorithm>

using namespace std;

int mod (int x) {
	if (x < 0) 
		return -x;
	return x;
}

bool compara (int x, int y) {
	return x > y;
}

int calcula_soma_permutada (int *vet, int N) {
	int permutado[N];
	int meio = N/2;
	permutado[meio] = vet[0];
	int x = 1,y = N-1, i = meio + 1, j = meio - 1;
	int cont = 0, passou;
	while(1) {
		passou = 0;
		if (cont % 2 == 0) {
			if (j >= 0)	{
				permutado[j--] = vet[y--];
				passou = 1;
			}
			if (i < N) {
				permutado[i++] = vet[y--];
				passou = 1;
			}
		}
		else {
			if (j >= 0) {
				permutado[j--] = vet[x++];
				passou = 1;
			}
			if (i < N) {
				permutado[i++] = vet[x++];
				passou = 1;
			}
		}
		if (!passou)
			break;
		cont++;
	}
	int soma = 0;
	for (int i = 0;i < N-1;i++)
		soma += mod (permutado[i] - permutado[i+1]);
	return soma;
}

int main() {
	int N, testes;
	scanf("%d",&testes);
	int contador = 1;
	while(contador <= testes) {
		scanf("%d",&N);
		int vet[N];
		for (int i = 0;i < N;i++)
			scanf("%d",&vet[i]);

		sort(vet,vet + N, compara);
		int soma1 = calcula_soma_permutada(vet,N);

		sort(vet,vet + N);
		int soma2 = calcula_soma_permutada(vet,N);

		printf("Case %d: ", contador);
		if (soma1 <= soma2)
			printf("%d\n", soma2);
		else
			printf("%d\n", soma1);

		contador++;
	}
    return 0;
}

