#include<cstdio>
#include<algorithm>
 
using namespace std;

int maior_frequencia (int *vet, int N) {
	int mais_frequente = vet[0], maior_frequencia = 0, cont = 1;
	for (int i = 0; i < N; i++) {
		if(vet[i] == vet[i+1]) {			
			cont++;
		}
		else {
			if (cont >= maior_frequencia) {
				maior_frequencia = cont;
				mais_frequente = vet[i];
			}
			cont = 1;
		}		
	}
	return mais_frequente;
}

int main() {
	int N, Q, numero, X, linha, coluna;
	scanf("%d%d",&N,&Q);
	int mat[N][N], aux[N+1];
	for (int i = 0;i < N;i++)
		for (int j = 0;j < N;j++)
			mat[i][j] = 0;
	while(Q >= 1) {
		scanf("%d",&numero);
		if (numero == 1) {
			scanf("%d%d",&linha, &X);
			for (int i = 0;i < N;i++)
				mat[linha-1][i] = X;
		}
		else if(numero == 2) {
			scanf("%d%d",&coluna, &X);
			for (int i = 0;i < N;i++)
				mat[i][coluna-1] = X;
		}
		else if (numero == 3) {
			scanf("%d",&linha);
			for (int i = 0;i < N;i++)
				aux[i] = mat[linha-1][i];
			sort(aux, aux + N);
			aux[N] = -12121;
			printf("%d\n", maior_frequencia(aux, N));
		}
		else if (numero == 4) {
			scanf("%d",&coluna);
			for (int i = 0;i < N;i++)
				aux[i] = mat[i][coluna-1];
			sort(aux, aux + N);
			aux[N] = -12121;
			printf("%d\n", maior_frequencia(aux, N));
		}

		Q--;
	}
    return 0;
}
