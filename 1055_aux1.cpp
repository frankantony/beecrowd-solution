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

int soma_permutada_crescente (int *vet, int N) {
	int x = 0, y = N-1, soma = 0, meio = N/2, j = 0;
	int permutado[N];
	permutado[meio] = vet[j++];
	while(x < meio && y > meio) {
		permutado[x++] = vet[j++];
		permutado[y--] = vet[j++];
	}
	if (x < meio)
		permutado[x] = vet[j++];
	if (y > meio)
		permutado[y] = vet[j++];
/*	printf("soma_permutada_crescente\n");
	for (int i = 0;i < N;i++)
		printf("%d ",permutado[i]);
	printf("\n");
*/
	for (int i = 0;i < N-1;i++)
		soma += mod (permutado[i] - permutado[i+1]);
	return soma;
}

int soma_permutada_decrescente1 (int *vet, int N) {
	int permutado[N];
	int meio = N / 2;
	permutado[meio] = vet[0];
	int x = 1,y = N-1, i = meio + 1, j = meio - 1;
	int cont = 0, passou;
	while(1) {
		passou = 0;
		if (cont % 2 == 0) {
			if (i < N) {
				permutado[i++] = vet[y--];
				passou = 1;
			}
			if (j >= 0)	{
				permutado[j--] = vet[y--];
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
	printf("soma_permutada_decrescente1\n");
	for (int i = 0;i < N;i++)
		printf("%d ",permutado[i]);
	printf("\n");
	
	int soma = 0;
	for (int i = 0;i < N-1;i++)
		soma += mod (permutado[i] - permutado[i+1]);
	return soma;

}

int soma_permutada_decrescente2 (int *vet, int N) {
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
		int soma1 = soma_permutada_decrescente2(vet,N);

		sort(vet,vet + N);
		int soma2 = soma_permutada_decrescente2(vet,N);

		int x[] = {soma1, soma2};

		int max = x[0];
		for (int i = 1;i < 2;i++)
			if (max < x[i])
				max = x[i];
		printf("Case %d: ", contador);
		printf("%d\n", max);

		contador++;
	}
    return 0;
}

