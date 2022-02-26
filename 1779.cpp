#include<cstdio>

using namespace std;

int main() {
	
	int casos, N, contador = 1;
	scanf("%d",&casos);
	while(contador <= casos) {
		scanf("%d", &N);
		int vet[N+1];
		vet[N] = -1;
		for (int i = 0;i < N;i++)
			scanf("%d",&vet[i]);
		int maior = 0;
		int tamanho = 0;
		for (int i = 0; i < N;i++) 
			if (maior < vet[i])
				maior = vet[i];
		int cont = 1;
		for (int i = 0; i < N; i++) {
			if (vet[i] == maior && vet[i] == vet[i+1])
					cont++;
			else {
				if (tamanho < cont)
					tamanho = cont;
				cont = 1;
			}
		}

		printf("Caso #%d: %d\n", contador, tamanho);
		contador++;
	}
    return 0;
}
